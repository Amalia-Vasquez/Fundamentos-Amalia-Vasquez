//Un puntero a puntero sería necesario para indexar una matriz (array bidimensional). 
//Esto se debe a que una matriz es una colección de punteros a un array de una dimensión, con cada puntero enlazando a una 
//de las columnas de la matriz. Por lo tanto, para acceder a una columna específica de la matriz, primero hay que acceder al 
//puntero correcto y luego a la columna.

//A continuación se muestra un ejemplo de código para usar un puntero a puntero para indexar un array bidimensional:

#include <stdio.h>

int main() 
{
    int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    // Declarar un puntero a puntero para apuntar a la matriz A
    int **ptr = (int **)A;

    printf("Mostrar contenido de A usando puntero a puntero: \n");

    // Mostrar el contenido de la matriz A usando puntero a puntero
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)  {
            printf("%d", ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}