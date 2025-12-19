#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H ^

struct point
{
    float x;
    float y;
};
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ); 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ); 
// Défintion d'une fonction de permution
void permutation( int *a,int *b);

void resoudreEquationSecondDegre(float a, float b, float c);

int estPremier(int n);

float distance(struct point p1, struct point p2);
#endif 