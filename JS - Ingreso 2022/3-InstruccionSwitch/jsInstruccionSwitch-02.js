function mostrar()
{
	let mesDelAño;
	let mensaje;

	mesDelAño=document.getElementById('txtIdMes').value;

	mensaje = ".";

	switch (mesDelAño)
	{
		case "Julio":
		case "Agosto":

			mensaje = "Abrigate que hace frio";

		break;

		case "Septiembre":
		case "Octubre":
		case "Noviembre":
		case "Diciembre":

			mensaje="Ya pasamos el frio, ahora calor";

		break;

		default:

			mensaje = "falta para invierno";

		break;
	}

	alert(mensaje);


}//FIN DE LA FUNCIÓN