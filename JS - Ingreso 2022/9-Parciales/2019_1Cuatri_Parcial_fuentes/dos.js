/*
2)De una compra debes ingresar una cantidad indeterminada de cortes de carne vacuna, validando los siguientes datos:
  nombre del corte, precio, peso en kilogramos, tipo(con hueso o sin hueso)

	a)informar el peso total de la compra.
	b)el nombre del corte más caro de los sin hueso.
	c)el nombre del corte más liviano de los con hueso.
*/

function mostrar()
{
	let nombreIngresado;
	let precioIngresado;
	let tipoDeCorteIngresado;
	let pesoIngresado;
	let pesoTotal;
	let continuar;
	let primerConHueso;
	let primerSinHueso;
	let nombreCorteMasCaro;
	let precioCorteMasCaro;
	let nombreCorteMasLiviano;
	let pesoCorteMasLiviano;
	let mensaje;

	continuar = "si";
	pesoTotal = 0;
	primerSinHueso = "si";
	primerConHueso = "si";

	while(continuar == "si")
	{
		// Ingresar y Validar

		nombreIngresado=prompt("Ingrese el nombre del corte");

		precioIngresado=prompt("Ingrese el precio");
		precioIngresado=parseInt(precioIngresado);

		while(isNaN(precioIngresado) || precioIngresado < 1 || precioIngresado > 10000) 
		{
			precioIngresado=prompt("ERROR, ingrese un precio valido");  
			precioIngresado=parseInt(precioIngresado);
		}

		tipoDeCorteIngresado=prompt("Ingrese si el tipo de corte es (con hueso) o (sin hueso)");
		tipoDeCorteIngresado=tipoDeCorteIngresado.toLowerCase();

		while(tipoDeCorteIngresado != "con hueso" && tipoDeCorteIngresado != "sin hueso")
		{
			tipoDeCorteIngresado=prompt("ERROR, Ingrese si el tipo de corte es (con hueso) o (sin hueso)");
			tipoDeCorteIngresado=tipoDeCorteIngresado.toLowerCase();
		}

		pesoIngresado=prompt("Ingrese el peso en kilos");
		pesoIngresado=parseInt(pesoIngresado);

		while(isNaN(pesoIngresado) || pesoIngresado < 1 || pesoIngresado > 100)
		{
			pesoIngresado=prompt("ERROR, ingrese un peso valido menor a 100");
			pesoIngresado=parseInt(pesoIngresado);
		}

		// A + Acumulador

		pesoTotal = pesoTotal + pesoIngresado;

		// B

		switch (tipoDeCorteIngresado)
		{
			case "sin hueso":

				if (primerSinHueso == "si") 
				{
					primerSinHueso = "no";

					precioCorteMasCaro = precioIngresado;

					nombreCorteMasCaro = nombreIngresado;
				}

				else
				{
					if(precioIngresado > precioCorteMasCaro)
					{
						precioCorteMasCaro = precioIngresado;

						nombreCorteMasCaro = nombreIngresado;
					}
				}
			break;

		// C
	
			default:
		
				if (primerConHueso == "si") 
				{
					primerConHueso = "no";

					pesoCorteMasLiviano = pesoIngresado;

					nombreCorteMasLiviano = nombreIngresado;
				}

				else
				{
					if (pesoIngresado < pesoCorteMasLiviano) 
					{
						pesoCorteMasLiviano = pesoIngresado;

						nombreCorteMasLiviano = nombreIngresado;
					}
				}
			break;
		}

		// Continuar ?

		continuar=prompt("Desea ingresar otro corte? (-Si - No-)");
		continuar=continuar.toLowerCase();
	}
	//Termina While

	// Respuestas  -- \n para alert , <br> para .write

	mensaje = "* El peso total de la compra es " + pesoTotal + " kilos";
	mensaje = mensaje + "<br>* El nombre del corte mas caro sin hueso es " + nombreCorteMasCaro;
	mensaje = mensaje + "<br>* El nombre del corte mas liviano con hueso es " + nombreCorteMasLiviano;

	document.write(mensaje);
}

