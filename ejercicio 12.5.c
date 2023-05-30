#include <stdio.h>
#include <stdlib.h>

int main () {
   // en el siguiente codigo se accede a los elementos de una matriz. acceder a los mismos elementos con aritmetica de punteros 
/*#define n 4
#define m 5
int f,c;
for (f=0; f<n; f++)
{
   for (c=0; c<4; c++)
          printf ("%lf ", mt [f][c]);
       printf ("\n");
} */
#define n 4
#define m 5
int f,c;
f=0;
c=0;
for (f=0; f<n; f++)
{
   for (c=0; c<4; c++)
         printf ("%lf ", *(*(mt+f)+c));
       printf ("\n");
}
    return 0;
}