/*
Guido Insua
División C
Ejercicio 3-3:
    Crear una función que pida el ingreso de un entero y lo retorne.
*/

#include <stdio.h>
#include <stdlib.h>

int ingresoNumero(void);

int main(void)
{
	setbuf(stdout,NULL);

    int numero;

    numero = ingresoNumero();

    printf("El numero ingresado fue %d",numero);

	return EXIT_SUCCESS;
}

int ingresoNumero(void)
{
    int numeroIngresado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}
