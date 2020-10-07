#include "fin.h"

void fin(int vainqueur){
	printf("\nFin de la partie\n");
	switch(vainqueur){
		case 0: printf("Pas de gagnant"); break;
		case 1: printf("Joueur O jaune gagne");break;
		case 2: printf("Joueur X rouge gagne");break;
	}
}
