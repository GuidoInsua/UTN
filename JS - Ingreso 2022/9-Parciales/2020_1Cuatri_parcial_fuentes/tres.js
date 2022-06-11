/*
2)De 5  personas que ingresan al hospital se deben tomar y validar los siguientes datos.

nombre ,sexo,nacionalidad(extranjero o nativo) latidos por minuto, peso y si está vacunado o no contra el sarampión:
a)informar el porcentaje de personas extranjeras y nativas.
b)el peso promedio para los extranjeros
c)el nombre, sexo y nacionalidad del que tiene menos latidos por minuto
pedir datos por prompt y mostrar por document.write
*/

function mostrar()
{
	let nombreIngresado;
	let sexoIngresado;
	let nacionalidadIngresada;
	let latidosIngresados;
	let pesoIngresado;
	let vacunaSarampion;
	let contadorPersonas;
	let cantidadExtranjeros;
	let cantidadNativos;
	let pesoTotalExtranjeros;
	let primerPersona;
	let minimoLatidos;
	let personaMenosLatidos;
	let sexoMenosLatidos;
	let nacionalidadMenosLatidos;
	let porcentajeExtranjeros;
	let porcentajeNativos;
	let pesoPromedioExtranjeros;

	primerPersona = "si";
	pesoTotalExtranjeros = 0;
	cantidadNativos = 0;
	cantidadExtranjeros = 0;
	contadorPersonas = 0;

	while(contadorPersonas < 5)
	{
		contadorPersonas = contadorPersonas + 1;

		nombreIngresado = prompt("Ingrese un nombre");

		sexoIngresado=prompt("Ingrese el sexoIngresado (-Masculino - Femenino-)");
		sexoIngresado=sexoIngresado.toLowerCase();

		while(sexoIngresado != "masculino" && sexoIngresado != "femenino")
		{
			sexoIngresado=prompt("ERROR, ingrese un sexo valido (-Masculino - Femenino-)");
			sexoIngresado=sexoIngresado.toLowerCase();
		}

		nacionalidadIngresada=prompt("Ingrese si es (-Extranjero - Nativo-)")
		nacionalidadIngresada=nacionalidadIngresada.toLowerCase();

		while(nacionalidadIngresada != "extranjero" && nacionalidadIngresada != "nativo")
		{
			nacionalidadIngresada=prompt("ERROR, Ingrese si es (-Extranjero - Nativo-)")
			nacionalidadIngresada=nacionalidadIngresada.toLowerCase();	
		}

		pesoIngresado=prompt("Ingrese el peso");
		pesoIngresado=parseInt(pesoIngresado);

		while(isNaN(pesoIngresado) || pesoIngresado < 3 || pesoIngresado > 500) 
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

		// A + B

		switch(nacionalidadIngresada)
		{
			case "extranjero":

				cantidadExtranjeros = cantidadExtranjeros + 1;

				pesoTotalExtranjeros = pesoTotalExtranjeros + pesoIngresado;
			break;

			default:

				cantidadNativos = cantidadNativos + 1;
			break;
		}

		// C

		if (primerPersona == "si") 
		{
			primerPersona = "no";

			minimoLatidos = latidosIngresados;

			personaMenosLatidos = nombreIngresado;
			sexoMenosLatidos = sexoIngresado;
			nacionalidadMenosLatidos = nacionalidadIngresada;
		}

		else
		{
			if (latidosIngresados < minimoLatidos) 
			{
				minimoLatidos = latidosIngresados;

				personaMenosLatidos = nombreIngresado;
				sexoMenosLatidos = sexoIngresado;
				nacionalidadMenosLatidos = nacionalidadIngresada;
			}
		}
	}

	// A

	porcentajeExtranjeros = (cantidadExtranjeros * 100) / contadorPersonas;

	porcentajeNativos = (cantidadNativos * 100) / contadorPersonas;

	// B

	pesoPromedioExtranjeros = pesoTotalExtranjeros / cantidadExtranjeros;

	mensaje = "* El porcentaje de personas nativas es del " + porcentajeNativos + "%";
	mensaje = mensaje + "<br>* El porcentaje de personas extranjeras es del " + porcentajeExtranjeros + "%";
	mensaje = mensaje + "<br>* El peso promedio de los extranjeros es " + pesoPromedioExtranjeros;
	mensaje = mensaje + "<br>* El nombre del que tiene menos latidos es " + personaMenosLatidos + " su sexo es " + sexoMenosLatidos + " y su nacionalidad es " + nacionalidadMenosLatidos;

	document.write(mensaje);
}
