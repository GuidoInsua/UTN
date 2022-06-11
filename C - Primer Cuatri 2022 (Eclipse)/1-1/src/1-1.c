/*
Guido Insua
División C
Ejercicio 1-1:
    Ingresar dos números enteros, sumarlos y mostrar el resultado.
    Ejemplo:
    Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int primerNumero;
    int segundoNuemero;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d",&primerNumero);

    printf("Ingrese otro numero: ");
    scanf("%d",&segundoNuemero);

    suma = primerNumero + segundoNuemero;

    printf("La suma es %d",suma);
}
