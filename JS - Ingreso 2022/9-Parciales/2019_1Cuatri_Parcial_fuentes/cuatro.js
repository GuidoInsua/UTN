/*El parcial se puede realizar en cualquier ejercicio de la guía o en los fuentes del parcial 2020 

1)De 5  personas que ingresan al hospital se deben tomar y validar los siguientes datos.

nombre ,sexo, latidos por minuto, peso y si está vacunado o no contra el sarampión:
a)informar la cantidad de personas vacunadas y no vacunadas.
b)el peso promedio en total
c)el hombre con menos latidos por minuto y la mujer con más latidos por minuto
pedir datos por prompt y mostrar por document.write*/

function mostrar()
{
 

	while(continuar < 5)
	{
	 	//validar 
	 	//A

		if (vacunaSarampion == "si") 
		{
			personasVacunadas = personasVacunadas + 1;
		}

		else
		{
			personasNoVacunadas = personasNoVacunadas + 1;
		}

---------------------------------------------------------------------

		switch(vacuna)
		{
			case "vacunados":

				personasVacunadas = personasVacunadas + 1;
			break;

			default:

				personasNoVacunadas = personasNoVacunadas + 1;
			break;
		}

		//B

		pesoTotal = pesoTotal + pesoIngresado;

		//C

		switch(sexo)
		{
			case "masculino":

				if (primerMasculino == "si") 
				{
					primerMasculino = "no";

					minimoLatidos = latidosIngresados;

					masculinoMenosLatidos = nombre;
				}

				else
				{
					if (minimoLatidos > latidosIngresados) 
					{
						minimoLatidos = latidosIngresados;

						masculinoMenosLatidos = nombre;
					}
				}
			break;

			default:

				if (primerFemenino == "si") 
				{
					primerFemenino = "no"

					maximoLatidos = latidosIngresados;

					femeninoMasLatidos = nombre;
				}

				else
				{
					if (maximoLatidos < latidosIngresados) 
					{
						maximoLatidos = latidosIngresados;

						femeninoMasLatidos = nombre;
					}
				}
			break;

		}


	}

	pesoPromedio = pesoTotal / contador;

	//mostrar datos

	mensaje = "* La cantidad de personas vacunadas son " + personasVacunadas;
	mensaje = mensaje + "\n* La cantidad de personas no vacunadas son " + personasNoVacunadas;
	mensaje = mensaje + "\n* El peso promedio es " + pesoPromedio;
	mensaje = mensaje + "\n* El peso promedio es " + pesoPromedio;
	mensaje = mensaje + "\n* El hombre con menos latidos por minuto es " + masculinoMenosLatidos;
	mensaje = mensaje + "\n* La mujer con más latidos por minuto es " + femeninoMasLatidos;

	document.write(mensaje);

}
