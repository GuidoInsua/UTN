#include "funcionesDeParidad.h"

int DeterminarParidadDeEntero(int numeroEntero)
{
	int respuesta; // 0=Impar 1=Par

	respuesta = 0;

	if(numeroEntero % 2 == 0)
	{
		respuesta = 1;
	}

	return respuesta;
}

//---------------------------------------------------------

int DeterminarMayorImparDelVector(int vector[], int size)
{
	int i;
	int mayorImpar;
	char primerImpar;

	primerImpar = 's';

	for(i=0;i<size;i++)
	{
		if((vector[i] % 2 != 0 && primerImpar == 's') || (vector[i] % 2 != 0 && vector[i] > mayorImpar))
		{
			primerImpar = 'n';

			mayorImpar = vector[i];
		}
	}

	if(primerImpar == 's')
	{
		return -1;
	}
	else
	{
		return mayorImpar;
	}
}

//---------------------------------------------------------

int DeterminarMayorParDelVector(int vector[], int size)
{
	int i;
	int mayorImpar;
	char primerImpar;

	primerImpar = 's';

	for(i=0;i<size;i++)
	{
		if((vector[i] % 2 == 0 && primerImpar == 's') || (vector[i] % 2 == 0 && vector[i] > mayorImpar))
		{
			primerImpar = 'n';

			mayorImpar = vector[i];
		}
	}

	if(primerImpar == 's')
	{
		return -1;
	}
	else
	{
		return mayorImpar;
	}
}
