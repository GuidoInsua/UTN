#include <stdio.h>
#include <stdlib.h>

#include "funcionesDeBurbujeo.h"

void NumerosRepetidosDelVector(int vector[], int size)
{
	int i;
	int j;
	int x;
	int cantidadDeRepeticiones;
	char repetidos;
	char seRepite;
	int copiaNumeros[size];

	seRepite = 'n';
	repetidos = 'n';
	cantidadDeRepeticiones = 1;

	for(i=0;i<size;i++)
	{
		copiaNumeros[i] = vector[i];
	}

	for(i=0;i<size-1;i++)
	{
		if(copiaNumeros[i] != 2000)
		{
			for(j=i+1;j<size;j++)
			{
				if(copiaNumeros[i] == copiaNumeros[j])
				{
					repetidos = 's';

					seRepite = 's';

					cantidadDeRepeticiones++;

					x = copiaNumeros[j];

					copiaNumeros[j] = 2000;
				}
			}

			if(seRepite == 's')
			{
				printf("\nEl numero %d esta repetido %d veces",x,cantidadDeRepeticiones);
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
   int i;
   int j;

   for(i=0;i<size-1;i++)
   {
	  for(j=i+1;j<size;j++)
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
   int i;
   int j;

   for(i=0;i<size-1;i++)
   {
	  for(j=i+1;j<size;j++)
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

void OrdenarVectorNegativosDecrecientePositivosCreciente(int vector[], int size)
{
   int auxiliar;
   int i;
   int j;

   for(i=0;i<size-1;i++)
   {
	  for(j=i+1;j<size;j++)
	  {
		 if(vector[i]<0 && vector[i]<vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }

   for(i=0;i<size-1;i++)
   {
	  for(j=i+1;j<size;j++)
	  {
		 if(vector[i]>0 && vector[i]>vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }
}

//----------------------------------------------------------------------------

void ImprimirListaNegativosDelVectorDecreciente(int vector[], int size)
{
   int auxiliar;
   int i;
   int j;

   for(i=0;i<size-1;i++)
   {
	  for(j=i+1;j<size;j++)
	  {
		 if(vector[i]<0 && vector[i]<vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }

   for(i=0;i<size;i++)
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
   int auxiliar;
   int i;
   int j;

   for(i=0;i<size-1;i++)
   {
	  for(j=i+1;j<size;j++)
	  {
		 if(vector[i]>0 && vector[i]>vector[j])
		 {
			auxiliar=vector[i];
			vector[i]=vector[j];
			vector[j]=auxiliar;
		 }
	  }
   }

   for(i=0;i<size;i++)
   {
	   if(vector[i]>0)
	   {
		   printf(" / %d",vector[i]);
	   }
   }
}

