/*
Guido Insua
División C
Ejercicio 3-5:
    Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones. (Apunta a que entiendan el concepto de independencia del código)
		int Sumar1(int, int);
		int Sumar2(void);
		void Sumar3(int, int);
		void Sumar4(void);
*/

#include <stdio.h>
#include <stdlib.h>

int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main(void)
{
	setbuf(stdout,NULL);

	int primerNumero;
	int segundoNumero;

	printf("Ingrese un numero: \n");
	scanf("%d",&primerNumero);

	printf("Ingrese otro numero: \n");
	scanf("%d",&segundoNumero);

	// Toma los dos numeros dados y retorna la primer suma
	printf("El resultado es %d \n",Sumar1(primerNumero, segundoNumero));

	// Pide dos numeros y retorna la segunda suma
	printf("El resultado es %d \n", Sumar2());

	// Toma los dos numeros dados y muestara en pantalla la tercer suma
	printf("Ingrese un numero: \n");
	scanf("%d",&primerNumero);

	printf("Ingrese otro numero: \n");
	scanf("%d",&segundoNumero);

	Sumar3(primerNumero, segundoNumero);

	// Pide dos numeros y muestra en pantalla la cuarta suma
	Sumar4();

	return EXIT_SUCCESS;
}

int Sumar1(int primerNumero, int segundoNumero)
{
	int suma1;

	suma1 = primerNumero + segundoNumero;

	return suma1;
}

int Sumar2(void)
{
	int suma2;
	int primerNumero;
	int segundoNumero;

	printf("Ingrese un numero: \n");
	scanf("%d",&primerNumero);

	printf("Ingrese otro numero: \n");
	scanf("%d",&segundoNumero);

	suma2 = primerNumero + segundoNumero;

	return suma2;
}

void Sumar3(int primerNumero, int segundoNumero)
{
	int suma3;

	suma3 = primerNumero + segundoNumero;

	printf("El resultado es %d \n",suma3);
}

void Sumar4(void)
{
	int suma4;
	int primerNumero;
	int segundoNumero;

	printf("Ingrese un numero: \n");
	scanf("%d",&primerNumero);

	printf("Ingrese otro numero: \n");
	scanf("%d",&segundoNumero);

	suma4 = primerNumero + segundoNumero;

	printf("El resultado es %d \n",suma4);
}





