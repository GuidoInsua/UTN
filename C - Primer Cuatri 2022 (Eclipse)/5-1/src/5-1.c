/*
Guido Insua
División C
Ejercicio 5-1:
    Pedir el ingreso de 5 números. Mostrarlos y calcular y mostrar la sumatoria de los mismos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado[5];
	int i;
	int suma;

	suma = 0;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado[i]);

		suma = suma + numeroIngresado[i];
	}

	printf("Los numeros ingresados fueron:");

	for(i=0;i<5;i++)
	{
		printf(" / %d",numeroIngresado[i]);
	}

	printf("\nLa suma de los numero es: %d",suma);

	return EXIT_SUCCESS;
}
