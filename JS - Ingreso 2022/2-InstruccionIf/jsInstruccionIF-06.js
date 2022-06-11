function mostrar()
{

	let edadIngresada;

	edadIngresada=document.getElementById('txtIdEdad').value;

	edadIngresada=parseInt(edadIngresada);

	if 	(edadIngresada > 12 && edadIngresada < 18)  
	{
		alert("Es adolecente");
	}

	else
	{
		if (edadIngresada < 13) 
		{
			alert("Es menor");
		}
		else
		{
			alert("Es mayor");
		}
	}

}//FIN DE LA FUNCIÓN