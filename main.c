#include <stdio.h>

int a;
int b;

void main (void) {

	printf ("Hola, mundo");
	
	//Se pide la introduccion de dos valores y se los 
	//asigna a las variables globales
	printf("Introducir el 1er valor: ");
	scanf("%d",&a);
	
	printf("Introducir el 2do valor: ");
	scanf("%d",&b);

	//Se imprime el valor del promedio
	printf("El promedio de los dos valores es: \n%f",(float)((a+b)/2));

	return 0;
}