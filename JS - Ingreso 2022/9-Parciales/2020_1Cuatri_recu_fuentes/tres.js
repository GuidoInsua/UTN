/*
3)De una compra debes ingresar una cantidad indeterminada de cortes de carne vacuna y de chancho,
 validando los siguientes datos:

nombre del corte, precio, peso en kilogramos, tipo(con hueso o sin hueso), origen (vacuno o chancho)
a)informar el peso de los sin hueso  y de los con hueso de la compra .
b)el nombre del corte más pesado de los de origen vacuno.
c)el nombre del corte más barato  de los de origen chancho.
*/

function mostrar()
{
	let nombreIngresado;
	let precioIngresado;
	let tipoDeCorteIngresado;
	let pesoIngresado;
	let origenIngresado;
	let pesoTotalSinHueso;
	let pesoTotalConHueso;
	let primerVacuno;
	let primerChancho;
	let mayorPesoVacuno;
	let menorPrecioChancho;
	let nombreVacunoMasPesado
	let nombreChanchoMasBarato

	primerChancho = "si";
	primerVacuno = "si";
	pesoTotalSinHueso = 0;
	pesoTotalConHueso = 0;
	continuar = "si";

	while(continuar == "si")
	{
		nombreIngresado=prompt("Ingrese el nombre del corte");

		precioIngresado=prompt("Ingrese el precio");
		precioIngresado=parseInt(precioIngresado);

		while(isNaN(precioIngresado) || precioIngresado < 100 || precioIngresado > 10000) 
		{
			precioIngresado=prompt("ERROR, ingrese un precio valido (mayor a 100 y menor a 10000");  
			precioIngresado=parseInt(precioIngresado);
		}

		tipoDeCorteIngresado=prompt("Ingrese si el tipo de corte es (Con hueso) o (Sin hueso)");
		tipoDeCorteIngresado=tipoDeCorteIngresado.toLowerCase();

		while(tipoDeCorteIngresado != "con hueso" && tipoDeCorteIngresado != "sin hueso")
		{
			tipoDeCorteIngresado=prompt("ERROR, Ingrese si el tipo de corte es (Con hueso) o (Sin hueso)");
			tipoDeCorteIngresado=tipoDeCorteIngresado.toLowerCase();
		}

		pesoIngresado=prompt("Ingrese el peso en kilos");
		pesoIngresado=parseInt(pesoIngresado);

		while(isNaN(pesoIngresado) || pesoIngresado < 1 || pesoIngresado > 100)
		{
			pesoIngresado=prompt("ERROR, ingrese un peso valido menor a 100");
			pesoIngresado=parseInt(pesoIngresado);
		}

		origenIngresado=prompt("Ingrese si el origen es (-Vacuno - Chancho-)")
		origenIngresado=origenIngresado.toLowerCase();

		while(origenIngresado != "vacuno" && origenIngresado != "chancho")
		{
			origenIngresado=prompt("ERROR, Ingrese si el origen es (-Vacuno - Chancho-)")
			origenIngresado=origenIngresado.toLowerCase();
		}	

		// A

		switch(tipoDeCorteIngresado)
		{
			case "sin hueso":

				pesoTotalSinHueso = pesoTotalSinHueso + pesoIngresado;
			break;

			default:

				pesoTotalConHueso = pesoTotalConHueso + pesoIngresado;
			break;
		}

		// B + C

		switch(origenIngresado)
		{
			case "vacuno":

				if (primerVacuno == "si") 
				{
					primerVacuno = "no";

					mayorPesoVacuno = pesoIngresado;

					nombreVacunoMasPesado = nombreIngresado;
				}

				else 
				{
					if (pesoIngresado > mayorPesoVacuno) 
					{
						mayorPesoVacuno = pesoIngresado;

						nombreVacunoMasPesado = nombreIngresado;	
					}
				}
			break;

			default:

				if (primerChancho == "si")
				{
					primerChancho = "no";

					menorPrecioChancho = precioIngresado;

					nombreChanchoMasBarato = nombreIngresado;
				}

				else
				{
					if (precioIngresado < menorPrecioChancho) 
					{
						menorPrecioChancho = precioIngresado;

						nombreChanchoMasBarato = nombreIngresado;
					}
				}
			break;
		}

		continuar=prompt("Desea ingresar otro corte? (-Si - No-)");
		continuar=continuar.toLowerCase();
	}

	mensaje = "* El peso total de los sin hueso es " + pesoTotalSinHueso;
	mensaje = mensaje + "<br>* El peso total de los con hueso es " + pesoTotalConHueso;
	mensaje = mensaje + "<br>* El nombre del corte mas pesado de origen vacuno es " + nombreVacunoMasPesado;
	mensaje = mensaje + "<br>* El nombre del corte mas barato de origen chancho es " + nombreChanchoMasBarato;

	document.write(mensaje);
}
