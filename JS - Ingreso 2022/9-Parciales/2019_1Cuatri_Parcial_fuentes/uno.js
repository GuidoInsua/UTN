/*
1)De 5  personas que ingresan al hospital se deben tomar y validar los siguientes datos.
  nombre ,sexo, latidos por minuto, peso y si está vacunado o no contra el sarampión:

	a)informar la cantidad de personas vacunadas y no vacunadas.
	b)el peso promedio en total
	c)el hombre con menos latidos por minuto y la mujer con más latidos por minuto
	pedir datos por prompt y mostrar por document.write
*/

function mostrar()
{
	let contadorPersonas;
	let nombreIngresado;
	let sexoIngresado;
	let latidosIngresados;
	let pesoIngresado;
	let vacunaSarampion;
	let personasVacunadas;
	let personasNoVacunadas;
	let pesoTotal;
	let primerMasculino;
	let primerFemenino;
	let masculinoMenosLatidos;
	let femeninoMasLatidos;
	let minimoLatidos;
	let maximolatidos;
	let pesoPromedio;
	let mensaje;

	contadorPersonas = 0;
	personasVacunadas = 0;
	personasNoVacunadas = 0;
	primerFemenino = "si";
	primerMasculino = "si";
	pesoTotal = 0;

	while(contadorPersonas < 5)
	{
		// Contador

		contadorPersonas = contadorPersonas + 1;

		// Ingresar y Validar

		nombreIngresado = prompt("Ingrese un nombre");

		sexoIngresado=prompt("Ingrese el sexoIngresado (-Masculino - Femenino-)");
		sexoIngresado=sexoIngresado.toLowerCase();

		while(sexoIngresado != "masculino" && sexoIngresado != "femenino")
		{
			sexoIngresado=prompt("ERROR, ingrese un sexo valido (-Masculino - Femenino-)");
			sexoIngresado=sexoIngresado.toLowerCase();
		}

		pesoIngresado=prompt("Ingrese el peso");
		pesoIngresado=parseInt(pesoIngresado);

		while(isNaN(pesoIngresado) || pesoIngresado < 1 || pesoIngresado > 600) 
		{
			pesoIngresado=prompt("ERROR, ingrese un peso valido");  
			pesoIngresado=parseInt(pesoIngresado);
		}

		latidosIngresados=prompt("Ingrese los latidos por minuto");

		while(isNaN(latidosIngresados) || latidosIngresados < 40 || latidosIngresados > 120) 
		{
			latidosIngresados=prompt("ERROR, ingrese latidos por minuto valido");  
			latidosIngresados=parseInt(latidosIngresados);
		}

		vacunaSarampion=prompt("Esta vacunado contra el sarampion (-Si - No-)");
		vacunaSarampion=vacunaSarampion.toLowerCase();

		while(vacunaSarampion != "si" && vacunaSarampion != "no")
		{
			vacunaSarampion=prompt("ERROR, respuesta no valida (-Si - No-)");
			vacunaSarampion=vacunaSarampion.toLowerCase();
		}

		// A

		if (vacunaSarampion == "si") 
		{
			personasVacunadas = personasVacunadas + 1;
		}

		else
		{
			personasNoVacunadas = personasNoVacunadas + 1;
		}

		// B + Acumulador

		pesoTotal = pesoTotal + pesoIngresado;

		// C + Banderas

		switch (sexoIngresado)
		{
			case "masculino":

				if (primerMasculino == "si") 
				{
					primerMasculino = "no";

					minimoLatidos = latidosIngresados;

					masculinoMenosLatidos = nombreIngresado;
				}

				else
				{
					if (latidosIngresados < minimoLatidos) 
					{
						minimoLatidos = latidosIngresados;

						masculinoMenosLatidos = nombreIngresado;
					}
				}
			break;

			default:
		
				if (primerFemenino == "si") 
				{
					primerFemenino = "no";

					maximoLatidos = latidosIngresados;

					femeninoMasLatidos = nombreIngresado;
				}

				else
				{
					if (latidosIngresados > maximoLatidos) 
					{
						maximoLatidos = latidosIngresados;

						femeninoMasLatidos = nombreIngresado;
					}
				}
			break;
		}
	}
	//Termina While

	// B segunda parte

	pesoPromedio = pesoTotal / contadorPersonas;

	// Respuestas  -- \n para alert , <br> para .write

	mensaje = "* La cantidad de personas vacunadas son " + personasVacunadas;
	mensaje = mensaje + "<br>* La cantidad de personas no vacunadas son " + personasNoVacunadas;
	mensaje = mensaje + "<br>* El peso promedio es " + pesoPromedio;
	mensaje = mensaje + "<br>* El hombre con menos latidos por minuto es " + masculinoMenosLatidos;
	mensaje = mensaje + "<br>* La mujer con más latidos por minuto es " + femeninoMasLatidos;

	document.write(mensaje);
}
