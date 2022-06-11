/*
 * funcionesEstructuras.h
 *
 *  Created on: 2 may. 2022
 *      Author: insua
 */

#ifndef FUNCIONESESTRUCTURAS_H_
#define FUNCIONESESTRUCTURAS_H_

typedef struct
{
	int idTipo;
	char descripcionTipo[30];
}stipoProducto;

typedef struct
{
	int idProducto;
	char descripcion[30];
	char nacionalidad[30];
	int tipo;
	float precio;
	int idTipo;
}sProducto;

#endif /* FUNCIONESESTRUCTURAS_H_ */
