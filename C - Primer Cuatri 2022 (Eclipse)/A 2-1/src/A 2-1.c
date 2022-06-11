/*
Guido Insua
División C
Ejercicio Apoyo 2-1:
	Crear una función que reciba como parámetro un número entero. La función retorna 1 en caso de que sea positivo,
	 -1 en caso de que sea negativo y 0 en caso de que sea 0. Realizar la prueba lógica de la función en el main.
*/

#include <stdio.h>
#include <stdlib.h>

int SacarPositividad(int);

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int positividad;

	printf("Ingrese un numero: ");
	scanf("%d",&numeroIngresado);

	positividad = SacarPositividad(numeroIngresado);

	switch(positividad)
	{
		case 1:
			printf("El numero es positivo");
		break;

		case -1:
			printf("El numero es negativo");
		break;

		default:
			printf("El numero es cero");
		break;
	}

	return EXIT_SUCCESS;
}

int SacarPositividad(int numeroIngresado)
{
	int resultado;

	resultado = 0;

	if(numeroIngresado > 0)
	{
		resultado = 1;
	}
	else
	{
		if(numeroIngresado < 0)
		{
			resultado = -1;
		}
	}

	return resultado;
}
