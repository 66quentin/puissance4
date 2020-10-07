#include <stdio.h>
_Bool verifier(char jeu[6][7], int colonne);
_Bool alignement_vertical(char jeu[6][7], int colonne, char joueur);
_Bool alignement_horizontal(char jeu[6][7], int ligne, char joueur);
_Bool alignement_diagonal1(char jeu[6][7], int colonne, int ligne, char joueur);
_Bool alignement_diagonal2(char jeu[6][7], int colonne, int ligne, char joueur);
