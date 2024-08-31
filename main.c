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

	//Se calcula el promedio
 	float promedio= ((a+b)/2*1.0);

	//Se imprime el valor del promedio
	printf("El promedio de los dos valores es: \n%f",promedio);

	//Se crea vector de divisores suponiendo que el numero promedio tiene menos de 100 divisores
	int divisores[100];

	//Se limpia el vector de datos basura
	for(int i=0;i<100;i++){
		divisores[i]=0;
	}
	//Se calcula los divisores y se ponen en el vector

	int contador=0;
	for(int i=1;(promedio/2);i++){ //Los divisores van desde el 1 hasta la mitad del numero

		if(promedio%i==0){
			
			//Se agrega los divisores en el vector de divisores
			divisores[contador]=i;

			//Se aumenta en 1
			contador++;
		}

	}
	printf("Los divisores son: \n"); 

	for(int i=0;i<100;i++){
		if(divisores[i]!=0){
			printf("%d",divisores[i]);
		}
	 }

    // Llamar a la función para calcular el MCD
    int mcd = calcularMCD(a, b);
    printf("El MCD de %d y %d es: %d\n", a, b, mcd);

    // Llamamos a la nueva función para calcular la suma de los divisores
    int suma = suma_divisores(divisores, contador);
    printf("\nLa suma de los divisores es: %d\n", suma);

    return;

// Implementación de la función suma_divisores
int suma_divisores(int divisores[], int tamaño) {
    int suma = 0;
    for(int i = 0; i < tamaño; i++){
        suma += divisores[i];
    }

	return(suma);
    
}

// Implementación de la función mcd
int mcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return mcd(num2, num1 % num2);
}