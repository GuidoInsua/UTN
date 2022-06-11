/*
Guido Insua
División C
Ejercicio Apoyo 1-3:
    Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de la UTN FRA, los datos solicitados son:
    Legajo
    Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
    Cantidad de materias( mas de cero y menos de 8)
    Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
    Nota promedio (entre 0 y 10)
    Edad (validar)

    Se debe informar de existir, o informar que no existe , en el caso que corresponda.
    a) El Legajo del mejor promedio femenino.
    b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
    c) El promedio de nota por sexo.
    d) La edad y legajo del que cursa más materias. (Sin importar su género)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    int legajo;
    char tipoCursada;
    int cantidadDeMaterias;
    char sexo;
    float notaPromedio;
    int edad;
    char continuar;
    char primerMasculinoLibre;
    float mejorPromedioFemenino;
    int legajoMejorPromedioFemenino;
    int edadLibreMasJovenMasculino;
    int legajoLibreMasJovenMasculino;
    float promedioFemenino;
    float promedioMasculino;
    float promedioNoBinario;
    int cantidadFemenino;
    int cantidadMasculino;
    int cantidadNoBinario;
    float totalNotasFemnino;
    float totalNotasMasculino;
    float totalNotasNoBinario;
    int masMaterias;
    int edadMasMaterias;
    int legajoMasMaterias;
    int primerPersona;

    continuar = 's';
    primerMasculinoLibre = 's';
    cantidadFemenino = 0;
    cantidadMasculino = 0;
    cantidadNoBinario = 0;
    totalNotasFemnino = 0;
    totalNotasMasculino = 0;
    totalNotasNoBinario = 0;
    primerPersona = 's';


    while (continuar == 's')
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajo);

        printf("Ingrese tipo de cursada ('l'=Libre / 'p'=Presencial / 'r'=Remota): ");
        fflush(stdin);
        scanf("%c",&tipoCursada);
        while (tipoCursada != 'l' && tipoCursada != 'p' && tipoCursada != 'r')
        {
            printf("ERROR, Ingrese tipo de cursada ('l'=Libre / 'p'=Presencial / 'r'=Remota): ");
            fflush(stdin);
            scanf("%c",&tipoCursada);
        }

        printf("Ingrese la cantidad de materias: ");
        scanf("%d",&cantidadDeMaterias);
        while (cantidadDeMaterias < 1 || cantidadDeMaterias > 7)
        {
            printf("ERROR, Ingrese la cantidad de materias: ");
            scanf("%d",&cantidadDeMaterias);
        }

        printf("Ingrese el sexo ('f'=Femenino / 'm'=Masculino / 'o'=No Binario): ");
        fflush(stdin);
        scanf("%c",&sexo);
        while(sexo != 'f' && sexo != 'm' && sexo != 'o')
        {
            printf("Ingrese el sexo ('f'=Femenino / 'm'=Masculino / 'o'=No Binario): ");
            fflush(stdin);
            scanf("%c",&sexo);
        }

        printf("Ingrese la nota promedio: ");
        scanf("%f",&notaPromedio);
        while(notaPromedio < 0 || notaPromedio > 10)
        {
            printf("ERROR, Ingrese la nota promedio: ");
            scanf("%f",&notaPromedio);
        }

        printf("Ingrese la edad: ");
        scanf("%d",&edad);
        while(edad < 17 || edad > 100)
        {
            printf("ERROR, Ingrese la edad: ");
            scanf("%d",&edad);
        }

        switch (sexo)
        {
        case 'f':

            if (notaPromedio > mejorPromedioFemenino || cantidadFemenino == 0)
            {
                mejorPromedioFemenino = notaPromedio;
                legajoMejorPromedioFemenino = legajo;
            }

            cantidadFemenino++;
            totalNotasFemnino = totalNotasFemnino + notaPromedio;
        break;

        case 'm':

            if ( (tipoCursada == 'l' && edad < edadLibreMasJovenMasculino) || (primerMasculinoLibre == 's' && tipoCursada == 'l') )
            {
                primerMasculinoLibre = 'n';

                edadLibreMasJovenMasculino = edad;
                legajoLibreMasJovenMasculino = legajo;
            }

            cantidadMasculino++;
            totalNotasMasculino = totalNotasMasculino + notaPromedio;
        break;

        default:

            cantidadNoBinario++;
            totalNotasNoBinario = totalNotasNoBinario + notaPromedio;
        break;
        }

        if (cantidadDeMaterias > masMaterias || primerPersona == 's' )
        {
            masMaterias = cantidadDeMaterias;

            edadMasMaterias = edad;
            legajoMasMaterias = legajo;
        }

        printf("Desea ingresar otro alumno? (s/n): ");
        fflush(stdin);
        scanf("%c",&continuar);
        while(continuar != 's' && continuar != 'n')
        {
            printf("ERROR, Desea ingresar otro alumno? (s/n): ");
            fflush(stdin);
            scanf("%c",&continuar);
        }
    }

    promedioFemenino = totalNotasFemnino / cantidadFemenino;
    promedioMasculino = totalNotasMasculino / cantidadMasculino;
    promedioNoBinario = totalNotasNoBinario / cantidadNoBinario;

    if (cantidadFemenino != 0)
    {
        printf("El legajo del mejor promedio femenino es %d \n",legajoMejorPromedioFemenino);
    }
    else
    {
        printf("No se ingresaron femeninos \n");
    }

    if (primerMasculinoLibre == 'n')
    {
        printf("El legajo del mas joven de los alumnos masculinos entre los que dan libre es %d \n",legajoLibreMasJovenMasculino);
    }
    else
    {
        printf("No hay masculinos que den libre \n");
    }

    if (cantidadFemenino != 0)
    {
        printf("El promedio de notas femenino es %f \n",promedioFemenino);
    }
    else
    {
        printf("No se ingresaron femeninos \n");
    }

    if (cantidadMasculino != 0)
    {
        printf("El promedio de notas masculino es %f \n",promedioMasculino);
    }
    else
    {
        printf("No se ingresaron masculinos \n");
    }

    if (cantidadNoBinario != 0)
    {
        printf("El promedio de notas no binario es %f \n",promedioNoBinario);
    }
    else
    {
        printf("No se ingresaron no binarios \n");
    }

    printf("La edad del que cursa mas materias es %d y su legajo es %d \n",edadMasMaterias,legajoMasMaterias);

	return EXIT_SUCCESS;
}
