#include <stdio.h>
#include <stdlib.h>

#include "funcionesDeIngreso.h"

void IngresarVectorEntero(int numeroIngresado[], int size, int minimo, int maximo, char mensaje[], char mensajeError[])
{
	int i;

	for(i=0;i<size;i++)
	{
		printf("%s",mensaje);
		scanf("%d",&numeroIngresado[i]);
		while(numeroIngresado[i] < minimo || numeroIngresado[i] > maximo)
		{
			printf("%s",mensajeError);
			scanf("%d",&numeroIngresado[i]);
		}
	}
}

//----------------------------------------------------------------------------

void IngresarVectorFlotante(float numeroIngresado[], int size, int minimo, int maximo, char mensaje[], char mensajeError[])
{
	int i;

	for(i=0;i<size;i++)
	{
		printf("%s",mensaje);
		scanf("%f",&numeroIngresado[i]);
		while(numeroIngresado[i] < minimo || numeroIngresado[i] > maximo)
		{
			printf("%s",mensajeError);
			scanf("%f",&numeroIngresado[i]);
		}
	}
}


