/*Se quiere sumar enteros largos, con un numero de digitos que supera el maximo entero largo. Los enteros tienen 
un maximo de 40 digitos. para solventar el problema se utilizan cadenas de caracteres para guardar cada entero y realizar 
la suma. Escribir un programa que lea dos enteros largos y realice la suma.*/

#include <stdio.h> //Incluye libreria para entrada y salida estandar
#include <string.h> //Incluye libreria para operar cadenas de caracteres
#define MAX 40 //Definimos el maximo de digitos para un entero largo
        
int main(){ 
    char entero1[MAX], entero2[MAX]; //Declaramos dos variables de tipo caracter para almacenar los enteros
    char resultado[MAX]; //Declaramos una variable para almacenar el resultado

    int j, i, k, suma, digito, acarreo; //Declaramos las variables para realizar la suma

    printf("Introduzca el entero 1\n"); //Pedimos al usuario el primer entero
    scanf("%s",entero1); //Leemos el primer entero
    printf("Introduzca el entero 2\n"); //Pedimos al usuario el segundo entero
    scanf("%s", entero2); //Leemos el segundo entero
    
    //Inicializamos la variable acarreo
    acarreo = 0;
    //Inicializamos la variable contadora de la posicion del resultado
    k=0;
    
    //Ciclo for para recorrer los caracteres de los enteros desde la posicion 1
    for (i= MAX - 1; i >= 0; i--){
        //Convertimos el caracter en la posicion a entero
        suma= entero1[i]- '0'+ entero2[i]- '0';
        //Le sumamos el acarreo
        suma = suma + acarreo;
        //Actualizamos la variable acarreo
        acarreo = (suma/10);
        //Determinamos el digito de la posicion menos significativa
        digito = (suma%10);
        //Convertimos de entero a caracter
        resultado[k]= digito +'0';
        //Actualizamos el contador de posicion de la cadena resultado
        k++;
    }
    
    //Ciclo para imprimir el resultado
    for (j=k-1; j>=0; j--){
        printf("%c", resultado[j]);
    }
    
    return 0;
}