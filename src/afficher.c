#include "afficher.h"

char joueur(int id){
	if(id==1)
		return 'O';
	return 'X';
}

void afficher(char jeu[6][7], int id){
	int i,j;
	system("clear");
	for(i=0;i<6;i++){
		for(j=0;j<7;j++)
			printf(" %c ", jeu[i][j]);
		printf("\n");
	}
	for(i=0;i<7;i++)
		printf("---");
	printf("\n");
	for(i=1;i<8;i++)
		printf(" %d ",i);
	printf("\nA %c de jouer. Quelle colonne ?\n", joueur(id));
}
