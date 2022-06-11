
#include <stdio.h>
#include <stdlib.h>
#include "funcionesDeIngreso.h"
#include "funciones.h"

#define TAMDIAGNOSTICOS 4
#define TAMMEDICOS 4
#define TAMCONSULTAS 100
#define TAMESPECIALIDADES 5

int main(void)
{
	setbuf(stdout,NULL);

	int opcion;
	int opcionLista;
	int index;
	int retorno;
	int bufferInt;
	char tieneConsultas;

	tieneConsultas = 'n';

	sDiagnostico diagnosticos[TAMDIAGNOSTICOS] = {{0, "Sin diagnosticar"}, {12, "Gripe A"}, {23, "Covid-19"}, {26, "Pre infarto"}};
	sEspecialidad especialidades[TAMESPECIALIDADES] = {{3, "Cardiologia"}, {15, "Neumologia"}, {8, "Clinico"}, {11, "Oftalmologia"}, {22, "Traumatologia"}};
	sMedico medicos[TAMMEDICOS] = {{252, "Maria Alvarez", 15}, {192, "Pedro Rubiolo", 3}, {466, "Marcos Rodriguez", 8}, {931, "Tomas Espinoza", 8}};
	sConsulta consultas[TAMCONSULTAS];

	for(int i=0; i<TAMCONSULTAS; i++)
	{
		consultas[i].estado = 0; //0 = sin cargar
	}

	do
	{
		printf("\n\n");
		printf("   --MENU--\n");
		printf(" 1. Cargar consulta\n");
		printf(" 2. Modificar consulta\n");
		printf(" 3. Eliminar consulta\n");
		printf(" 4. Diagnosticar\n");
		printf(" 5. Listar\n");
		printf(" 6. SALIR\n");
		ObtenerInt(&opcion, 1, 6, "Ingrese una opcion: ", "ERROR, Ingrese una opcion valida: ", 4);
		switch(opcion)
		{
			case 1:

				index = CargarConsulta(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, especialidades, TAMESPECIALIDADES);

				switch(index)
				{
					case 1:
						printf("\nNo hay espacio");
					break;

					case 0:
						printf("\nEspacio utilizado");
					break;

					default:
						printf("\nERROR, la carga no pudo ser realizada");
					break;
				}

				break;
			case 2:

				MostrarConsultas(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, diagnosticos, TAMDIAGNOSTICOS, 'n',0);
				printf("\n\n");

				retorno = -2;
				retorno = ModificarConsulta(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, especialidades, TAMESPECIALIDADES ,index);
				switch(retorno)
				{
					case 0:
						printf("\nSe modifico exitosamente.");
					break;

					case 1:
						printf("\nNo se modifico la consulta.");
					break;

					default:
						printf("\nNo se encontro la consulta.");
					break;
				}

				break;
			case 3:

				MostrarConsultas(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, diagnosticos, TAMDIAGNOSTICOS, 'n',0);
				printf("\n\n");

				retorno = -2;
				retorno = BajarConsulta(consultas, TAMCONSULTAS);
				switch(retorno)
				{
					case 0:
						printf("\nSe elimino exitosamente.");
					break;

					case 1:
						printf("\nNo se elimino la consulta.");
					break;

					default:
						printf("\nNo se encontro la consulta.");
					break;
				}

				break;
			case 4:

				// ingresar medico
				// mostrar consultas sin diagnosticar
				// ingresar consulta

				retorno = ListarMedicos(medicos, TAMMEDICOS, especialidades, TAMESPECIALIDADES);

				printf("\n");
				retorno = IngresarMedico(medicos, TAMMEDICOS, &bufferInt);



				for(int i=0;i<TAMCONSULTAS;i++)
				{
					if(consultas[i].idMedico == bufferInt && consultas[i].estado == 1 && consultas[i].idDiagnostico == 0)
					{
						tieneConsultas = 's';
					}
				}

				if(tieneConsultas == 's')
				{
					retorno = MostrarConsultas(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, diagnosticos, TAMDIAGNOSTICOS, 's', bufferInt);
					printf("\n");
					retorno = Diagnosticar(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, diagnosticos, TAMDIAGNOSTICOS, bufferInt);
					tieneConsultas = 'n';
				}
				else
				{
					printf("El medico seleccionado no tiene consultas para diagnosticar");
				}

				break;
			case 5:

				printf("\n\n");
				printf("   --MENU LISTAS--\n");
				printf(" 1. Todos los médicos.\n");
				printf(" 2. Todas las consultas.\n");
				printf(" 3. Todos los médicos con consultas diagnosticadas.\n");
				printf(" 4. Listado de consultas ordenadas por fecha.\n");
				printf(" 5. Listado de consultas ya diagnosticadas.\n");
				printf(" 6. Listado de las consultas diagnosticadas con covid-19.\n");
				printf(" 7. Listado de consultas ordenadas por especialidad alfabéticamente.\n");
				printf(" 8. Listado de todas las consultas entre el mes de abril y julio de una especialidad determinada.\n");
				printf(" 9. Porcentaje de consultas diagnosticadas que atiende cada médico en función del total de diagnósticos.\n");
				printf(" 10. Volver al menu principal.\n");
				ObtenerInt(&opcionLista, 1, 10, "Ingrese una opcion: ", "ERROR, Ingrese una opcion valida: ", 4);

				switch(opcionLista)
						{
							case 1:

								printf("\n Lista de medicos: \n");
								ListarMedicos(medicos, TAMMEDICOS, especialidades, TAMESPECIALIDADES);

								break;
							case 2:

								MostrarConsultas(consultas, TAMCONSULTAS, medicos, TAMMEDICOS, diagnosticos, TAMDIAGNOSTICOS, 'n',0);

								break;
							case 3:

								printf("cancelar");
								break;
							case 4:

								printf("diagnosticar");
								break;
							case 5:

								printf("diagnosticar");
								break;

							case 6:

								printf("modificar");
								break;
							case 7:

								printf("cancelar");
								break;
							case 8:

								printf("diagnosticar");
								break;
							case 9:

								printf("diagnosticar");
								break;
							case 10:

								printf("\nVolviendo...");
								break;
						}
				break;
			default:

				printf("\nsalio");
				break;
			}
		}while(opcion!=6);

return EXIT_SUCCESS;
}


