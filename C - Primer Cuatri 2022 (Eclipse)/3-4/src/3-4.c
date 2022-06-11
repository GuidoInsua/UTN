/*
Guido Insua
División C
Ejercicio 3-4:
    Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
*/

#include <stdio.h>
#include <stdlib.h>

int ingresoNumero(char mensaje[], char mensajeError[], int limiteInferior, int limiteSuperior);

int main(void)
{
	setbuf(stdout,NULL);

    int numeroEntero;

    numeroEntero = ingresoNumero("Ingrese un numero entero: ", "ERROR, Ingrese un numero entre 5 y 20: ", 5,20);

    printf("El numero ingresado fue %d",numeroEntero);

	return EXIT_SUCCESS;
}

int ingresoNumero(char mensaje[], char mensajeError[], int limiteInferior, int limiteSuperior)
{
    int numeroIngresado;

    printf("%s",mensaje);
    scanf("%d",&numeroIngresado);

    while (numeroIngresado < limiteInferior || numeroIngresado > limiteSuperior)
    {
        printf("%s",mensajeError);
        scanf("%d",&numeroIngresado);
    }

    return numeroIngresado;
}
