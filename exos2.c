#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 0;
    int y = 0;

//On demande à l'utilisateur les valeurs de x et y
    printf("x : ");
    scanf("%i", &x);

    printf("y : ");
    scanf("%i", &y);

//Ici, on affiche une phrase indiquant les valeurs de bases des variables
    printf("x is %i and y is %i\n", x, y);
//On appel la fonction swap
    swap(&x, &y);
//On affiche une phrase indiquant les nouvelles valeurs des variables
    printf("x is now %i and y is now %i\n", x, y);
}

//La fonction swap s'occupe d'interchanger les valeurs des variables grâce à une variable temporaire (tmp) qui contiendra temporairement la valeur de x
void swap(int *a, int *b) //*a et *b font référence à x et y
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
