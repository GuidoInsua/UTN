/*
Guido Insua
División C
Ejercicio 6-2:
	Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
	Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente (Como máximo 5 estructuras repetitivas).
		Ejemplo:
			Listado 1 : 4, 5, 6, 10, 18, 29
			Listado 2 : -1,-5,-9,-12
*/

#include <stdio.h>
#include <stdlib.h>

#include "funcionesDeIngreso.h"
#include "funcionesDeBurbujeo.h"

#define TAM 10

int main(void)
{
	setbuf(stdout,NULL);

	int numerosIngresados[TAM];

	IngresarVectorEntero(numerosIngresados, TAM, -10000, 10000, "Ingrese numero: ", "ERROR, Ingrese numero: ");

	printf("\nLista 1: ");
	ImprimirListaPositivosDelVectorCreciente(numerosIngresados, TAM);

	printf("\nLista 2: ");
	ImprimirListaNegativosDelVectorDecreciente(numerosIngresados, TAM);

	return EXIT_SUCCESS;
}
