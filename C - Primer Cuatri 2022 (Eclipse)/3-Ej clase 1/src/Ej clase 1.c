/*
Guido Insua
División C
Ejercicio en clase 3-1:
    Crear una función que pida el ingreso de tres enteros, los verifique y los retorne.
*/

#include <stdio.h>
#include <stdlib.h>

int IngresarEntero(char mensaje[], char mensajeError[], int limiteInferior, int limiteSuperior);

int main(void)
{
	setbuf(stdout,NULL);

    int numeroEntero;
    int legajo;
    int edad;

    numeroEntero = IngresarEntero("Ingrese un numero: ", "Error, reingrese numero entre 1 y 10", 1, 10);
    legajo = IngresarEntero("Ingrese su legajo: ", "Error, legajo incorrecto...", 500, 1200);
    edad = IngresarEntero("Ingrese su edad: ", "Error, edad invalida (solo 18-56)", 18, 56);

    printf("El numero ingresado fue: %d\n", numeroEntero);
    printf("El legajo ingresado fue: %d\n", legajo);
    printf("La edad ingresada fue: %d\n", edad);

	return EXIT_SUCCESS;
}

int IngresarEntero(char mensaje[], char mensajeError[], int limiteInferior, int limiteSuperior)
{
    int numeroIngresado;

    printf("%s",mensaje);
    scanf("%d",&numeroIngresado);
    while(numeroIngresado < limiteInferior || numeroIngresado > limiteSuperior)
    {
        printf("%s",mensajeError);
        scanf("%d",&numeroIngresado);
    }

    return numeroIngresado;
}
