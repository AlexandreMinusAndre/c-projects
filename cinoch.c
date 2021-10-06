#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string filmCategorieEnfant[3] = {"filmEnfant1", "filmEnfant2", "filmEnfant3"}; //
    string filmCategorieAdos[3] = {"filmAdo1", "filmAdo2", "filmAdo3"};
    string filmCategorieAdulte[3] = {"filmAdulte1", "filmAdulte2", "filmAdulte3"};

    int age = get_int("Quel est ton âge ?\n"); //On pose la question sur l'age

    for (int i = 0; i < 3; i++)
    {
        if (age <= 11)
        {
            printf("Films recommandés : %s\n", filmCategorieEnfant[i]); //Si l'age est inférieur ou égale à 11, on affiche les films pour enfant
        }

        if (age > 11 && age < 18)
        {
            printf("Films recommandés : %s\n", filmCategorieAdos[i]); //Si l'age est entre 11 et 18 ans, on affiche les films pour ados
        }

        if (age >= 18)
        {
            printf("Films recommandés : %s\n", filmCategorieAdulte[i]); //Si l'age est supérieur ou égale à 18 ans, on affiche les films pour adultes
        }
    }

    //Ci dessous ce trouve la boucle qui s'occupe de demander le choix du film

    for(int j = 0; j < 3; j++)
    {
        if (age <= 11)
        {
            char isOkWith = get_char("Le film %s vous intéresse ?\n", filmCategorieEnfant[j]);

            if(isOkWith == 'Y' || isOkWith == 'y')
            {
                printf("Ticket reservé !\n");
                return 0;
            }
            else if(isOkWith == 'N' || isOkWith == 'n')
            {

            }
        }

        if (age > 11 && age < 18)
        {
            char isOkWith = get_char("Le film %s vous intéresse ?\n", filmCategorieAdos[j]);

            if(isOkWith == 'Y' || isOkWith == 'y')
            {
                printf("Ticket reservé !\n");
                return 0;
            }
            else if(isOkWith == 'N' || isOkWith == 'n')
            {

            }
        }

        if (age >= 18)
        {
            char isOkWith = get_char("Le film %s vous intéresse ?\n", filmCategorieAdulte[j]);

            if(isOkWith == 'Y' || isOkWith == 'y')
            {
                printf("Ticket reservé !\n");
                return 0;
            }
            else if(isOkWith == 'N' || isOkWith == 'n')
            {

            }
        }
    }
}
