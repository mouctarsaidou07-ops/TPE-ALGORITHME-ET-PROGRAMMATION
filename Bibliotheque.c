#include "Bibliotheque.h" 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
} 
return accumulator; 
} 
// Définition d'une fonction de permutation
void permutation( int *a,int *b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
// Définition d'une fonction qui resout l'équation du second dégré

//Fonction qui résout l'équation ax² + bx + c = 0 
void resoudreEquationSecondDegre(float a, float b, float c)
{
    float delta, x1, x2;

    if (a == 0)
    {
        printf("Ce n'est pas une equation du second degre.\n");
        return;
    }

    delta = b*b - 4*a*c;

    if (delta < 0)
    {
        printf("L'equation n'admet pas de solution reelle.\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2*a);
        printf("Solution unique : x = %.2f\n", x1);
    }
    else
    {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("Deux solutions reelles :\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}

/* Fonction qui verifie si un nombre est premier */
int estPremier(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

/* Fonction qui calcule la distance entre deux points */
float distance(struct point p1, struct point p2)
{
    float d;

    d = sqrt((p2.x - p1.x)*(p2.x - p1.x)
           + (p2.y - p1.y)*(p2.y - p1.y));

    return d;
}
