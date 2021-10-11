#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;

//On demande les 3 valeurs à l'utilisateur
    printf("Entrer a : ");
    scanf("%i", &a);

    printf("Entrer b : ");
    scanf("%i", &b);

    printf("Entrer c : ");
    scanf("%i", &c);

//Si a est plus grand que b et c, alors on imprime que a est le plus grand des 3 chiffres
    if(a > b && a > c)
    {
        printf("%i est le plus grand\n", a);
    }

//Si b est plus grand que a et c, alors on imprime que b est le plus grand des 3 chiffres
    if(b > a && b > c)
    {
        printf("%i est le plus grand\n", b);
    }

//Si c est plus grand que a et b, alors on imprime que c est le plus grand des 3 chiffres
    if(c > a && c > b)
    {
        printf("%i est le plus grand\n", c);
    }

//Le else sert quand un ou plusieurs des chiffres rentrés par l'utilisateur sont égaux.
    else
    {
        printf("Plusieurs entiers sont égaux\n");
    }
}
