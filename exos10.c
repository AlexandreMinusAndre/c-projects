#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;

    printf("Entier 1 : "); //On demande à l'utilisateur la valeur du premier entier
    scanf("%i", &x);

    printf("Entier 2 : "); //On demande à l'utilisateur la valeur du deuxième entier
    scanf("%i", &y);

    printf("Le produit de %i et %i est de : %i\n", x, y, x * y); //On multiplie car le produit de deux entiers est la multiplication entre eux de ces deux entiers

}