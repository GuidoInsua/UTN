#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesDeIngreso.h"

static int MiFgets(char*,int);
static int MiFgets(char* string, int size)
{
	int retorno = -1;
	char bufferString[4000]; //char* bufferString = malloc(sizeof(char)*size);

	if(string != NULL && size > 0)
	{
		fflush(stdin);
		if(fgets(bufferString,sizeof(bufferString),stdin) != NULL)
		{
			if(bufferString[strnlen(bufferString,sizeof(bufferString))-1] == '\n')
			{
				bufferString[strnlen(bufferString,sizeof(bufferString))-1] = '\0';
			}

			if(strnlen(bufferString,sizeof(bufferString)) <= size)
			{
				strncpy(string,bufferString,size);
				retorno = 0;
			}
		}
	}

	return retorno;
}

//----------------------------------------------

static int EsInt(char*,int);
static int EsInt(char* string, int size)
{
	int retorno = -1;
	int i;

	if(string != NULL && size > 0)
	{
		retorno = 1;
		for(i=0;i<size && string[i] != '\0';i++)
		{
			if(i==0 && (string[i] == '+' || string[i] == '-'))
			{
				continue;
			}

			if(string[i] > '9' || string[i] < '0')
			{
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}

//----------------------------------------------

static int EsFloat(char*,int);
static int EsFloat(char* string, int size)
{
	int retorno = -1;
	int i;
	char seIngresoComa;

	seIngresoComa = 'n';

	if(string != NULL && size > 0)
	{
		retorno = 1;
		for(i=0;i<size && string[i] != '\0';i++)
		{
			if(i == 0 && (string[i] == '+' || string[i] == '-'))
			{
				continue;
			}

			if(i != 0 && (string[i-1] < '9' && string[i-1] > '0') && string[i] == '.' && seIngresoComa == 'n')
			{
				seIngresoComa = 's';
				continue;
			}

			if(string[i] > '9' || string[i] < '0')
			{
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}

//----------------------------------------------

static int EsLetra(char*,int,char);
static int EsLetra(char* string, int size, char extendido)
{
	int retorno = -1;
	int i;

	if(string != NULL && size > 0)
	{
		retorno = 1;
		for(i=0;i<size && string[i] != '\0';i++)
		{
			if( extendido == 's' &&
			   (string[i] == 'ü' || string[i] == 'é' || string[i] == 'ä' ||
				string[i] == 'ë' || string[i] == 'ï' || string[i] == 'Ä' ||
				string[i] == 'É' || string[i] == 'ö' || string[i] == 'Ö' ||
				string[i] == 'Ü' || string[i] == 'á' || string[i] == 'í' ||
				string[i] == 'ó' || string[i] == 'ú' || string[i] == 'ñ' ||
				string[i] == 'Ñ' || string[i] == 'Á' || string[i] == 'Ë' ||
				string[i] == 'Í' || string[i] == 'Ï' || string[i] == 'Ó' ||
				string[i] == 'Ú'))
			{
				continue;
			}

			if(i != 0 && string[i] == ' ')
			{
				continue;
			}

			if(string[i] < 'A' || (string[i] > 'Z' && string[i] < 'a') || string[i] > 'z')
			{
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}

//----------------------------------------------

static int ObtenerStringInt(int*);
static int ObtenerStringInt(int* direccionBuffer)
{
	int retorno = -1;
	char bufferString[50];

	if( direccionBuffer != NULL &&
		MiFgets(bufferString,sizeof(bufferString)) == 0 &&
		EsInt(bufferString,sizeof(bufferString)) == 1)
	{
		retorno = 0;
		*direccionBuffer = atoi(bufferString);
	}

	return retorno;
}

//----------------------------------------------

static int ObtenerStringFloat(float*);
static int ObtenerStringFloat(float* direccionBuffer)
{
	int retorno = -1;
	char bufferString[50];

	if( direccionBuffer != NULL &&
		MiFgets(bufferString,sizeof(bufferString)) == 0 &&
		EsFloat(bufferString,sizeof(bufferString)) == 1)
	{
		retorno = 0;
		*direccionBuffer = atof(bufferString);
	}

	return retorno;
}

//----------------------------------------------

static int ObtenerStringLetra(char*,int,char);
static int ObtenerStringLetra(char* buffer, int size, char extendido)
{
	int retorno = -1;
	char bufferString[100];

	if( buffer != NULL &&
		MiFgets(bufferString,sizeof(bufferString)) == 0 &&
		EsLetra(bufferString,sizeof(bufferString),extendido) == 1)
	{
		retorno = 0;
		snprintf(buffer,size,"%s",bufferString);
	}

	return retorno;
}

//----------------------------------------------

int ObtenerInt(int* direccion, int minimo, int maximo, char mensaje[], char mensajeError[], int reintentos)
{
	int retorno = -1;
	int buffer;

	if(direccion != NULL && minimo <= maximo && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			if( ObtenerStringInt(&buffer) == 0 &&
				buffer >= minimo &&
				buffer <= maximo)
			{
				retorno = 0;
				*direccion = buffer;
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				break; //exit(-1);
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}

//----------------------------------------------

int ObtenerFloat(float* direccion, float minimo, float maximo, char mensaje[], char mensajeError[], int reintentos)
{
	int retorno = -1;
	float buffer;

	if(direccion != NULL && minimo <= maximo && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			if( ObtenerStringFloat(&buffer) == 0 &&
				buffer >= minimo &&
				buffer <= maximo)
			{
				retorno = 0;
				*direccion = buffer;
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				break; //exit(-1);
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}

//----------------------------------------------

int ObtenerChar(char* vector, int size, char mensaje[], char mensajeError[], int reintentos, char extendido)
{
	int retorno = -1;
	char buffer[size];

	if(vector != NULL && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			if( ObtenerStringLetra(buffer,size,extendido) == 0)
			{
				retorno = 0;
				strncpy(vector,buffer,size);
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				break; //exit(-1);
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	}

	return retorno;
}

//----------------------------------------------

int ObtenerContinuar(char* direccion, char opcionUno, char opcionDos, char mensaje[], char mensajeError[], int reintentos)
{
	int retorno = -1;
	char buffer;

	//if(direccion != NULL && opcionUno != NULL && opcionDos != NULL && mensaje != NULL && mensajeError != NULL && reintentos >= 0)
	//{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%c",&buffer);
			if(buffer == opcionUno || buffer == opcionDos)
			{
				retorno = 0;
				*direccion = buffer;
				break;
			}

			reintentos--;
			if(reintentos < 0)
			{
				printf("ERROR, No le quedan mas intentos (Saliendo...)");
				break; //exit(-1);
			}
			printf("%s (Le quedan %d reintentos)\n",mensajeError,reintentos+1);

		}while(reintentos>=0);
	//}

	return retorno;
}
