#include "testunitaire.h"
#include "initialiser.h"
#include "jouer.h"
#include "simulation.h"

int main (void) {
	char jeu[6][7],recommencer='r',choix;
	int gagnant;
	
	printf("Nouvelle partie (n)\nTests unitaires (t)\nSimulation (s)\n");
	scanf(" %c",&choix);
	
	if(choix=='n'){
		while(recommencer=='r'){
			initialiser(jeu);
			printf("\nUne nouvelle partie commence !\nO: J1, pion jaune\nX: J2, pion rouge\n.: case vide\n\n");
			gagnant=jouer(jeu,1,0);
			fin(gagnant);
			printf("\nRecommencer (r) ou quitter (q) ?");
			scanf(" %c",&recommencer);
		}
	}
	else if(choix=='t')
		test();
	else if(choix=='s')
		simulation();
	else
		exit(-1);
	return 0;
}
