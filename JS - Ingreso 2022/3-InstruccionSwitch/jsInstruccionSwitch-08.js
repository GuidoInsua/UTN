function mostrar()
{
	let destino;
	let mensaje;

	destino=document.getElementById('txtIdDestino').value;

	mensaje = ".";

	switch (destino)
	{
		case "Bariloche":
		case "Ushuaia":

			mensaje = "frio";

		break;

		case "Cataratas":
		case "Mar del plata":

			mensaje = "calor";

		break;
	}

	alert(mensaje);

}//FIN DE LA FUNCIÓN