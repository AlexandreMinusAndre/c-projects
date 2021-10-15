#include <stdio.h>

int main(void)
{
    printf("Pour calculer le rendement énergétique d'un système électrique, on divise la puissance utilisée par le système, par la puissance qu'on lui fournis\n");

    //On créer deux variables pour la puissance utilisée et la puissance fournis
    float pUtile = 0;
    float pFournis = 0;

    //On demande à l'utilisateur de rentrer la puissance utilisée et la puissance fournis
    printf("Puissance utilisée (en watt) : ");
    scanf("%f", &pUtile);

    printf("Puissance fournis (en watt) : ");
    scanf("%f", &pFournis);

    //Cette variable exécute le calcul du rendement
    float rendement = pUtile / pFournis;

    //Ce if permet de ne pas afficher la variable rendement quand la puissance utile est supérieur à la puissance fournis. On met celà en place car le rendement ne peux pas être supérieur à 1
    if (pUtile > pFournis)
    {
        printf("Impossible, la puissance utilisée ne peux pas être supérieur à la puissance fournis\n");
    }
    else
    {
        //On multiplie le rendement par 100 pour l'afficher en pourcent
        printf("Le rendement de ce système est de %f, sois %.2f pourcents\n", rendement, rendement * 100);
    }
}