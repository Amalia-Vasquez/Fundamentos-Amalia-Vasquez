/*Que diferencias se pueden encontrar entre estas dos declaraciones?
float mt[5][5];
float *m[5];

La primera declaración definirá una matriz 5x5 de floats, la segunda declaración definirá un conjunto de 5 punteros a floats.

Se podria hacer estas asignaciones?
m=mt;
m[1]=mt[1];
m[2]= &mt[2][0]; //

No se pueden hacer las asignaciones mencionadas, ya que los tipos de datos no son los mismos. La primera asignación trata de asignar 
una matriz a un conjunto de punteros, lo cual no es correcto. La segunda asignación intenta asignar una matriz a un 
solo puntero, lo cual también no se puede hacer.*/