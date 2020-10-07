#include "initialiser.h"

void initialiser(char jeu[6][7]){
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<7;j++)
			jeu[i][j]='.';
	}
}
