/*
Guido Insua
Divisi�n C
Ejercicio 3-1:
    Crear una funci�n que muestre por pantalla el n�mero flotante que recibe como par�metro..
*/

#include <stdio.h>
#include <stdlib.h>

void mostrar(float parametro);

int main(void)
{
	setbuf(stdout,NULL);

    mostrar(5.5);

	return EXIT_SUCCESS;
}

void mostrar(float parametro)
{
    printf("El numero es %f",parametro);
}
