/*
Guido Insua
División C
Ejercicio 2-3:
    Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona debemos obtener los siguientes datos:
    número de cliente,
    estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
    edad( solo mayores de edad, más de 17),
    temperatura corporal (validar por favor)
    y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
    NOTA: El precio por pasajero es de $600.

    Se debe informar (solo si corresponde):
    a) La cantidad de personas con estado "viudo" de más de 60 años.
    b) el número de cliente y edad de la mujer soltera más joven.
    c) cuánto sale el viaje total sin descuento.
    d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

    fflush(stdin) / __fpurge(stdin)

    setbuf(stdout, NULL)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int numeroDeCliente;
    char estadoCivil;
    int edad;
    float temperaturaCorporal;
    char genero;
    char continuar;
    int cantidadViudosDe60;
    int primerMujerSoltera;
    int edadMujerSolteraMasJoven;
    int numeroMujerSolteraMasJoven;
    int contadorPersonas;
    int precioSinDescuento;
    int cantidadMayores60;
    float precioFinal;
    int hayDescuento;

    hayDescuento = 0;
    continuar = 's';
    cantidadViudosDe60 = 0;
    primerMujerSoltera = 1;
    contadorPersonas = 0;
    cantidadMayores60 = 0;

    while (continuar == 's')
    {
        printf("Ingrese el numero de cliente: ");
        scanf("%d",&numeroDeCliente);

        printf("Ingrese el estado civil s para soltero, c para casado o v para viudo: ");
        fflush(stdin);
        scanf("%c",&estadoCivil);

        while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
        {
            printf("ERROR, Ingrese el estado civil s para soltero, c para casado o v para viudo: ");
            fflush(stdin);
            scanf("%c",&estadoCivil);
        }

        printf("Ingrese la edad: ");
        scanf("%d",&edad);

        while (edad < 18 || edad > 110)
        {
            printf("ERROR, Ingrese una edad valida: ");
            scanf("%d",&edad);
        }

        printf("Ingrese la temperatura corporal: ");
        scanf("%f",&temperaturaCorporal);

        while (temperaturaCorporal < 35 || temperaturaCorporal > 38 )
        {
            printf("ERROR, Ingrese una temperatura corporal valida: ");
            scanf("%f",&temperaturaCorporal);
        }

        printf("Ingrese el genero f para femenino, m para masculino y o para no binario: ");
        fflush(stdin);
        scanf("%c",&genero);

        while (genero != 'f' && genero != 'm' && genero != 'o')
        {
            printf("ERROR, Ingrese el genero f para femenino, m para masculino y o para no binario: ");
            fflush(stdin);
            scanf("%c",&genero);
        }

        if (estadoCivil == 'v' && edad > 60)
        {
            cantidadViudosDe60++;
        }

        if ((genero == 'm' && estadoCivil == 's' && edad < edadMujerSolteraMasJoven) || primerMujerSoltera == 1)
        {
            primerMujerSoltera = 0;

            edadMujerSolteraMasJoven = edad;
            numeroMujerSolteraMasJoven = numeroDeCliente;
        }

        if (edad > 60)
        {
            cantidadMayores60++;
        }

        contadorPersonas++;

        printf("Desea ingresar otro pasajero? s/n: ");
        fflush(stdin);
        scanf("%c",&continuar);

        while (continuar != 's' && continuar != 'n')
        {
            printf("ERROR, Desea ingresar otro pasajero? s/n: ");
            fflush(stdin);
            scanf("%c",&continuar);
        }
    }

    precioSinDescuento = contadorPersonas * 600;

    if (cantidadMayores60 > (float)contadorPersonas / 2)
    {
        precioFinal = precioSinDescuento + precioSinDescuento * 25/100;

        hayDescuento = 1;
    }

    printf("La cantidad de personas viudas mayores de 60 es %d",cantidadViudosDe60);
    printf("\nEl numero de cliente de la mujer soltera mas joven es %d y su edad es %d",numeroMujerSolteraMasJoven,edadMujerSolteraMasJoven);
    printf("\nEl precio del viaje sin descuento es de $%d",precioSinDescuento);

    if (hayDescuento == 1)
    {
        printf("Como mas de la mitad tienen 60 o mas el precio final con descuento es de $%f",precioFinal);
    }

	return EXIT_SUCCESS;
}
