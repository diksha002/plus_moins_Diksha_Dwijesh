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
	printf("\n     -^-^-^-^-^-^- Deviner le chiffre -^-^-^-^-^-^-\n");
	printf("\n");
	printf("Choisissez votre mode joueur\n");
	printf("1 joueur ou 2 joueurs\n");
	printf("\n");
	printf("Inserez 1 pour un seul joueur et 2 pour deux joueurs\n");
	int b;
	int c;
	scanf("%d",&b);
	printf("\n");
	int count_joueur;
	switch(b)
	{
		case 1:
			printf("Choisissez un niveau entre:facile, moyenne ou difficile \n");
			printf("Inserez 1 pour facile, 2 pour moyenne et 3 pour difficile: \n");
			int a;
			scanf("%d",&a);
			printf("\n");
			int nombre_tour;
			printf("Inserez le nombre de tour que vous voulez: \n");
			scanf("%d",&nombre_tour);
			printf("\n");
			for(int i = 0; i < nombre_tour; i++)
			{
				srand (time(NULL));
				int Valeur_a_trouver = rand() % 101;
				int count=0;    //count for mode:moyenne
				int count1=0;    //count for mode:difficile
				printf("----------Tour %d----------- \n", i+1);
				{
					switch(a)
					{
						case 1:
							while(choix_joueur != Valeur_a_trouver)
							{
								printf("inserez une valeur: ");
								scanf("%d",&choix_joueur);
								plus_moins(choix_joueur,Valeur_a_trouver);
								printf("\n");
							}
							break;
						case 2:
								while(choix_joueur != Valeur_a_trouver)
								{
									printf("inserez une valeur: ");
									scanf("%d",&choix_joueur);
									count++;
									plus_moins(choix_joueur,Valeur_a_trouver);
									printf("\n");
									if(count==25)
									{
										printf("Vous avez dépassé la limite d'essaie\n");
										printf("\n");
										break;
									}
								}
								break;

						case 3:
							do
							{
								printf("inserez une valeur: ");
								scanf("%d",&choix_joueur);
								count1++;
								plus_moins(choix_joueur,Valeur_a_trouver);
								printf("\n");
								if(count1==10)
								{
									printf("Vous avez dépassé la limite d'essaie\n");
									printf("\n");
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
			}
			break;
		case 2:
			//Initial step
			printf("-----Mode 2 joueurs----- \n");
			printf("Inserez le nombre d'essaie\n");
			scanf("%d",&c);
			printf("\n");
			int score_j1=0;  //score finale de joueur1
			int score_j2=0;  //score finale de joueur2
			
			while (c < 10)
			{
				printf("Inserez le nombre d'essaie plus grand ou egale a 10! \n");
				printf("Veuillez re-inserez le nombre d'essaie\n");
				scanf("%d",&c);
				printf("\n");
			}
			int nombre_tour1;
			printf("Inserez le nombre de tour que vous voulez: \n");
			scanf("%d",&nombre_tour1);
			printf("\n");
			for(int i = 0; i < nombre_tour1; i++)
			{
					printf("------Tour %d------- \n", i+1);
					printf("\n");
					int count_joueur=c;
					int count_joueur1=c;
					
					if(c >= 10)
					{
						//joueur_1
						printf("-----Joueur_1----- \n");
						do
						{
							printf("inserez une valeur: ");
							scanf("%d",&choix_joueur);
							count_joueur--;
							plus_moins(choix_joueur,Valeur_a_trouver);
							printf("\n");
							if(choix_joueur == Valeur_a_trouver)
							{
								count_joueur++;
								printf("Votre score est: %d \n",count_joueur);
								printf("\n");
								break;
							}
							if(count_joueur==0)
							{
								printf("Desoler, Vous avez depasser le nombre d'essaie. \n");
								printf("Votre score est 0\n");
								printf("\n");					
								break;
							}
						}
						while(choix_joueur != Valeur_a_trouver);
						score_j1 = score_j1 + count_joueur;
						//joueur_2
						srand (time(NULL));
						int Valeur_a_trouver = rand() % 101; //deuxieme chiffre pour joueur_2
						printf("-----Joueur_2----- \n");
						do
						{
							printf("inserez une valeur: ");
							scanf("%d",&choix_joueur);
							count_joueur1--;
							plus_moins(choix_joueur,Valeur_a_trouver);
							printf("\n");
							if(choix_joueur == Valeur_a_trouver)
							{
								count_joueur1++;
								printf("Votre score est: %d \n",count_joueur1);
								printf("\n");
								break;
							}
							if(count_joueur1==0)
							{
								printf("Desoler, Vous avez depasser le nombre d'essaie.\n");
								printf("Votre score est 0\n");
								printf("\n");
								break;
							}
						}
						while(choix_joueur != Valeur_a_trouver);
						score_j2 = score_j2 + count_joueur1; 
					}

					printf("Le score joueur_1 est: %d\n",count_joueur);
					printf("Le score joueur_2 est: %d\n",count_joueur1);
			
			}
			printf("---------------------------\n");
			printf("score finale de j1= %d\n", score_j1);
			printf("score finale de j2= %d\n", score_j2);
			printf("\n");
			if(score_j1 > score_j2)
			{
				printf("Le gagnant est: ****JOUEUR 1*******\n");
			}
			else if (score_j1 == score_j2)
			{
				printf("C'est un match nul, PAS DE GAGNANT\n");
			}
			else
			{
				printf("Le gagnant est: ****JOUEUR 2*******\n");
			}			

	}

}
