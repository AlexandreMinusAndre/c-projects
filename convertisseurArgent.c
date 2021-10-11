#include <stdio.h>

int main(void)
{
    float x = 0;
    float y = 0.84892; //cette valeur représente la valeur d'un euro en livre sterling

    printf("Somme en € : ");
    scanf("%f", &x); //on demande la valeur en euros de l'utilisateur à convertir en livre sterling

    printf("Votre en somme en livre est de %f livres sterling\n", x * y); //on converti la valeur demandée à l'utilisateur par y pour obtenir la valeur en livre.
}