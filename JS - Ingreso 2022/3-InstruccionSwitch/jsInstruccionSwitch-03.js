function mostrar()
{
	let mesDelAño; 
	let mensaje;

	mesDelAño=document.getElementById('txtIdMes').value;

	mensaje = ".";

	switch (mesDelAño)
	{
		case "Febrero":

			mensaje = "Este mes no tiene más de 29 días.";
		
		break;

		default:

			mensaje = "Este mes tiene 30 o más días";

		break;

	}

	alert(mensaje);


}//FIN DE LA FUNCIÓN