/*
Guido Insua
División C
Ejercicio 5-2:
	Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
		a- Cantidad de positivos y negativos.
		b- Sumatoria de los pares.
		c- El mayor de los impares.
		d- Listado de los números ingresados.
		e- Listado de los números pares.
		f- Listado de los números de las posiciones impares.
				"Anexo"
		g- Los numeros que se repiten.
		h- Los positivos creciente y los negativos de manera decreciente.
*/

#include <stdio.h>
#include <stdlib.h>

#include "funcionesContadoras.h"
#include "funcionesDeIngreso.h"
#include "funcionesDeParidad.h"
#include "funcionesDeBurbujeo.h"

#define TAM 10

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado[TAM];
	int cantidadPositivos;
	int cantidadNegativos;
	int i;
	int sumaDePares;
	int mayorImpar;

	sumaDePares = 0;

	IngresarVectorEntero(numeroIngresado,TAM,-1000,1000,"Ingrese un numero: ","ERROR, Ingrese un numero: ");

	cantidadPositivos = ContarPositivosDelVectorEntero(numeroIngresado, TAM);
	cantidadNegativos = ContarNegativosDelVectorEntero(numeroIngresado, TAM);

	for(i=0;i<TAM;i++)
	{
		if(DeterminarParidadDeEntero(numeroIngresado[i]) == 1)
		{
			sumaDePares = sumaDePares + numeroIngresado[i];
		}
	}

	mayorImpar = DeterminarMayorImparDelVector(numeroIngresado, TAM);

	printf("\nLa cantidad de positivos es %d", cantidadPositivos);
	printf("\nLa cantidad de negativos es %d", cantidadNegativos);
	printf("\nLa sumatoria de los pares es %d", sumaDePares);

	if(mayorImpar == -1)
	{
		printf("\nNo se ingresaron impares");
	}
	else
	{
		printf("\nEl mayor numero impar fue el %d", mayorImpar);
	}

	printf("\nLos numeros ingresados fueron:");

	for(i=0;i<TAM;i++)
	{
		printf(" / %d",numeroIngresado[i]);
	}

	printf("\nLos numeros pares ingresados fueron:");

	for(i=0;i<TAM;i++)
	{
		if(DeterminarParidadDeEntero(numeroIngresado[i]) == 1)
		{
			printf(" / %d",numeroIngresado[i]);
		}
	}

	printf("\nEl listado de los numeros de las posiciones impares es: ");

	for(i=1;i<TAM;i=i+2)
	{
		printf(" / %d",numeroIngresado[i]);
	}

	NumerosRepetidosDelVector(numeroIngresado, TAM);

	OrdenarVectorNegativosDecrecientePositivosCreciente(numeroIngresado, TAM);

	printf("\nEl vector ordenado negativos decreciente y positivos creciente: ");
	for(i=0;i<TAM;i++)
	{
		printf(" / %d",numeroIngresado[i]);
	}

	return EXIT_SUCCESS;
}


