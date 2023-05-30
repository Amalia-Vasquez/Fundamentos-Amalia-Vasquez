#include <stdio.h>

int main() 
{
    char texto[80];
    int cont, cont2, contadorVocales = 0;

    printf("Escribe 20 lineas de texto max 80 caracter por linea \n");

    for (cont = 0; cont < 20; cont++) 
    {
        fgets(texto,80,stdin);

        for (cont2 = 0; cont2 < 80; cont2++) 
        {

            if (texto[cont2] == 'a' || texto[cont2] == 'e' || texto[cont2] == 'i' 
            || texto[cont2] == 'o' || texto[cont2] == 'u') 
            {
                contadorVocales++;
            }
        }
        printf("En esta linea hay %d vocales\n", contadorVocales);
        contadorVocales = 0;
    }
return 0;

}