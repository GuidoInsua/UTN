#include <stdio.h>
#include <stdlib.h>

#include "funcionesDeIngreso.h"

char FuncionContinuar(char mensaje[], char mensajeError[])
{
	char respuesta;

	printf("%s",mensaje);
	fflush(stdin);
	scanf("%c",&respuesta);
	while(respuesta != 's' && respuesta != 'n')
	{
		printf("%s",mensajeError);
		fflush(stdin);
		scanf("%c",&respuesta);
	}

	return respuesta;
}

//----------------------------------------------------------------------------

void IngresarVectorEntero(int vector[], int size, int minimo, int maximo, char mensaje[], char mensajeError[])
{
	int i;

	for(i=0;i<size;i++)
	{
		printf("%s",mensaje);
		scanf("%d",&vector[i]);
		while(vector[i] < minimo || vector[i] > maximo)
		{
			printf("%s",mensajeError);
			scanf("%d",&vector[i]);
		}
	}
}

//----------------------------------------------------------------------------

void IngresarVectorFlotante(float vector[], int size, float minimo, float maximo, char mensaje[], char mensajeError[])
{
	int i;

	for(i=0;i<size;i++)
	{
		printf("%s",mensaje);
		scanf("%f",&vector[i]);
		while(vector[i] < minimo || vector[i] > maximo)
		{
			printf("%s",mensajeError);
			scanf("%f",&vector[i]);
		}
	}
}

//----------------------------------------------------------------------------

int IngresarEntero(int minimo, int maximo, char mensaje[], char mensajeError[])
{
	int numeroIngresado;

	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);
	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf("%s",mensajeError);
		scanf("%d",&numeroIngresado);
	}

	return numeroIngresado;
}

//----------------------------------------------------------------------------

float IngresarFlotante(float minimo, float maximo, char mensaje[], char mensajeError[])
{
	float numeroIngresado;

	printf("%s",mensaje);
	scanf("%f",&numeroIngresado);
	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf("%s",mensajeError);
		scanf("%f",&numeroIngresado);
	}

	return numeroIngresado;
}

//----------------------------------------------------------------------------

char IngresarEnteroConReintentos(int* direccion, int minimo, int maximo, char mensaje[], char mensajeError[], int reintentos)
{
	int buffer;
	char retorno;

	retorno = 'n';

	if(direccion != NULL && minimo <= maximo && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*direccion = buffer;
				retorno = 's';
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				exit(-1); //break;
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}

//----------------------------------------------------------------------------

char IngresarFlotanteConReintentos(float* direccion, int minimo, int maximo, char mensaje[], char mensajeError[], int reintentos)
{
	float buffer;
	char retorno;

	retorno = 'n';

	if(direccion != NULL && minimo <= maximo && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%f",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*direccion = buffer;
				retorno = 's';
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				exit(-1); //break;
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}

//----------------------------------------------------------------------------

char IngresarVectorEnteroConReintentos(int vector[], int posicion, int minimo, int maximo, char mensaje[], char mensajeError[], int reintentos, char permiteCero)
{
	int buffer;
	char retorno;

	retorno = 'n';

	if(minimo <= maximo && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&buffer);

			if(buffer >= minimo && buffer <= maximo && (permiteCero == 's' || (permiteCero == 'n' && buffer != 0)))
			{
				vector[posicion] = buffer;
				retorno = 's';
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				exit(-1); //break;
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}

//----------------------------------------------------------------------------

char IngresarVectorFlotanteConReintentos(float vector[], int posicion, int minimo, int maximo, char mensaje[], char mensajeError[], int reintentos)
{
	float buffer;
	char retorno;

	retorno = 'n';

	if(mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%f",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				vector[posicion] = buffer;
				retorno = 's';
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				exit(-1); //break;
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}


