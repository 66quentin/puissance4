#include "jouer.h"


int jouer (char jeu[6][7], int id, int erreur){
	int i=0,colonne;
	char c;
	
	afficher(jeu,id);
	
	if(erreur==1)		
		printf(" Coup précédent impossible\n");
		
	scanf(" %c",&c);
	colonne=c-'0'-1;
	
	if(verifier(jeu,colonne)==0)
		return jouer(jeu,id,1);
		
	while(i < 6 && jeu[i][colonne]=='.')
		i++;
	i--;
	jeu[i][colonne]=joueur(id);
	if(alignement_vertical(jeu,colonne,joueur(id)) || alignement_horizontal(jeu,i,joueur(id)) || alignement_diagonal1(jeu,colonne,i,joueur(id)) || alignement_diagonal2(jeu,colonne,i,joueur(id)))
		return id;
	return jouer(jeu,id%2+1,0);
}

		
