/*
Guido Insua
División C
Ejercicio 3-1:
    Crear una función que muestre por pantalla el número flotante que recibe como parámetro..
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
