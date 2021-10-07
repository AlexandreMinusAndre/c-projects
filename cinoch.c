#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //On déclare 3 tableaux de 3 éléments, représentant les catégories de film, ainsi que les 3 films qu'elles contiennent

    string filmCategorieEnfant[3] = {"filmEnfant1", "filmEnfant2", "filmEnfant3"};
    string filmCategorieAdos[3] = {"filmAdo1", "filmAdo2", "filmAdo3"};
    string filmCategorieAdulte[3] = {"filmAdulte1", "filmAdulte2", "filmAdulte3"};

    int age = get_int("Quel est ton âge ?\n"); //On pose la question sur l'age

    printf("Films recommandés :\n");

    //Ci dessous se trouve la boucle contenant les conditions qui s'occupent de proposer les films de la catégorie adaptée à l'âge de l'utilisateur

    for (int i = 0; i < 3; i++)
    {
        if (age <= 11)
        {
            printf("%s\n", filmCategorieEnfant[i]);
            //Si l'age est inférieur ou égale à 11, on affiche les films pour enfant
        }

        if (age > 11 && age < 18)
        {
            printf("%s\n", filmCategorieAdos[i]);
            //Si l'age est entre 11 et 18 ans, on affiche les films pour ados
        }

        if (age >= 18)
        {
            printf("%s\n", filmCategorieAdulte[i]);
            //Si l'age est supérieur ou égale à 18 ans, on affiche les films pour adultes
        }
    }

    //Ci dessous ce trouve la boucle qui s'occupe de demander le choix du film

    for (int j = 0; j < 3; j++)
    {
        if (age <= 11) //choix du film si l'âge est inférieur à 11
        {
            char isOkWith = get_char("Le film %s vous intéresse ? (o/n)\n", filmCategorieEnfant[j]);

            if (isOkWith == 'O' || isOkWith == 'o')
            {
                printf("Ticket reservé !\n");
                return 0;
            }
            else if (isOkWith == 'N' || isOkWith == 'n')
            {
                //je n'ai rien mis dans le else if car la boucle se redémarre toute seule quand on répond N ou n
            }
        }

        if (age > 11 && age < 18) //choix du film si l'âge est entre 11 et 18
        {
            char isOkWith = get_char("Le film %s vous intéresse ? (o/n)\n", filmCategorieAdos[j]);

            if (isOkWith == 'O' || isOkWith == 'o')
            {
                printf("Ticket reservé !\n");
                return 0;
            }
            else if (isOkWith == 'N' || isOkWith == 'n')
            {

            }
        }

        if (age >= 18) //choix du film si l'âge est supérieur à 18
        {
            char isOkWith = get_char("Le film %s vous intéresse ? (o/n)\n", filmCategorieAdulte[j]);

            if (isOkWith == 'O' || isOkWith == 'o')
            {
                printf("Ticket reservé !\n");
                return 0;
            }
            else if (isOkWith == 'N' || isOkWith == 'n')
            {

            }
        }
    }
}
