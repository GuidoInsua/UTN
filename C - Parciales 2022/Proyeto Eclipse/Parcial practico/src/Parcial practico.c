/*
Guido Insua
División C
Parcial Practico:
	1. Realizar un párrafo en donde se pueda observar la/s relación/es entre los siguientes términos: vector,
	estructura repetitiva, dirección de memoria, pasaje por valor, pasaje por referencia. No esta permitido realizar definiciones
	de manual, es necesario que el párrafo demuestre las relaciones entre los términos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/// \brief recibe como parámetro una cadena de caracteres. La misma permitirá intercambiar las vocales por un carácter comodín que también será recibido como parámetro
/// \param cadena
/// \param tamaño de la cedena
/// \param comodin
/// \return cantidad de reemplazos que se llevaron a cabo.
int Intercambio(char*,int,char);

/// \brief  halla cuántos divisores hay del numero recibido como parámetro entre la unidad y el mismo.
/// \param numero
/// \return Retornará la cantidad encontrada.
int EncontrarDivisores(int);

#define TAM 20

int main(void)
{
	setbuf(stdout,NULL);

	char cadena[TAM];
	int cantidadRemplazos;

	snprintf(cadena,TAM,"Hola como estas");

	printf("\n%s\n",cadena);

	cantidadRemplazos = Intercambio(cadena,TAM,'*');

	printf("\n%s",cadena);
	printf("\nFueron %d remplazos",cantidadRemplazos);

//--------------------------------------------------------

	int numero;
	int cantidadDivisores;

	numero = 8;

	cantidadDivisores = EncontrarDivisores(numero); // Pusiste parentesis de mas

	printf("\nCantidad de divisores %d",cantidadDivisores);

	return EXIT_SUCCESS;
}

int Intercambio(char cadena[],int size,char comodin) //usar strlen
{
	int remplazos;

	remplazos = 0;

	if(cadena != NULL && size > 0)
	{
		for(int i=0;i<size;i++)
		{
			if(cadena[i] == 'a' || cadena[i] == 'e' ||
			   cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
			{
				cadena[i] = '*';
				remplazos++;
			}
		}
	}
	return remplazos;
}

//-------------------------------------------------------------

int EncontrarDivisores(int numero)
{
	int cantidadDivisores;

	cantidadDivisores = 0;

	for(int i=1;i<=numero;i++) //Es 1 no 0
	{
		if(numero % i == 0)
		{
			cantidadDivisores++;
		}
	}

	return cantidadDivisores;
}
