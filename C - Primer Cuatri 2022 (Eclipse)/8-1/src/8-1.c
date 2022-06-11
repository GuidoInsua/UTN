/*
Guido Insua
División C
Ejercicio 8-1:
	Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
	Crear una función que permita cargar los datos de un jugador y otra que los muestre.
	Una tercera función calculará el promedio de goles.
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcionesDeIngreso.h"

typedef struct
{
	char nombre[20];
	int golesMetidos;
	int partidosJugados;
	float promedioGoles;
}eJugador;

int main(void)
{
	setbuf(stdout,NULL);

	eJugador jugadores[2];

	for(int i=0;i<2;i++)
	{
		ObtenerStringAlfabetico(jugadores[i].nombre, 20, "Ingrese nombre: ", "ERROR, Ingrese nombre: ", 4, 's');
		ObtenerInt(&jugadores[i].golesMetidos, 0, 500, "Ingrese goles: ", "ERROR, Ingrese goles: ", 4);
		ObtenerInt(&jugadores[i].partidosJugados, 0, 1000, "Ingrese la cantidad de partidos jugados: ", "ERROR, Ingrese la cantidad de partidos jugados: ", 4);
		//ObtenerFloat(&jugadores[i].promedioGoles, 0, 100, "Ingrese el promedio de goles: ", "ERROR, Ingrese el promedio de goles: ", 4);
	}

	for(int i=0;i<2;i++)
	{
		jugadores[i].promedioGoles = (float)jugadores[i].golesMetidos / jugadores[i].partidosJugados;
	}

	for(int i=0;i<2;i++)
	{
		printf("\n%s",jugadores[i].nombre);
		printf("\n%d",jugadores[i].golesMetidos);
		printf("\n%d",jugadores[i].partidosJugados);
		printf("\n%f",jugadores[i].promedioGoles);
	}

	return EXIT_SUCCESS;
}
