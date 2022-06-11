/*
Guido Insua
División C
Ejercicio 4-2:
	Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que las temperaturas
	 ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.

	Las validaciones se hacen en una biblioteca.
	Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
*/

#include <stdio.h>
#include <stdlib.h>

float ValidacionTemperatura(float,char);
float PasajeDeTemperatura (float,char);

int main(void)
{
	setbuf(stdout,NULL);

	float temperaturaIngresada;
	float resultadoPasaje;
	char seleccion;
	char continuar;

	continuar = 's';

	while(continuar == 's')
	{
		printf("Eliga que tipo de temperatura desea ingresar ('f'=Fahrenheit / 'c'=Celsius): ");
		fflush(stdin);
		scanf("%c",&seleccion);
		while(seleccion != 'f' && seleccion != 'c')
		{
			printf("ERROR, Eliga que tipo de temperatura desea ingresar ('f'=Fahrenheit / 'c'=Celsius): ");
			fflush(stdin);
			scanf("%c",&seleccion);
		}

		if(seleccion == 'f')
		{
			printf("Ingrese la temperatura: ");
			scanf("%f",&temperaturaIngresada);
			temperaturaIngresada = ValidacionTemperatura(temperaturaIngresada, seleccion);

			resultadoPasaje = PasajeDeTemperatura(temperaturaIngresada,seleccion);
			printf("%f grados fahrenheit son %f grados celsius",temperaturaIngresada, resultadoPasaje);
		}
		else
		{
			printf("Ingrese la temperatura: ");
			scanf("%f",&temperaturaIngresada);
			temperaturaIngresada = ValidacionTemperatura(temperaturaIngresada, seleccion);

			resultadoPasaje = PasajeDeTemperatura(temperaturaIngresada, seleccion);
			printf("%f grados celsius son %f grados fahrenheit",temperaturaIngresada,resultadoPasaje);
		}

		printf("\nDesea ingresar otra temperatura? (s/n): ");
		fflush(stdin);
		scanf("%c",&continuar);
		while(continuar != 's' && continuar != 'n')
		{
			printf("ERROR, Desea ingresar otra temperatura? (s/n): ");
			fflush(stdin);
			scanf("%c",&continuar);
		}
	}

	return EXIT_SUCCESS;
}
