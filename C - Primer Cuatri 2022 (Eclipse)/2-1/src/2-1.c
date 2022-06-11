/*
Guido Insua
División C
Ejercicio 2-1:
    Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
    Ejemplo:
    3 - 5 - 7 - 9 - 1
    2 - 1 - 8 -1 - 2
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    int i;
    int total;
    float promedio;

    total = 0;

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeroIngresado);

        total = total + numeroIngresado;
    }

    promedio = (float)total / i;

    printf("El promedio es %f",promedio);

	return EXIT_SUCCESS;
}
