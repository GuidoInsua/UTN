/*
Guido Insua
Divisi�n C
Ejercicio en clase 3-2:
    Crear una funci�n que permita determinar si un n�mero es par o no. La funci�n retorna 1 en caso afirmativo y 0 en caso contrario.
    Crear una bibilioteca (Header file y Source file) con la funcion de paridad.
    Comentar el Header.
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroIngresado);

    if(paridad(numeroIngresado) == 1)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero no es par");
    }

    //system("pause"); // getche();

	return EXIT_SUCCESS;
}
