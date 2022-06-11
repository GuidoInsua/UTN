function mostrar()
{
	let edadIngresada;

	edadIngresada=document.getElementById('txtIdEdad').value;

	edadIngresada = parseInt(edadIngresada);

	if (edadIngresada < 13 || edadIngresada > 17) // || es "or"
	{
	alert("No es adolecente");
	}


		/*
			if 	(!(edadIngresada > 12 && edadIngresada < 18)) // ! es "distinto"
			{
			alert("no es adolecente");
			}
			
    -----------------------------------------------------------

			if 	(edadIngresada > 12 && edadIngresada < 18)
			{
			
			}
			else
			{
				alert("No es adolecente");
			}

			 V o F = V "un V hace todo V" ||		 
		*/

}//FIN DE LA FUNCIÓN