/*
Guido Insua
División C
Ejercicio en clase 2-1:
    Se ingresan 10 numeros enteros distintos de 0. Se desea saber:
    a)Cuantos pares hay
    b)El mayor de los numeros
    c)Promedio positivos
    d)Cantidad negativos
    e)De los negativos el numero mas chico
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    int contadorNegativos;
    int contadorPositivos;
    int acumuladorPositivos;
    int contadorPares;
    int numeroMaximo;
    short int i;
    float promedio;
    int numeroNegativoMinimo;

    contadorPares = 0;
    contadorPositivos = 0;
    contadorNegativos = 0;
    acumuladorPositivos = 0;

    for(i=0;i<3;i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&numeroIngresado);
        while(numeroIngresado==0)
        {
            printf("Por favor ingrese un numero distinto de 0: \n");
            scanf("%d",&numeroIngresado);
        }

        if(numeroIngresado % 2 == 0)
        {
            contadorPares++;
        }

        if(numeroIngresado > numeroMaximo || i == 0)
        {
            numeroMaximo = numeroIngresado;
        }

        if(numeroIngresado > 0)
        {
            contadorPositivos++;
            acumuladorPositivos = acumuladorPositivos + numeroIngresado;
        }
        else
        {
            contadorNegativos++;

            if(numeroIngresado < numeroNegativoMinimo || contadorNegativos == 1)
            {
                numeroNegativoMinimo = numeroIngresado;
            }
        }
    }

    printf("\nLa Cantidad de numeros pares que hay es de: %d",contadorPares);
    printf("\nEl numero maximo es: %d",numeroMaximo);
    if(contadorPositivos > 0)
    {
        promedio= (float)acumuladorPositivos/contadorPositivos;
        printf("\nEl promedio de los numeros positivos es: %f ", promedio);
    }
    else
    {
        printf("\nNo hay numeros positivos");
    }

    if(contadorNegativos > 0)
    {
    	printf("\nLa Cantidad de negativos es de: %d",contadorNegativos);
    	printf("\nEl numero negativo mas chico es: %d", numeroNegativoMinimo);
    }
    else
    {
    	printf("\nNo se ingresaron negativos");
    }

	return EXIT_SUCCESS;
}
