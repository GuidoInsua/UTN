/*
Guido Insua
Divisi�n C
Ejercicio 7-1:
	Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
		idProducto (numerico)
		descripcion (alfanum�rico)
		nacionalidad (num�rico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
		tipo (num�rico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
		precio (num�rico decimal)

	Realizar un programa que permita interactuar con un men� de usuarios con las siguientes opciones:
		i- ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
		j- BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
		k- MODIFICACI�N Producto: A partir del ingreso del ID. Si existe se podr� modificar el precio o el tipo.
		l- LISTADO Productos.
		m- LISTADO ordenado por precio.
		n- LISTADO ordenado por descripci�n.
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcionesDeIngreso.h"

	//--------------------------------------------
	//			"Sin terminar"
	//--------------------------------------------

#define ELEMENTOS 5
#define TAM 50

int main(void)
{
	setbuf(stdout,NULL);

	char descripcion[ELEMENTOS][TAM] = {"0","0","0","0","0"};
	char buffer[TAM];

	for(int i=0;i<ELEMENTOS;i++)
	{
			ObtenerStringAlfaNumerico(buffer, 50, "Ingrese la descripcion: ", "ERROR, Ingrese la descripcion: ", 5, 's');
			snprintf(descripcion[i],TAM,"%s",buffer);
	}

	for(int i=0;i<ELEMENTOS;i++)
	{
			printf(" / %s",descripcion[i]);
	}

	return EXIT_SUCCESS;
}
