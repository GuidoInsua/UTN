/*
1)Nos ingresan una cantidad indeterminada de estadías de  vacaciones,
validando los datos ingresados:

nombre del titular ,
lugar ( “Puerto Madryn”, “Villa Gessel” o “Córdoba”),
temporada(“alta”, “baja”),
cantidad de días que durará el viaje.
importe del viaje
informar:
a)el lugar más elegido
b)el nombre del titular que menos pago en temporada baja
c)el nombre del titular que mas pago en temporada alta
*/

function mostrar()
{
	let nombreIngresado;
	let lugarIngresado;
	let temporadaIngresada;
	let cantidadDeDiasIngresados;
	let importeIngresado;
	let continuar;
	let viajesMadryn;
	let viajesGessel;
	let viajesCordoba;
	let primerViajeroTemporadaAlta;
	let importeMinimoTemporadaAlta;
	let titularQueMenosPagoTemporadaAlta;
	let primerViajeroTemporadaBaja;
	let importeMaximoTemporadaBaja;
	let titularQueMasPagoTemporadaBaja;
	let lugarMasElegido;

	continuar = "si";
	viajesCordoba = 0;
	viajesGessel = 0;
	viajesMadryn = 0;
	primerViajeroTemporadaBaja = "si";
	primerViajeroTemporadaAlta = "si";

	while(continuar == "si")
	{
		nombreIngresado=prompt("Ingrese su nombre");

		lugarIngresado=prompt("Ingrese el destino (-Puerto Madryn - Villa Gessel - Córdoba-)");
		lugarIngresado=lugarIngresado.toLowerCase();

		while(lugarIngresado != "puerto madryn" && lugarIngresado != "villa gessel" && lugarIngresado != "córdoba")
		{
			lugarIngresado=prompt("ERROR, Ingrese el destino (-Puerto Madryn - Villa Gessel - Córdoba-)");
			lugarIngresado=lugarIngresado.toLowerCase();
		}

		temporadaIngresada=prompt("Ingrese la temporada (-Alta - Baja-)");
		temporadaIngresada=temporadaIngresada.toLowerCase();

		while(temporadaIngresada != "alta" && temporadaIngresada != "baja")
		{
			temporadaIngresada=prompt("ERROR, Ingrese la temporada (-Alta - Baja-)");
			temporadaIngresada=temporadaIngresada.toLowerCase();
		}

		cantidadDeDiasIngresados=prompt("Ingrese la cantidad de dias que dura el viaje");
		cantidadDeDiasIngresados=parseInt(cantidadDeDiasIngresados);

		while(isNaN(cantidadDeDiasIngresados) || cantidadDeDiasIngresados < 1 || cantidadDeDiasIngresados > 60)
		{
			cantidadDeDiasIngresados=prompt("ERROR, Ingrese la cantidad de dias que dura el viaje (menor a 60)");
			cantidadDeDiasIngresados=parseInt(cantidadDeDiasIngresados);	
		}

		importeIngresado=prompt("Ingrese el importe");
		importeIngresado=parseInt(importeIngresado);

		while(isNaN(importeIngresado) || importeIngresado < 100 || importeIngresado > 10000)
		{
			importeIngresado=prompt("ERROR, Ingrese el importe (mayor a 100 y menor a 10000");
			importeIngresado=parseInt(importeIngresado);
		}

		// A

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

		// B + C

		switch(temporadaIngresada)
		{
			case "alta":

				if (primerViajeroTemporadaAlta == "si") 
				{
					primerViajeroTemporadaAlta = "no";

					importeMinimoTemporadaAlta = importeIngresado;

					titularQueMenosPagoTemporadaAlta = nombreIngresado;
				}

				else
				{
					if (importeIngresado < importeMinimoTemporadaAlta) 
					{
						importeMinimoTemporadaAlta = importeIngresado;

						titularQueMenosPagoTemporadaAlta = nombreIngresado;
					}
				}
			break;

			default:

				if (primerViajeroTemporadaBaja == "si") 
				{
					primerViajeroTemporadaBaja = "no";

					importeMaximoTemporadaBaja = importeIngresado;

					titularQueMasPagoTemporadaBaja = nombreIngresado;
				}

				else
				{
					if (importeIngresado > importeMaximoTemporadaBaja) 
					{
						importeMaximoTemporadaBaja = importeIngresado;

						titularQueMasPagoTemporadaBaja = nombreIngresado;
					}
				}
		}

		continuar=prompt("Desea ingresar otro viaje ? (-Si - No-)")
		continuar=continuar.toLowerCase();

	}		

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

	mensaje = "* El lugar mas elegido fue " + lugarMasElegido;
	mensaje = mensaje + "<br>* El nombre del titular que menos pago en temporada baja es " + titularQueMenosPagoTemporadaAlta;
	mensaje = mensaje + "<br>* El nombre del titular que mas pago en temporada alta es " + titularQueMasPagoTemporadaBaja;

	document.write(mensaje);
}
