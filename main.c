#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* fichier = NULL;
    char nom[10];
    int continuer = 1, depart = 0;
    while(continuer)
    {

       if(depart == 0)
       {
           printf("Bienvenus dans Apocalypse ce jeu a ete inventer par moi meme et sert surtout d'entrainement en programmation.. Bon jeu!\n");
           system("PAUSE");
           system("CLS");
           printf("Salut comment t'appelle tu ?(max 10 lettres)\n");
           gets(nom);
           printf("L'histoire se deroule pendant le moyen-Age, mais l'apparition de monstres bouleversa l'humaniter en bien... et en mal...\n");
           system("PAUSE");
           system("CLS");
           printf("%s ! %s! %s!\n",nom,nom,nom);
           system("PAUSE");
           system("CLS");
           printf("Reveille toi !\n");
           system("PAUSE");
           system("CLS");
           printf("Nous devons partir...argghhh..\n");
           system("PAUSE");
           system("CLS");
           printf("10 ans plus tard...\n");
           system("PAUSE");
           system("CLS");
           printf("%s Aujourd'hui cela fait 10 ans que tes parents sont morts il faudrait penser a ton entrainement !\n",nom);
           system("PAUSE");
           system("CLS");
            fichier = fopen("perso.jeu", "r+");
    if(fichier != NULL)
    {
        fprintf(fichier, "%s",nom);

      fclose(fichier);
    }
    else
    {
        printf("ERREUR Le fichier n'as pu etre ouvert");
    }
           depart = 1;

       }

       continuer = 0;
    }
return 0;
 }
