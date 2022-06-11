/*
Guido Insua
División C
Ejercicio Apoyo 1-2:
    Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en qué orden fue ingresado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;
    int i;
    int mayorNumero;
    int menorNumero;
    int ordenMayorNumero;
    int ordenMenorNumero;

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeroIngresado);

        if (numeroIngresado > mayorNumero || i == 0)
        {
            mayorNumero = numeroIngresado;

            ordenMayorNumero = i + 1;
        }

        if (numeroIngresado < menorNumero || i == 0)
        {
            menorNumero = numeroIngresado;

            ordenMenorNumero = i + 1;
        }
    }

    printf("El mayor numero fue el %d y fue ingresado en la posicion numro %d",mayorNumero,ordenMayorNumero);
    printf("\nEl menor numero fue el %d y fue ingresado en la posicion numero %d",menorNumero,ordenMenorNumero);

	return EXIT_SUCCESS;
}
