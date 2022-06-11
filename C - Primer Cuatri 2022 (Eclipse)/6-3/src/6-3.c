/*
Guido Insua
División C
Ejercicio 6-3:
	Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido).
	Ninguna de las dos variables se puede modificar.
	Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
		Por ejemplo:
	Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser: Gomez, Juan Ignacio
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcionesCadenas.h"
#include "funcionesDeIngreso.h"

int main(void)
{
	setbuf(stdout,NULL);

	char nombre[20];
	char apellido[20];

	ObtenerChar(nombre, 20, "Ingrese el nombre: ", "Error, Ingrese el nombre: ", 4, 's');
	ObtenerChar(apellido, 20, "Ingrese el apellido: ", "ERROR, Ingrese el apellido: ", 4, 's');

	printf("\nIngreso: %s, %s",apellido,nombre);

	ConvertirUprLwrExtendido(nombre, 20, 's');
	ConvertirUprLwrExtendido(apellido, 20, 's');

	printf("\nResultado: %s, %s",apellido,nombre);

	return EXIT_SUCCESS;
}
