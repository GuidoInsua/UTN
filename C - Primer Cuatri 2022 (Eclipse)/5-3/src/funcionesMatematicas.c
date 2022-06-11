
#include "funcionesMatematicas.h"

#include <stdio.h>
#include <stdlib.h>

int SacarFactorialDeEntero(int numeroEntero)
{
	int factorial;
	int i;

	factorial = 1;

    for(i=numeroEntero;i>0;i--)
    {
        factorial = factorial * i;
    }

	return factorial;
}

//----------------------------------------------------------------------------

float PasajeDeTemperatura (float temperaturaIngresada, char seleccion)
{
	float resultado;

	if (seleccion == 'f')
	{
		resultado = (temperaturaIngresada - 32) * 5/9;
	}
	else
	{
		resultado = (temperaturaIngresada * 9/5) + 32;
	}

	return resultado;
}

//----------------------------------------------------------------------------

int SumarNumerosEnterosDelVector(int vector[], int size)
{
	int i;
	int suma;

	suma = 0;

	for(i=0;i<size;i++)
	{
		suma = suma + vector[i];
	}

	return suma;
}

//----------------------------------------------------------------------------

int RestarNumerosEnterosDelVector(int vector[], int size)
{
	int i;
	int resta;

	resta = 0;

	for(i=0;i<size;i++)
	{
		resta = resta + vector[i];
	}

	return resta;
}

//----------------------------------------------------------------------------

int MayorNumeroEnteroDelVector(int vector[], int size)
{
	int i;
	char primerNumero;
	int mayorNumero;

	primerNumero = 's';

	for(i=0;i<size;i++)
	{
		if(primerNumero == 's' || vector[i] > mayorNumero)
		{
			primerNumero = 'n';

			mayorNumero = vector[i];
		}
	}

	return mayorNumero;
}

//----------------------------------------------------------------------------

int MenorNumeroEnteroDelVector(int vector[], int size)
{
	int i;
	char primerNumero;
	int menorNumero;

	primerNumero = 's';

	for(i=0;i<size;i++)
	{
		if(primerNumero == 's' || vector[i] < menorNumero)
		{
			primerNumero = 'n';

			menorNumero = vector[i];
		}
	}

	return menorNumero;
}

//----------------------------------------------------------------------------

char PromedioNumerosPositivosDelVector(float* direccion, int vector[], int size)
{
	int i;
	int cantidadPositivos;
	int totalPositivos;
	char retorno;

	retorno = 'n';
	cantidadPositivos = 0;
	totalPositivos = 0;

	for(i=0;i<size;i++)
	{
		if(vector[i] > 0)
		{
			retorno = 's';
			cantidadPositivos++;
			totalPositivos = totalPositivos + vector[i];
		}
	}

	if(retorno == 's')
	{
		*direccion = (float)totalPositivos / cantidadPositivos; //promedio
	}


	return retorno;
}

//----------------------------------------------------------------------------

char SumaAntecesoresMenorNegativo(int* direccion, int vector[], int size)
{
	int i;
	int menorNumero;
	int sumaAntecesores;
	char retorno;

	retorno = 'n';
	sumaAntecesores = 0;

	for(i=0;i<size;i++)
	{
		if( (vector[i] < 0 && retorno == 'n') || (vector[i] < menorNumero && vector[i] < 0) )
		{
			retorno = 's';
			menorNumero = vector[i];
		}
	}

	if(retorno == 's')
	{
		menorNumero = menorNumero + 1;
		for(i=menorNumero;i<1;i++)
		{
			sumaAntecesores = sumaAntecesores + i;
		}

		*direccion = sumaAntecesores;
	}

	return retorno;
}







