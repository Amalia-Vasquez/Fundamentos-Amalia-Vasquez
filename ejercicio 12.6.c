/*Escribir una funcion con un argumento de tipo puntero a double y otro argumento de tipo int. El primer argumento se debe
de corresponder con un array y el segundo con el numero de elementos del array. la funcion ha de ser de tipo puntero a double para
devolver la direccion del elemento menor*/

#include <stdio.h>
#include <stdlib.h>

double *obtenerMenor(double *array, int num_elementos)
    {

        double *menor = &array[0];
        for (int i = 1; i < num_elementos; i++)
            if (array[i] < *menor)
                menor = &array[i];
        return menor;
    }

int main()
{
    
}