
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

typedef struct
{
	int dia;
	int mes;
	int anio;
}sFecha;

typedef struct
{
	int idDiagnostico; //PK
	char descripcion[20];
}sDiagnostico;

typedef struct
{
	int idEspecialidad; //PK
	char descripcion[20];
}sEspecialidad;

typedef struct
{
	int idMedico; //PK
	char nombreMedico[50];
	int idEspecialidad; //FK
}sMedico;

typedef struct
{
	int idConsulta; //PK
	char nombrePaciente[50];
	sFecha fechaDeAtencion;
	int idDiagnostico; //FK
	int idMedico; //FK
	int estado;
}sConsulta;

int CargarConsulta(sConsulta[],int,sMedico[],int,sEspecialidad[],int);

int MostrarConsultas(sConsulta[],int,sMedico[],int,sDiagnostico[],int,char,int);

int ModificarConsulta(sConsulta[],int,sMedico[],int,sEspecialidad[],int,int);

int BajarConsulta(sConsulta[],int);

int ListarMedicos(sMedico[],int,sEspecialidad[],int);

int IngresarMedico(sMedico medicos[], int sizeMedicos, int* bufferIdMedico);

int Diagnosticar(sConsulta[],int,sMedico[],int,sDiagnostico[],int,int);

#endif /* FUNCIONES_H_ */
