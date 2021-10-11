#include <stdio.h>

int main(void)
{
    //On créer un fichier en csv qu'on nomme exosBonus
    FILE *file = fopen("exosBonus.csv", "a");

    //On vérifie si la mémoire a bien été allouée
    if(!file)
    {
        return 1;
    }

    //Pour "simuler" un string, j'ai créer deux tableaux de plusieurs éléments, chaque élément contenant un char.
    char name[20];
    char number[12];

    //On demande le nom à l'utilisateur
    printf("Name : ");
    scanf("%s", name);

    //On demande le numéro à l'utilisateur
    printf("Number : ");
    scanf("%s", number);

    //fprintf sert à afficher les informations entrées par l'utilisateur dans le fichier en .csv
    fprintf(file, "%s, %s\n", name, number);

    //On ferme le fichier
    fclose(file);
}