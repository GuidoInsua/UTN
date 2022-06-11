/*
Guido Insua
División C
Ejercicio 10-3:
	Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
		-idProducto (numerico)
		-descripcion (alfanumérico)
		-nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
		-tipo (numérico)
		-precio (numérico decimal)
	Agregar la estructura etipoProducto, que definirá los siguientes campos:
		-idTipo (numérico)
		-descripcionTipo(alfanumérico)
	Para esta estructura en principio trabajaremos con datos hardcodeados:

		   idTipo	| descripcionTipo
			1000	|	Iphone
			1001	|	Ipad
			1002	|	Mac
			1003	|	Accesorios
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcionesEstructuras.h"
#include "funcionesDeIngreso.h"

#define TAM 10

int main(void)
{
	setbuf(stdout,NULL);

	int opcion;
	//sProducto listaProductos[TAM];
	//stipoProducto listaTipos[4] = {{1000, "IPHONE"}, {1001, "IPAD"}, {1002, "MAC"},{1003, "ACCESORIOS"}};

	do
	{
		printf("\n\n");
		printf("1. ALTA Producto \n");
		printf("2. BAJA Producto \n");
		printf("3. MODIFICACIÓN Producto \n");
		printf("4. LISTADO Productos \n");
		printf("5. LISTADO ordenado por precio \n");
		printf("6. LISTADO ordenado por descripción \n");
		printf("7. LISTADO precio maximo\n");
		printf("8. MOSTRAR precio promedio por tipo\n");
		printf("9. SALIR\n");
		ObtenerInt(&opcion, 1, 18, "Ingrese una opcion: ", "ERROR, Ingrese una opcion valida: ", 4);
		switch(opcion)
		{
			case 1:

				printf("ok");
				break;
			case 2:

				printf("ok");
				break;
			case 3:

				printf("ok");
				break;
			case 4:

				printf("ok");
				break;
			case 5:

				printf("ok");
				break;
			case 6:

				printf("ok");
				break;
			case 7:

				printf("ok");
				break;
			case 8:

				printf("ok");
				break;
			case 9:

				printf("ok");;
				break;
			case 10:

				printf("ok");
				break;
			case 11:

				printf("ok");
				break;
			case 12:

				printf("ok");
				break;
			case 13:

				printf("ok");
				break;
			case 14:

				printf("ok");
				break;
			case 15:

				printf("ok");
				break;
			case 16:

				printf("ok");
				break;
			case 17:

				printf("ok");
				break;
			default:

				printf("ok");
				break;
			}
		}while(opcion!=11);

	return EXIT_SUCCESS;
}
