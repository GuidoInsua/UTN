#include <stdio.h>
#include <stdlib.h>

#include "funcionesDeBurbujeo.h"

void NumerosRepetidosDelVector(int vector[], int size)
{
	int cantidadDeRepeticiones;
	char repetidos;
	char seRepite;
	float copiaNumeros[size];
	float numeroRepetido;

	seRepite = 'n';
	repetidos = 'n';
	cantidadDeRepeticiones = 1;

	for(int i=0;i<size;i++)
	{
		copiaNumeros[i] = vector[i];
	}

	for(int i=0;i<size-1;i++)
	{
		if(copiaNumeros[i] != 0.5)
		{
			for(int j=i+1;j<size;j++)
			{
				if(copiaNumeros[i] == copiaNumeros[j])
				{
					repetidos = 's';

					seRepite = 's';

					cantidadDeRepeticiones++;

					numeroRepetido = copiaNumeros[j];

					copiaNumeros[j] = 0.5;
				}
			}

			if(seRepite == 's')
			{
				printf("\nEl numero %f esta repetido %d veces",numeroRepetido,cantidadDeRepeticiones);
				seRepite = 'n';
				cantidadDeRepeticiones = 1;
			}
		}
	}

	if(repetidos == 'n')
	{
		printf("\nNo hay repetidos");
	}
}

//----------------------------------------------------------------------------

void OrdenarVectorDeFormaCreciente(int vector[], int size)
{
   int auxiliar;

   for(int i=0;i<size-1;i++)
   {
	  for(int j=i+1;j<size;j++)
	  {
		 if(vector[i]>vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }
}

//----------------------------------------------------------------------------

void OrdenarVectorDeFormaDecreciente(int vector[], int size)
{
   int auxiliar;

   for(int i=0;i<size-1;i++)
   {
	  for(int j=i+1;j<size;j++)
	  {
		 if(vector[i]<vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }
}

//----------------------------------------------------------------------------

void OrdenarVectorNegativosDecrecientes(int vector[], int size)
{
   int auxiliar;

   for(int i=0;i<size-1;i++)
   {
	  for(int j=i+1;j<size;j++)
	  {
		 if(vector[i]<0 && vector[i]<vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }
}

//----------------------------------------------------------------------------

int OrdenarVectorPositivosCrecientes(int vector[], int size)
{
  int auxiliar;

  for(int i=0;i<size-1;i++)
  {
	  for(int j=i+1;j<size;j++)
	  {
		 if(vector[i]>0 && vector[i]>vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
  }
  return auxiliar;
}

//----------------------------------------------------------------------------

void ImprimirListaNegativosDelVectorDecreciente(int vector[], int size)
{
   OrdenarVectorNegativosDecrecientes(vector,size);

   for(int i=0;i<size;i++)
   {
	   if(vector[i]<0)
	   {
		   printf(" / %d",vector[i]);
	   }
   }
}

//----------------------------------------------------------------------------

void ImprimirListaPositivosDelVectorCreciente(int vector[], int size)
{
   OrdenarVectorPositivosCrecientes(vector,size);

   for(int i=0;i<size;i++)
   {
	   if(vector[i]>0)
	   {
		   printf(" / %d",vector[i]);
	   }
   }
}




