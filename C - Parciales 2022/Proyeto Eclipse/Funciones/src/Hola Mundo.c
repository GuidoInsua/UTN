/*
 ============================================================================
 Name        : Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "funcionesDeIngreso.h"
#include "funcionesDeBurbujeo.h"

int main(void)
{
	setbuf(stdout,NULL);

	char vector[10];
	int numero;

	ObtenerStringAlfabetico(vector, 10, "Ingrese: ", "Error: ", 4, 'n');
	ObtenerInt(&numero, -100, 100000000, "Ingrese: ", "ERROR: ", 4);

	printf("%s",vector);
	printf("\n%d",numero);

	return EXIT_SUCCESS;
}
