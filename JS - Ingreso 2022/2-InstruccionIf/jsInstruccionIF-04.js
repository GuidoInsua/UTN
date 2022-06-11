function mostrar()
{
	let edadIngresada;

	edadIngresada=document.getElementById('txtIdEdad').value;

	edadIngresada = parseInt(edadIngresada);

	if 	(edadIngresada > 12 && edadIngresada < 18)  // && es "and"
	{
		alert("Es adolecente");
	}

		/*
			if (edadIngresada > 12)
			{
				if (edadIngresada < 18)
				{
					alert("Es adolecente");
				}
			}
		*/

}//FIN DE LA FUNCIÓN