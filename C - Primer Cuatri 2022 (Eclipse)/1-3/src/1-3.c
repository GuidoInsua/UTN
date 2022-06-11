/*
Guido Insua
División C
Ejercicio 1-3:
    ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
    Ejemplo:
    1   5   3    el 3 es del medio
    5   1   5    no hay numero del medio
    3   5   1    el 3 es del medio
    3   1   5    el 3 es del medio
    5   3   1    el 3 es del medio
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numero1;
    int numero2;
    int numero3;

    printf("Ingrese el primer numero: ");
    scanf("%d",&numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&numero2);

    printf("Ingrese el tercer numero: ");
    scanf("%d",&numero3);

    if((numero1 > numero2 && numero1 < numero3) || (numero1 < numero2 && numero1 > numero3))
    {
        printf("El numero del medio es el %d",numero1);
    }
    else
    {
        if((numero2 > numero1 && numero2 < numero3) || (numero2 < numero1 && numero2 > numero3))
        {
            printf("El numero del medio es el %d",numero2);
        }
        else
        {
            if((numero3 > numero1 && numero3 < numero2) || (numero3 < numero1 && numero3 > numero2))
            {
                printf("El numero del medio es el %d",numero3);
            }
            else
            {
                printf("No hay numero del medio");
            }
        }
    }

	return EXIT_SUCCESS;
}
