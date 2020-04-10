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
	printf("Choisissez votre mode joueur: 1 joueur ou 2 joueurs\n");
	printf("Inserez 1 pour un seul joueur et 2 pour deux joueurs\n");
	int b;
	int c;
	scanf("%d",&b);
	int count_joueur=c;
	switch(b)
	{
		case 1:
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
		case 2:
			//Pour joueur_1
			printf("-----Joueur_1----- \n");
			printf("Inserez le nombre d'essaie\n");
			scanf("%d",&c);
			int count_joueur=c;
			if(c >= 10)
			{
				//joueur_2
				printf("-----Joueur_2----- \n");
				do
				{
					printf("inserez une valeur: \n");
					scanf("%d",&choix_joueur);
					count_joueur--;
					plus_moins(choix_joueur,Valeur_a_trouver);
					if(choix_joueur == Valeur_a_trouver)
					{
						count_joueur++;
						printf("Votre score est: %d",count_joueur);
						break;
					}
				}
				while(choix_joueur != Valeur_a_trouver);
				break;
				if(count_joueur==0)
					break;
			}
			else
			{
				do
				{
					printf("Inserez le nombre d'essaie plus grand ou egale a 10! \n");
					printf("Veuillez re-inserez le nombre d'essaie\n");
					scanf("%d",&c);
					int count_joueur=c;
					if(c >= 10)
					{
						//joueur_2
						printf("-----Joueur_2----- \n");
						do
						{
							printf("inserez une valeur: ");
							scanf("%d",&choix_joueur);
							count_joueur--;
							plus_moins(choix_joueur,Valeur_a_trouver);
							if(choix_joueur == Valeur_a_trouver)
							{
								count_joueur++;
								printf("Votre score est: %d",count_joueur);
								break;
							}
						}
						while(choix_joueur != Valeur_a_trouver);
						break;
						if(count_joueur==0)
							break;
					}

				}
				while(c < 10);
				break;
			}
			printf("Votre score est: %d",count_joueur);

	}

}
