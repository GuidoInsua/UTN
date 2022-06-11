/*
Guido Insua
División C
Ejercicio 17-1:
	Realizar una función que retorne un puntero a eProducto. Dentro de esta función deberá crear un producto hardcodeado,
	un puntero y se apuntará ese puntero al producto. Mostrar el producto cargado 5 veces desde el main. Observar el comportamiento del programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAMMARCA 7
#define TAMPRODUCTO 2

int main(void)
{
	setbuf(stdout,NULL);

	char marca[TAMMARCA][20]= {{"Nike"},{"Puma"},{"Adidas"},{"Rebook"}};
	sProductos productos[TAMPRODUCTO];

	printf("\n");

	strncpy(marca[5],"koko",20);

	for(int i=0;i<TAMMARCA;i++)
	{
		printf(" / %s",marca[i]);
	}

	strncpy(productos[0].marca,"Puma",20);

	if(strcmp(productos[0].marca,marca[1])==0)
	{
		printf("\nOk\n");
	}

	for(int i=0;i<TAMPRODUCTO;i++)
	{
		printf("\n %d %s %s",productos[i].precio,productos[i].tipo,productos[i].marca);
	}


	return EXIT_SUCCESS;
}
