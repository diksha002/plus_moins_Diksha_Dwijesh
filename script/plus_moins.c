#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int plus_moins(int choix_joueur,int Valeur_a_trouver)
{
	if(choix_joueur==Valeur_a_trouver)
	{
		printf("-------!!!!BINGO!!!!-------\n");
	}
	else if(choix_joueur>=Valeur_a_trouver)
	{
		printf("Plus grand que la valeur\n");
	}
	else
	{
		printf("Plus petit que la valeur\n");
	}
}

int main()
{
	srand (time(NULL));
	int Valeur_a_trouver = rand() % 101;
	int choix_joueur;
	printf("inserez une valeur: ");
	scanf("%d",&choix_joueur);
	plus_moins(choix_joueur,Valeur_a_trouver);
	while(choix_joueur != Valeur_a_trouver)
	{
		printf("inserez une valeur: ");
		scanf("%d",&choix_joueur);
		plus_moins(choix_joueur,Valeur_a_trouver);
	}

}
