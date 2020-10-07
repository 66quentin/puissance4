#include "testunitaire.h"

void test () {
	char jeu[6][7],jeu2[6][7];
	
	charger(jeu,"data_tst/verifier.txt");
	if(verifier(jeu, 0)==0 && verifier(jeu, 1)==1 && verifier(jeu,8)==0)
		printf("Test verifier(): validé\n");
	else
		printf("Test verifier(): échec\n");
	
	charger(jeu,"data_tst/diagonal1.txt");
	if(alignement_diagonal1(jeu,2,1,'O')==1 && alignement_diagonal1(jeu,3,2,'X')==0)
		printf("Test alignement_diagonal1(): validé\n");
	else
		printf("Test alignement_diagonal1(): échec\n");
	
	charger(jeu,"data_tst/diagonal2.txt");
	if(alignement_diagonal2(jeu,3,2,'X')==1 && alignement_diagonal2(jeu,3,2,'O')==0)
		printf("Test alignement_diagonal2(): validé\n");
	else
		printf("Test alignement_diagonal2(): échec\n");
		
	charger(jeu,"data_tst/horizontal.txt");
	if(alignement_horizontal(jeu,4,'O')==1 && alignement_horizontal(jeu,5,'O')==0)
		printf("Test alignement_horizontal(): validé\n");
	else
		printf("Test alignement_horizontal(): échec\n");
		
	charger(jeu,"data_tst/vertical.txt");
	if(alignement_vertical(jeu,6,'O')==1 && alignement_vertical(jeu,6,'X')==0)
		printf("Test alignement_vertical(): validé\n");
	else
		printf("Test alignement_vertical(): échec\n");

		
	charger(jeu,"data_tst/initialiser.txt");
	initialiser(jeu2);
	if(comparer(jeu,jeu2))
		printf("Test initialiser(): validé\n");
	else
		printf("Test initialiser(): échec\n");
}


