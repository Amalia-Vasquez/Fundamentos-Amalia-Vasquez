/*Hacer un programa con el que se pueda evaluar las funciones f(x), g(x) y z(x) para todos los valores de x en 
el intervalo 0<=x<3.5 con incremento de 0.2 Escribir un array de punteros a funcion. en lenguaje c y con comentarios
Las funciones son las siguientes:
f(x)= 3*e^x-2x
g(x)=-x*sin(x)+1.5
z(x)=x^2-2x+3*/

#include <stdio.h> 
#include <math.h> 
//Función prototipo
float f(float);
float g(float); 
float z(float);

int main() 
{ 
    //Array de punteros a funciones
	float (*funciones[3]) (float) = {f, g, z};
    //Ciclo para evaluar las funciones entre 0 y 3.5 con incremento de 0.2 
	float x;
	for(x=0.0; x<3.5; x=x+0.2){
		printf("Valor de x = %1f\n",x); 
		printf("Valor de f(x) = %1f\n",funciones[0](x)); 
		printf("Valor de g(x) = %1f\n",funciones[1](x));
		printf("Valor de z(x) = %1f\n",funciones[2](x));
        printf("\n");
	}
	return 0; 
} 

//Función para evaluar f(x)
float f(float x){
	return 3*exp(x)-2*x; 
} 
      
//Función para evaluar g(x)
float g(float x)
{ 
	return -x*sin(x)+1.5; 
} 

//Función para evaluar z(x)
float z(float x) 
{ 
	return x*x-2*x+3; 
}