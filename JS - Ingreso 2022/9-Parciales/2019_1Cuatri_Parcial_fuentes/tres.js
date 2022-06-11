/*
3)Nos ingresan una cantidad indeterminada de estadías de  vacaciones, validando los datos ingresados:
  nombre del titular ,lugar ( “Puerto Madryn”, “Villa Gessel” o “Córdoba”),temporada(“otoño”,“invierno”, “verano”,“primavera”),
  cantidad de días que durará el viaje. informar:

	a)el lugar más elegido 
	b)el nombre del titular que más días viaje.
	c)el promedio de días por viaje, de la temporada verano.
*/

function mostrar()
{
	let continuar;
	let nombreIngresado;
	let lugarIngresado;
	let temporadaIngresada;
	let cantidadDeDiasIngresados;
	let viajesMadryn;
	let viajesGessel;
	let viajesCordoba;
	let primerViaje;
	let titularConMasDias;
	let masDiasDeViaje;
	let viajesEnVerano;
	let diasEnVerano;
	let lugarMasElegido;
	let promedioVerano;

	diasEnVerano = 0;
	viajesEnVerano = 0;
	primerViaje = "si";
	continuar = "si";
	viajesMadryn = 0;
	viajesGessel = 0;
	viajesCordoba = 0;

	while(continuar == "si")
	{
		// Ingresar y Validar

		nombreIngresado=prompt("Ingrese el nombre del titular");

		lugarIngresado=prompt("Ingrese el destino (-Puerto Madryn - Villa Gessel - Cordoba-)");
		lugarIngresado=lugarIngresado.toLowerCase();

		while(lugarIngresado != "puerto madryn" && lugarIngresado != "villa gessel" && lugarIngresado != "cordoba")
		{
			lugarIngresado=prompt("ERROR, Ingrese un destino valido (-Puerto Madryn - Villa Gessel - Cordoba-)");
			lugarIngresado=lugarIngresado.toLowerCase();
		}

		temporadaIngresada=prompt("Ingrese la temporada (-Otoño - Invierno - Verano - Primavera-)");
		temporadaIngresada=temporadaIngresada.toLowerCase();

		while(temporadaIngresada != "otoño" && temporadaIngresada != "invierno" && temporadaIngresada != "verano" && temporadaIngresada != "primavera")
		{
			temporadaIngresada=prompt("ERROR, Ingrese una temporada valida (-Otoño - Invierno - Verano - Primavera-)");
			temporadaIngresada=temporadaIngresada.toLowerCase();
		}

		cantidadDeDiasIngresados=prompt("Ingrese la cantidad de dias");
		cantidadDeDiasIngresados=parseInt(cantidadDeDiasIngresados);

		while(isNaN(cantidadDeDiasIngresados) || cantidadDeDiasIngresados < 1 || cantidadDeDiasIngresados > 60)
		{
			cantidadDeDiasIngresados=prompt("ERROR, ingrese una cantidad de dias mayor a 0 y menor a 60");
			cantidadDeDiasIngresados=parseInt(cantidadDeDiasIngresados);
		}

		// A + Contador

		switch(lugarIngresado)
		{
			case "puerto madryn":

				viajesMadryn = viajesMadryn + 1;
			break;

			case "villa gessel":

				viajesGessel = viajesGessel + 1;
			break;

			default:

				viajesCordoba = viajesCordoba + 1;
			break;
		}

		// B + Bandera

		if (primerViaje == "si")
		{
			primerViaje = "no";

			masDiasDeViaje = cantidadDeDiasIngresados;

			titularConMasDias = nombreIngresado;
		}

		else
		{
			if (cantidadDeDiasIngresados > masDiasDeViaje) 
			{
				masDiasDeViaje = cantidadDeDiasIngresados;

				titularConMasDias = nombreIngresado;
			}
		}

		// C + Acumulador

		if (temporadaIngresada == "verano") 
		{
			viajesEnVerano = viajesEnVerano + 1;

			diasEnVerano = diasEnVerano + cantidadDeDiasIngresados;
		}

		// Continuar ?

		continuar=prompt("Desea ingresar otra estadia? (-Si - No-)");
		continuar=continuar.toLowerCase();
	}
	//Termina While

	// A segunda parte

	if (viajesMadryn > viajesGessel && viajesMadryn > viajesCordoba) 
	{
		lugarMasElegido = "Puerto Madryn";
	}

	else
	{
		if (viajesGessel > viajesCordoba) 
		{
			lugarMasElegido = "Villa Gessel";
		}

		else
		{
			lugarMasElegido = "Cordoba";
		}
	}

	// C segunda parte

	promedioVerano = diasEnVerano / viajesEnVerano;

	// Respuestas  -- \n para alert , <br> para .write

	mensaje = "* El lugar mas elegido es " + lugarMasElegido;
	mensaje = mensaje + "<br>* El nombre del titular que mas dias viaja es " + titularConMasDias;
	mensaje = mensaje + "<br>* El promedio de dias por viaje, en la temporada de verano es de " + promedioVerano;

	document.write(mensaje);
}
