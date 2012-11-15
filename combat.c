#include "combat.h"

int combat(char nom, char adv,int vie_perso_1,int def_perso_1,int atq_perso_1,int vie_perso_2,int def_perso_2,int atq_perso_2)
{
    int choix;
printf("combat entre %s et %s",nom,adv);
printf("%s a %d pts de vie",nom,vie_perso_1);
printf("%s a %d pts de vie",nom,vie_perso_2);
system("PAUSE");
system("CLS");
while(vie_perso_1 =< 0 && vie_perso_2 =< 0 || choix == 2)
{
    printf("Que veut tu faire ?");
    printf("1.Attaquer");
    printf("2.Fuir");
    scanf("%d",&choix);
    switch(choix)
    {
        //Combat
        case 1:

        break;
        //fuite
        case 2:
        printf("Vous prenez la fuite...(fuyard!)");
        break;


        default:
        printf("C'est pas le moment de paniquer!");
    }
}
}
