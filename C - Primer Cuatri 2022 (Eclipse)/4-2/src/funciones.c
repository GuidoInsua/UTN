#include <stdio.h>
#include <stdlib.h>

float ValidacionTemperatura(float temperaturaIngresada, char seleccion)
{
	if (seleccion == 'f')
	{
		while(temperaturaIngresada < 32 || temperaturaIngresada > 212)
		{
			printf("ERROR, Ingrese una temperatura entre 32 y 212: ");
			scanf("%f",&temperaturaIngresada);
		}
	}
	else
	{
		while(temperaturaIngresada < 0 || temperaturaIngresada > 100)
		{
			printf("ERROR, Ingrese una temperatura entre 0 y 100: ");
			scanf("%f",&temperaturaIngresada);
		}
	}

	return temperaturaIngresada;
}

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
