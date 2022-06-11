/*
Guido Insua
División C
Ejercicio 2-2:
    Ingresar 10 números enteros, distintos de cero. Mostrar:
    a. Cantidad de pares e impares.
    b. El menor número ingresado.
    c. De los pares el mayor número ingresado.
    d. Suma de los positivos.
    e. Producto de los negativos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    int i;
    int cantidadDePares;
    int cantidadDeImpares;
    int menorNumero;
    int mayorPar;
    int primerPar;
    int sumaPositivos;
    int productoNegativos;

    cantidadDeImpares = 0;
    cantidadDePares = 0;
    primerPar = 1;
    sumaPositivos = 0;
    productoNegativos = 1;

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeroIngresado);

        while (numeroIngresado == 0)
        {
            printf("Ingrese un numero distinto de cero: ");
            scanf("%d",&numeroIngresado);
        }

        if (numeroIngresado % 2 == 0)
        {
            cantidadDePares++;

            if (numeroIngresado > mayorPar || primerPar == 1)
            {
                primerPar = 0;

                mayorPar = numeroIngresado;
            }

        }
        else
        {
            cantidadDeImpares++;
        }

        if (numeroIngresado < menorNumero || i == 0)
        {
            menorNumero = numeroIngresado;
        }

        if (numeroIngresado > 0)
        {
            sumaPositivos = sumaPositivos + numeroIngresado;
        }
        else
        {
            productoNegativos = productoNegativos * numeroIngresado;
        }
    }

    printf("La cantidad de pares es %d",cantidadDePares);
    printf("\nLa cantidad de inpares es %d",cantidadDeImpares);
    printf("\nEl mayor numero par es %d",mayorPar);
    printf("\nLa suma de los positivos es %d",sumaPositivos);
    printf("\nEl producto de los negativos es %d",productoNegativos);

	return EXIT_SUCCESS;
}
