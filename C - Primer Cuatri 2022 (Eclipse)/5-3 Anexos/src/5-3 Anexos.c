/*
Guido Insua
División C
Ejercicio 5-3 Anexos:
	Realizar un programa que permita el ingreso de 10 números enteros distintos de cero. La carga deberá ser aleatoria
	 (todos los elementos se inicializan en cero por default).
	Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
	 (Según la recta numérica de los reales, hasta llegar a cero).
	Utilizar funciones y vectores.
			"Anexo"
	1)Armar un Menú de Opciones con las siguientes opciones
		1-Inicializar
		2-Cargar
		3-Mostrar
		4-Calcular Promedio
		5-Ordenar
		Al ingresar a cada opción del menú deberá imprimir en pantalla el nombre del mismo. Ej: Si se presiona la opción 1 mostrar por pantalla
		 “Ud. ha seleccionado lo opción 1-Inicializar”
*/

#include <stdio.h>
#include <stdlib.h>

#include "funcionesDeIngreso.h"
#include "funcionesMatematicas.h"

#define TAM 10

//--------------------------------------------
//			"Sin terminar"
//--------------------------------------------

int main(void)
{
	setbuf(stdout,NULL);

	int numerosIngresados[TAM] = {0,0,0,0,0,0,0,0,0,0};
	int posicion;
	char continuar;
	float promedioPositivos;
	int sumaAntecesores;
	char existenPositivos;
	char existenNegativos;
	int i;

	existenPositivos = 'n';
	existenNegativos = 'n';
	continuar = 's';


	while(continuar == 's')
	{
		posicion = IngresarEntero(1, 10, "Ingrese la posicion donde desa ingresar el numero: ", "ERROR, Ingrese una posicion entre 1 y 10: ");
		printf("Ingreso la posicion numero %d\n", posicion);

		IngresarVectorEnteroConReintentos(numerosIngresados, posicion-1, -10000, 10000, "Ingrese el numero que desea guardar: ", "ERROR, Ingrese un numero distinto de cero: ", 4, 'n');
		printf("Guardo el numero %d\n",numerosIngresados[posicion-1]);

		printf("\n");
		printf("Vector: ");
		for(i=0;i<TAM;i++)
		{
			printf(" / %d",numerosIngresados[i]);
		}
		printf("\n");

		continuar = FuncionContinuar("Desea ingresar otro numero? (s/n): ", "ERROR, seleccione (s) para ingresar otro numero o (n) para finalizar: ");
	}

	existenPositivos = PromedioNumerosPositivosDelVector(&promedioPositivos,numerosIngresados, TAM);

	existenNegativos = SumaAntecesoresMenorNegativo(&sumaAntecesores,numerosIngresados, TAM);

	if(existenPositivos == 's')
	{
		printf("\nEl promedio de los numeros positivos es %f", promedioPositivos);
	}
	else
	{
		printf("\nNo se ingresaron positivos");
	}

	if(existenNegativos == 's')
	{
		printf("\nLa suma de los antecesores del menor negativo es %d", sumaAntecesores);
	}
	else
	{
		printf("\nNo se ingresaron negativos");
	}

	return EXIT_SUCCESS;
}

