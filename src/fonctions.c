#include "fonctions.h"

void charger(char jeu[6][7], char* fichier){
	FILE * f;
	char * ligne = NULL;
	size_t len = 0;
	ssize_t read;
	int i,j=0;
	f = fopen(fichier, "r");
	if (f == NULL)
 		exit(EXIT_FAILURE);

	while ((read = getline(&ligne, &len, f)) != -1) {
		for(i=0;i<7;i++)
			jeu[j][i]=ligne[i];
		j++;
    	}

	fclose(f);
	free(ligne);
}

int comparer(char jeu1[6][7], char jeu2[6][7]){
	int i,j,res=1;
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			if(jeu1[i][j]!=jeu2[i][j])
				res=0;
		}
	}
	return res;
}
