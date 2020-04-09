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
	printf("Choisissez un niveau entre:facile, moyenne ou difficile \n");
	printf("Inserez 1 pour facile, 2 pour moyenne et 3 pour difficile: \n");
	int a;
	scanf("%d",&a);
	int count=0;
	int count1=0;
	switch(a)
	{
		case 1:
			do
			{
				printf("inserez une valeur: ");
				scanf("%d",&choix_joueur);
				plus_moins(choix_joueur,Valeur_a_trouver);
			}
			while(choix_joueur != Valeur_a_trouver);
			break;
		case 2:
			do
			{
				printf("inserez une valeur: ");
				scanf("%d",&choix_joueur);
				count++;
				plus_moins(choix_joueur,Valeur_a_trouver);
				if(count==25)
				{
					printf("Vous avez dépassé la limite d'essaie\n");
					break;
				}
			}
			while(choix_joueur != Valeur_a_trouver);
			break;
		case 3:
			do
			{
				printf("inserez une valeur: ");
				scanf("%d",&choix_joueur);
				count1++;
				plus_moins(choix_joueur,Valeur_a_trouver);
				if(count1==10)
				{
					printf("Vous avez dépassé la limite d'essaie\n");
					break;
				}
			}
			while(choix_joueur != Valeur_a_trouver);
			break;
		default:
			printf("vous deviez choisir entre les 3 options disponible\n");
			break;
	}


}
