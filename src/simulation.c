#include "initialiser.h"
#include "jouer.h"
#include "simulation.h"

void simulation() {
	char jeu[6][7], jeu2[6][7],choix, recommencer, ouverture[100], ouverture2[100];
	int gagnant=0,c,id=2;
	FILE *fichier;
	
	printf("Simulation 1, 2 ou 3 ?\n");
	scanf(" %s",&choix);
	
	snprintf(ouverture, sizeof(ouverture), "%s%c%s", "data_simul/simul", choix, ".txt");
	snprintf(ouverture2, sizeof(ouverture2), "%s%c%s", "data_simul/res_simul", choix, ".txt");

	fichier=fopen(ouverture,"r");
	if (fichier == NULL){
		printf("Numéro invalide !");
 		simulation();
 	}
 	
	initialiser(jeu);
	while(fscanf(fichier,"%d",&c)!=EOF && gagnant==0)
		gagnant=jouer_simulation(jeu,id=id%2+1,c);
	
	fin(gagnant);
	charger(jeu2,ouverture2);
	
	if(comparer(jeu,jeu2))
		printf("\n\nSimulation réalisée avec succès\n");
	else
		printf("\nErreur lors de la simulation\n");
		
	fclose(fichier);
	printf("\nNouvelle simulation?[0/1]");
	scanf(" %c",&recommencer);
	if(recommencer=='1')
		simulation();
}

int jouer_simulation (char jeu[6][7], int id, int colonne){
	int i=0;
	afficher(jeu,id);
	printf("%d\n",colonne);
	colonne--;
	if(verifier(jeu,colonne)==0){
		printf("Erreur, colonne impossible!\n");
		exit(-1);
	}
	while(i < 6 && jeu[i][colonne]=='.')
		i++;
	i--;
	jeu[i][colonne]=joueur(id);
	if(alignement_vertical(jeu,colonne,joueur(id)) || alignement_horizontal(jeu,i,joueur(id)) || alignement_diagonal1(jeu,colonne,i,joueur(id)) || alignement_diagonal2(jeu,colonne,i,joueur(id)))
		return id;
	return 0;
}

