#include <stdio.h>
#include <math.h> //La librairie math.h permet d'utiliser plusieurs fonctions mathématiques (utiles pour ce programme)

void pythagore(int *x, int *y);

int main(void)
{
    //énoncé du problème
    printf("On a un triangle rectangle ABC, avec : \n-AC comme côté adjacent.\n-BC comme côté opposé.\n-AB comme hypothénuse.\nOn utilise le théorème de pythagore pour calculer l'hypthénuse AB : \n");

    //On demande à l'utilisateur la valeur de AC en cm
    int AC;
    printf("AC en cm : ");
    scanf("%i", &AC);

    //On demande à l'utilisateur la valeur de BC en cm
    int BC;
    printf("BC en cm : ");
    scanf("%i", &BC);

    //On exécute la fonction permettant d'effectuer le théorème de pythagore
    pythagore(&AC, &BC);
}

//Cette fonction exécute le théorème de pythagore (AB² = AC² + BC², suivit de la racine carrée de AC² + BC² pour obtenir la valeur de AB)
void pythagore(int *x, int *y)
{
    float somme = pow(*x, 2) + pow(*y, 2);
    //Ici, pow sert à mettre les valeurs de AC et BC au carré. On additionne ensuite ces valeurs

    printf("D'après le théorème de pythagore, l'hypthénuse AB = %.2f cm\n", sqrt(somme));
    //sqrt permet d'obtenir la racine carrée. Ici, on imprime la racine carrée de la variable somme pour obtenir la valeur de l'hypothénuse en cm.
}
