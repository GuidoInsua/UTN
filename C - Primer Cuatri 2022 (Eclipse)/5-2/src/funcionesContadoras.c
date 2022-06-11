
#include "funcionesContadoras.h"

int ContarPositivosDelVectorEntero(int vector[], int size)
{
	int i;
	int cantidadPositivos;

	cantidadPositivos = 0;

	for(i=0;i<size;i++)
	{
		if(vector[i] > 0)
		{
			cantidadPositivos++;
		}
	}

	return cantidadPositivos;
}

//----------------------------------------------------------------------------

int ContarPositivosDelVectorFlotante(float vector[], int size)
{
	int i;
	int cantidadPositivos;

	cantidadPositivos = 0;

	for(i=0;i<size;i++)
	{
		if(vector[i] > 0)
		{
			cantidadPositivos++;
		}
	}

	return cantidadPositivos;
}

//----------------------------------------------------------------------------

int ContarNegativosDelVectorEntero(int vector[], int size)
{
	int i;
	int cantidadNegativos;

	cantidadNegativos = 0;

	for(i=0;i<size;i++)
	{
		if(vector[i] < 0)
		{
			cantidadNegativos++;
		}
	}

	return cantidadNegativos;
}

//----------------------------------------------------------------------------

int ContarNegativosDelVectorFlotante(float vector[], int size)
{
	int i;
	int cantidadNegativos;

	cantidadNegativos = 0;

	for(i=0;i<size;i++)
	{
		if(vector[i] < 0)
		{
			cantidadNegativos++;
		}
	}

	return cantidadNegativos;
}











