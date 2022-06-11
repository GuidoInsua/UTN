/*
Guido Insua
División C
Ejercicio Apoyo 1-1:
    Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
    a. El promedio de los números positivos.
    b. El promedio de los números negativos.

    fflush(stdin) / __fpurge(stdin)

    setbuf(stdout, NULL)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    char continuar;
    int totalPositivos;
    int totalNegativos;
    float promedioPositivos;
    float promedioNegativos;
    int cantidadPositivos;
    int cantidadNegativos;

    continuar = 's';
    totalPositivos = 0;
    totalNegativos = 0;
    cantidadPositivos = 0;
    cantidadNegativos = 0;

    while(continuar == 's')
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeroIngresado);

        if (numeroIngresado > 0)
        {
            totalPositivos = totalPositivos + numeroIngresado;

            cantidadPositivos++;
        }
        else
        {
            if (numeroIngresado < 0)
            {
                totalNegativos = totalNegativos + numeroIngresado;

                cantidadNegativos++;
            }
        }

        printf("Desea ingresar otro numero? s/n: ");
        fflush(stdin);
        scanf("%c",&continuar);

        while(continuar != 's' && continuar != 'n')
        {
            printf("Desea ingresar otro numero? s/n: ");
            fflush(stdin);
            scanf("%c",&continuar);
        }
    }

    promedioPositivos = (float)totalPositivos / cantidadPositivos;

    promedioNegativos = (float)totalNegativos / cantidadNegativos;

    if (cantidadPositivos != 0)
    {
        printf("El promedio de postivos es %f",promedioPositivos);
    }

    if (cantidadNegativos != 0)
    {
        printf("\nEl promedio de los negativos es %f",promedioNegativos);
    }

	return EXIT_SUCCESS;
}
