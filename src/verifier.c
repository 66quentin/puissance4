#include "verifier.h"

_Bool verifier(char jeu[6][7], int colonne){
	if(colonne < 0 || colonne > 6 || jeu[0][colonne] != '.')
		return 0;
	return 1;
}

_Bool alignement_vertical(char jeu[6][7], int colonne, char joueur){
	int i=0,compteur=0;
	while(compteur<4 && i < 7){
		if(jeu[i][colonne]==joueur)
			compteur++;
		else
			compteur=0;
		i++;
	}
	if(compteur>=4)
		return 1;
	return 0;
}

_Bool alignement_horizontal(char jeu[6][7], int ligne, char joueur){
	int i=0,compteur=0;
	while(compteur<4 && i < 7){
		if(jeu[ligne][i]==joueur)
			compteur++;
		else
			compteur=0;
		i++;
	}
	if(compteur>=4)
		return 1;
	return 0;
}

_Bool alignement_diagonal1(char jeu[6][7], int colonne, int ligne, char joueur){
	int ligne_init, colonne_init, compteur=0;
	if(ligne < colonne){
		ligne_init=0;
		colonne_init=colonne-ligne;
	}else if(colonne < ligne){
		colonne_init=0;
		ligne_init=ligne-colonne;
	}else if(ligne==colonne){
		ligne_init=0;
		colonne_init=0;
	}
	while(colonne_init < 7 && ligne_init < 6 && compteur!=4){
		if(jeu[ligne_init][colonne_init]==joueur)
			compteur++;
		else
			compteur=0;
		colonne_init++;
		ligne_init++;
	}
	if(compteur >= 4)
		return 1;
		
	return 0;
}

_Bool alignement_diagonal2(char jeu[6][7], int colonne, int ligne, char joueur){
	int ligne_init, colonne_init, compteur=0;
	if(ligne <= (6-colonne)){
		ligne_init=0;
		colonne_init=colonne+ligne;
	}else{
		ligne_init=ligne-(6-colonne);
		colonne_init=6;
	}
	while(colonne_init >= 0 && ligne_init < 6 && compteur!=4){
		if(jeu[ligne_init][colonne_init]==joueur)
			compteur++;
		else
			compteur=0;
		colonne_init--;
		ligne_init++;
	}
	if(compteur >= 4)
		return 1;
		
	return 0;
}
