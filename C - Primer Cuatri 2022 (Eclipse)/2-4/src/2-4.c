/*
Guido Insua
División C
Ejercicio 2-4:
    Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    char caracterIngresado;
    int i;
    int cantidadDeP;

    cantidadDeP = 0;

    for(i=0;i<5;i++)
    {
        printf("Ingrese un caracter: ");
        fflush(stdin);
        scanf("%c",&caracterIngresado);

        if (caracterIngresado == 'p')
        {
            cantidadDeP++;
        }
    }

    printf("Se ingresaron %d letras 'p' minusculas",cantidadDeP);

	return EXIT_SUCCESS;
}
