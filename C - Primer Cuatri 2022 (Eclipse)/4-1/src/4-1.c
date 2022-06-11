/*
Guido Insua
División C
Ejercicio 4-1:
    Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
    Por ejemplo:
    5! = 5*4*3*2*1 = 120
*/

#include <stdio.h>
#include <stdlib.h>

int PedirNumero(char mensaje[]);

int main(void)
{
	setbuf(stdout,NULL);

    int numero;
    int factorial;
    int i;

    numero = PedirNumero("Ingrese un numero entero: ");
    factorial = 1;

    for(i=numero;i>0;i--)
    {
        factorial = factorial * i;
    }

    printf("El factorial es %d",factorial);

	return EXIT_SUCCESS;
}

int PedirNumero(char mensaje[])
{
	int numeroIngresado;

	printf("%s",mensaje);
	scanf("%d",&numeroIngresado);

	return numeroIngresado;
}
