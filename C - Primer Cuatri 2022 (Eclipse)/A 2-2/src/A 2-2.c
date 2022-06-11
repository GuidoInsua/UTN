/*
Guido Insua
División C
Ejercicio Apoyo 2-2:
	Realizar un programa que permita el ingreso de 10 números enteros. Determinar el promedio de los positivos,
	 la cantidad de ceros y del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).
	Nota:
	Utilizar la función del punto anterior y desarrollar funciones para resolver los procesos que están resaltados.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int i;
	int cantidadPositivos;
	int totalPositivos;
	float promedioPostivos;
	int cantidadCeros;
	char primerNegativo;
	int menorNumero;
	int sumaAntecesores;

	primerNegativo = 's';
	sumaAntecesores = 0;
	cantidadCeros = 0;
	cantidadPositivos = 0;
	totalPositivos = 0;

	for(i=0;i<10;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		if(numeroIngresado > 0)
		{
			cantidadPositivos++;
			totalPositivos = totalPositivos + numeroIngresado;
		}

		if(numeroIngresado == 0)
		{
			cantidadCeros++;
		}

		if((numeroIngresado < 0 && primerNegativo == 's') || (numeroIngresado < menorNumero && numeroIngresado < 0))
		{
			primerNegativo = 'n';
			menorNumero = numeroIngresado;
		}
	}

	promedioPostivos = (float)totalPositivos / cantidadPositivos;

	menorNumero = menorNumero + 1;
	for(i=menorNumero;i<1;i++)
	{
		sumaAntecesores = sumaAntecesores + i;
	}

	if(cantidadPositivos != 0)
	{
		printf("\nEl promedio de los positivos es %.2f",promedioPostivos);
	}
	else
	{
		printf("\nNo se ingresaron positivos");
	}

	if(cantidadCeros != 0)
	{
		printf("\nLa cantidad de ceros es %d",cantidadCeros);
	}
	else
	{
		printf("\nNo se ingresaron ceros");
	}

	if(primerNegativo == 'n')
	{
		printf("\nLa suma de los antecesores del menor negativo es %d",sumaAntecesores);
	}
	else
	{
		printf("\nNo se ingresaron negativos");
	}

	return EXIT_SUCCESS;
}

