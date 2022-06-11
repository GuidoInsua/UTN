#include "funciones.h"
#include "funcionesDeIngreso.h"
#include "funcionesCadenas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static int AltaConsulta(sConsulta[],int,sMedico[],int,sEspecialidad[],int,int);
static int AltaConsulta(sConsulta consultas[], int sizeConsultas, sMedico medicos[], int sizeMedicos, sEspecialidad especialidades[], int sizeEspecialidades, int index)
{
	sConsulta unaConsulta;
	int retorno;
	int retornoNombre;
	int retornoFecha;
	int retornoMedico;
	int bufferIdMedico;

	retorno = -1;

	unaConsulta.idConsulta = index + 1;
	retornoNombre = ObtenerStringAlfabetico(unaConsulta.nombrePaciente, 50, "Ingrese el nombre del paciente: ", "ERROR, Ingrese el nombre del paciente: ", 4, 's');
	ConvertirUprLwrExtendido(unaConsulta.nombrePaciente, 50, 's');
	retornoFecha = ObtenerFecha(&unaConsulta.fechaDeAtencion.dia,&unaConsulta.fechaDeAtencion.mes,
								&unaConsulta.fechaDeAtencion.anio, 2000, 2022);

	ListarMedicos(medicos, sizeMedicos, especialidades, sizeEspecialidades);
	printf("\n");

	retornoMedico = IngresarMedico(medicos, sizeMedicos, &bufferIdMedico);

	unaConsulta.idMedico = bufferIdMedico;

	unaConsulta.idDiagnostico = 0;
	unaConsulta.estado = 1;

	if(retornoNombre == 0 && retornoFecha == 0 && retornoMedico == 0)
	{
		consultas[index] = unaConsulta;
		retorno = 0;
		printf("\nCarga exitosa");
	}

	return retorno;
}

//----------------------------------------------

static int BuscarVacio(sConsulta[],int);
static int BuscarVacio(sConsulta consultas[], int sizeConsultas)
{
	int index;
	index = -1;


	for(int i=0; i<sizeConsultas; i++)
	{
		if(consultas[i].estado==0)
		{
			index = i;
			break;
		}
	}

	return index;
}

//----------------------------------------------

static void ImprimirUnaConsulta(sConsulta,sMedico,sDiagnostico);
static void ImprimirUnaConsulta(sConsulta consultas, sMedico medicos, sDiagnostico diagnosticos)
{
	printf("\n");
	printf(" %d \t%-20s %2d/%2d/%4d \t%-15s \t%-10s ",consultas.idConsulta,
										   consultas.nombrePaciente,
										   consultas.fechaDeAtencion.dia,
										   consultas.fechaDeAtencion.mes,
										   consultas.fechaDeAtencion.anio,
										   diagnosticos.descripcion,
										   medicos.nombreMedico);
}

//----------------------------------------------

int CargarConsulta(sConsulta consultas[], int sizeConsultas, sMedico medicos[], int sizeMedicos, sEspecialidad especialidades[], int sizeEspecialidades)
{
	int index;
	int retorno;

	retorno = 1;

	index = BuscarVacio(consultas, sizeConsultas);

	if(index != -1)
	{
		retorno = AltaConsulta(consultas, sizeConsultas, medicos, sizeMedicos, especialidades, sizeEspecialidades, index);

		if(retorno != 0)
		{
			retorno = -1;
		}
	}

	return retorno;
}

//----------------------------------------------

int MostrarConsultas(sConsulta consultas[], int sizeConsultas, sMedico medicos[], int sizeMedicos, sDiagnostico diagnosticos[], int sizeDiagnosticos, char discriminar, int index)
{
	int retorno;

	retorno = -1;

	printf("\n id \tPaciente \t\tFecha \t\tDiagnostico \t\tMedico\n");
	printf("---------------------------------------------------------------------------------------");

	for(int i=0; i<sizeConsultas; i++)
	{
		for(int j=0; j<sizeMedicos; j++)
		{
			for(int k=0; k<sizeDiagnosticos; k++)
			{
				if(consultas[i].estado == 1 && (consultas[i].idMedico == medicos[j].idMedico) && (consultas[i].idDiagnostico == diagnosticos[k].idDiagnostico))
				{
					if(discriminar == 's' && consultas[i].idDiagnostico == 0 && consultas[i].idMedico == index)
					{
						ImprimirUnaConsulta(consultas[i], medicos[j], diagnosticos[k]);
						retorno = 0;
					}

					if(discriminar == 'n')
					{
						ImprimirUnaConsulta(consultas[i], medicos[j], diagnosticos[k]);
						retorno = 0;
					}
				}
			}
		}
	}

	return retorno;
}

//----------------------------------------------

int ModificarConsulta(sConsulta consultas[], int sizeConsultas, sMedico medicos[], int sizeMedicos, sEspecialidad especialidades[], int sizeEspecialidades, int index)
{
	int retorno;
	char confirmacion;
	int opcion;
	int bufferInt;
	int bufferDia;
	int bufferMes;
	int bufferAnio;
	char bufferString[50];

	retorno = -1;

	ObtenerInt(&opcion, 1, sizeConsultas, "Ingrese el id de la consulta que desea modificar: ", "ERROR, Ingrese el id de la consulta que desea modificar: ", 4);

	for(int i=0; i<sizeConsultas; i++)
	{
		if(consultas[i].idConsulta == opcion && consultas[i].estado == 1)
		{
			retorno = 1;

			printf("\n Selecion--- id:%d fecha:%d/%d/%d ----\n",consultas[i].idConsulta,consultas[i].fechaDeAtencion.dia,
															   consultas[i].fechaDeAtencion.mes,consultas[i].fechaDeAtencion.anio);

			do
			{
				printf("\n 1. Modificar paciente\n");
				printf(" 2. Modificar fecha\n");
				printf(" 3. Modificar medico\n");
				printf(" 4. SALIR\n");
				ObtenerInt(&opcion, 1, 4, "Ingrese una opcion: ", "ERROR, Ingrese una opcion valida: ", 4);

				switch(opcion)
				{
					case 1:

						ObtenerStringAlfabetico(bufferString, 50, "Ingrese el nombre del paciente: ", "ERROR, Ingrese el nombre del paciente: ", 4, 's');
						ConvertirUprLwrExtendido(bufferString, 50, 's');

						ObtenerCharDosOpciones(&confirmacion, 's', 'n', "Esta seguro que desa modificar la consulta? (s/n): ", "ERROR, Esta seguro que desa modificar la consulta? (s/n): ", 4);
						if(confirmacion == 's')
						{
							snprintf(consultas[i].nombrePaciente,50,"%s",bufferString);
							confirmacion = 'n';
							retorno = 0;
						}
					break;

					case 2:

						ObtenerFecha(&bufferDia,&bufferMes,&bufferAnio, 2000, 2022);

						ObtenerCharDosOpciones(&confirmacion, 's', 'n', "Esta seguro que desa modificar la consulta? (s/n): ", "ERROR, Esta seguro que desa modificar la consulta? (s/n): ", 4);
						if(confirmacion == 's')
						{
							consultas[i].fechaDeAtencion.dia = bufferDia;
							consultas[i].fechaDeAtencion.mes = bufferMes;
							consultas[i].fechaDeAtencion.anio = bufferAnio;
							confirmacion = 'n';
							retorno = 0;
						}
					break;

					case 3:

						ListarMedicos(medicos, sizeMedicos, especialidades, sizeEspecialidades);

						IngresarMedico(medicos, sizeMedicos, &bufferInt);

						ObtenerCharDosOpciones(&confirmacion, 's', 'n', "Esta seguro que desa modificar la consulta? (s/n): ", "ERROR, Esta seguro que desa modificar la consulta? (s/n): ", 4);
						if(confirmacion == 's')
						{
							consultas[i].idMedico = bufferInt;
							confirmacion = 'n';
							retorno = 0;
						}
					break;

					default:
						printf("\nSaliendo...");
					break;
				}
			}while(opcion!=4);
		}
	}

	return retorno;
}

//----------------------------------------------

int BajarConsulta(sConsulta consultas[], int sizeConsultas)
{
	int retorno;
	int seleccion;
	char confirmacion;

	retorno = -1;

	ObtenerInt(&seleccion, 1, sizeConsultas, "Ingrese el id de la consulta que desea eliminar: ", "ERROR, Ingrese el id de la consulta que desea eliminar: ", 4);

	for(int i=0; i<sizeConsultas; i++)
	{
		if(consultas[i].idConsulta == seleccion && consultas[i].estado == 1)
		{
			retorno = 1;

			printf("\n Selecion--- id:%d fecha:%d/%d/%d ----\n",consultas[i].idConsulta,consultas[i].fechaDeAtencion.dia,
															   consultas[i].fechaDeAtencion.mes,consultas[i].fechaDeAtencion.anio);
			ObtenerCharDosOpciones(&confirmacion, 's', 'n', "Esta seguro que desa eliminar la consulta? (s/n): ", "ERROR, Esta seguro que desa eliminar la consulta? (s/n): ", 4);

			if(confirmacion == 's')
			{
				consultas[i].estado = 0;
				retorno = 0;
			}
		}
	}

	return retorno;
}

//----------------------------------------------

int ListarMedicos(sMedico medicos[], int sizeMedicos, sEspecialidad especialidades[], int sizeEspecialidades)
{
	int retorno;

	retorno = -1;

	if(medicos != NULL && sizeMedicos > 0)
	{
		printf("\n id\tNombre \t\t     Especialidad");
		printf("\n-----------------------------------------");
		for(int i=0; i<sizeMedicos; i++)
		{
			for(int j=0; j<sizeEspecialidades; j++)
			{
				if(medicos[i].idEspecialidad == especialidades[j].idEspecialidad)
				{
					printf("\n %3d \t%-20s %-20s",medicos[i].idMedico,medicos[i].nombreMedico,especialidades[j].descripcion);
				}
			}
		}

		printf("\n");

		retorno = 0;
	}

	return retorno;
}

//--------------------------------------------------

int IngresarMedico(sMedico medicos[], int sizeMedicos, int* bufferIdMedico)
{
	int retorno;
	int bufferId;

	retorno = -1;

	if(medicos != NULL && sizeMedicos > 0 && bufferIdMedico != NULL)
	{
		while(retorno != 0)
		{
			retorno = ObtenerInt(&bufferId, 1, 999, "Ingrese el id del medico: ", "ERROR, Ingrese el id del medico", 4);

			if(retorno == -1)
			{
				break;
			}

			retorno = 1;

			for(int i=0; i<sizeMedicos; i++)
			{
				if(bufferId == medicos[i].idMedico)
				{
					*bufferIdMedico = medicos[i].idMedico;
					retorno = 0;
				}
			}

			if(retorno == 1)
			{
				printf("ERROR, El medico seleccionado no existe\n");
			}
		}
	}

	return retorno;
}

//--------------------------------------------------

int Diagnosticar(sConsulta consultas[], int sizeConsultas, sMedico medicos[], int sizeMedicos, sDiagnostico diagnosticos[], int sizeDiagnosticos, int index)
{
	int retorno;
	int opcion;
	int idSeleccionado;

	retorno = -1;

	printf("\n");
	ObtenerInt(&idSeleccionado, 1, sizeConsultas, "Ingrese el id de la consulta que desea diagnosicar: ", "ERROR, Ingrese el id de la consulta que desea diagnosticar: ", 4);

	for(int i=0; i<sizeConsultas; i++)
	{
		if(consultas[i].idConsulta == idSeleccionado && consultas[i].estado == 1 && consultas[i].idMedico == index && consultas[i].idDiagnostico == 0)
		{
			retorno = 1;

			printf("\n Selecion--- id:%d fecha:%d/%d/%d ----\n",consultas[i].idConsulta,consultas[i].fechaDeAtencion.dia,
															   consultas[i].fechaDeAtencion.mes,consultas[i].fechaDeAtencion.anio);
		}
	}

	if(retorno == -1)
	{
		printf("\nERROR, la consulta seleccionada no corresponde al medico elegido");
	}

	if(retorno == 1)
	{
		printf("\nSeleccione el id del diagnostico:");

		for(int i=0;i<sizeDiagnosticos;i++)
		{
			printf("\n %2d \t%-10s",diagnosticos[i].idDiagnostico,diagnosticos[i].descripcion);
		}

		printf("\n");
		ObtenerInt(&opcion, 0, 100, "Seleccione el id del diagnostico: ", "ERROR, Seleccione el id del diagnostico: ", 4);

			consultas[idSeleccionado-1].idDiagnostico = opcion;
	}

	return retorno;
}
