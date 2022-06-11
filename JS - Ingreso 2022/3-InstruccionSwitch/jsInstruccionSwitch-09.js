function mostrar()
{
	
	let estacion;
	let destino;
	let base;
	let porcentaje;
	let precioFinal;

	estacion=document.getElementById('txtIdEstacion').value;
	destino=document.getElementById('txtIdDestino').value;

	base = 15000;
	porcentaje = 0;

	switch (estacion)
	{
		case "Invierno":

			switch (destino)
			{
				case "Bariloche":

					porcentaje = 20/100;
				break;

				case "Cataratas":
				case "Cordoba":

					porcentaje = -10/100;
				break;

				case "Mar del plata":

					porcentaje = -20/100;
				break;
			}
		break;

		case "Verano":

			switch (destino)
			{
				case "Bariloche":

					porcentaje = -20/100;
				break;

				case "Cataratas":
				case "Cordoba":

					porcentaje = 10/100;
				break;

				case "Mar del plata":

					porcentaje = 20/100;
				break;
			}
		break;

		case "Otoño":
		case "Primavera":

			switch (destino)
			{
				case "Bariloche":
				case "Cataratas":
				case "Mar del plata":

					porcentaje = 10/100;
				break;

				case "Cordoba":

					porcentaje = 0;
				break;
			}
		break;
	}

	precioFinal = base + (base * porcentaje);

	alert("El precio final es $" + precioFinal);

}//FIN DE LA FUNCIÓN

