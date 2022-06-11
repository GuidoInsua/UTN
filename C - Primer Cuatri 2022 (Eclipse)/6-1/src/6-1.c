/*
Guido Insua
División C
Ejercicio 6-1:
	Disponemos de dos variables numéricas (a y b).
	Realizar un algoritmo que permita el intercambio de valores de dichas variables.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int a;
	int b;
	int aux;

	a = 5;
	b = 2;

	printf("\nA vale %d y B vale %d",a,b);

	aux = a;
	a = b;
	b = aux;

	printf("\nAhora A vale %d y B vale %d",a,b);

	return EXIT_SUCCESS;
}
