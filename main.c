#include <stdio.h>
#include <stdlib.h>
#include "Bibliotheque.h"
int main( void ) {
 int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );

    int first = 10 ; 
    int second  = 20 ; 
    printf("first = %d #second = %d",first, second );
   permutation(&first,&second);
   printf("first = %d #second = %d",first, second );

    float a, b, c;

    printf("Resolution de l'equation ax^2 + bx + c = 0\n");
    printf("Entrez a : ");
    scanf("%f", &a);

    printf("Entrez b : ");
    scanf("%f", &b);

    printf("Entrez c : ");
    scanf("%f", &c);

    resoudreEquationSecondDegre(a, b, c);

// Un programme qui verifie si un nombre est premier ou non


    int nombre;

    printf("Entrez un nombre positif : ");
    scanf("%d", &nombre);

    if (nombre < 0)
    {
        printf("Veuillez entrer un nombre positif.\n");
    }
    else
    {
        if (estPremier(nombre))
            printf("%d est un nombre premier.\n", nombre);
        else
            printf("%d n'est pas un nombre premier.\n", nombre);
    }


    struct point p1, p2;
    float d;

    printf("Entrez les coordonnees du premier point (x y) : ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Entrez les coordonnees du deuxieme point (x y) : ");
    scanf("%f %f", &p2.x, &p2.y);

    /* Appel de la fonction */
    d = distance(p1, p2);

    printf("La distance entre les deux points est : %.2f\n", d);

    return EXIT_SUCCESS;

}
