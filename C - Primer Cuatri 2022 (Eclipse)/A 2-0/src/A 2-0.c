/*
Guido Insua
Divisi�n C
Ejercicio Apoyo 2-0:
	Crear una funci�n que reciba como par�metro dos n�meros enteros, que realice el promedio de los n�meros y que retorne dicho valor.
*/

#include <stdio.h>
#include <stdlib.h>

float SacarPromedio (int,int);

int main(void)
{
	setbuf(stdout,NULL);

	float promedio;

	promedio = SacarPromedio(3,8);

	printf("El promedio es %f",promedio);

	return EXIT_SUCCESS;
}

float SacarPromedio (int primerNumero, int segundoNumero)
{
	float resultado;

	resultado = ((float)primerNumero + segundoNumero) / 2;

	return resultado;
}
