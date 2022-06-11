/*
Guido Insua
División C
Ejercicio en Clase 4-1:
    Relizar una funcion RECURSIVA que calcule el factorial de un numero y lo retorne.
    Por ejemplo:
    5! = 5*4*3*2*1 = 120
*/

#include <stdio.h>
#include <stdlib.h>

int Factorial(int);

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    int factorial;

    printf("Ingrese un numero entero: ");
    scanf("%d",&numeroIngresado);

    factorial = Factorial(numeroIngresado);

    printf("El factorial es %d",factorial);

	return EXIT_SUCCESS;
}

int Factorial(int numeroIngresado)
{
	int resultado;

	if (numeroIngresado == 0)
	{
		resultado = 1;
	}
	else
	{
		resultado = numeroIngresado * Factorial(numeroIngresado - 1);
	}

	return resultado;
}

