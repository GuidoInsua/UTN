function mostrar()
{

	let edadIngresada;

	edadIngresada=document.getElementById('txtIdEdad').value;
	edadIngresada = parseInt(edadIngresada);

	if (edadIngresada > 17) 
	{
		alert("Es mayor de edad");
	}
	else
	{
		alert("Es menor de edad");
	}

		/*
		if (edadIngresada >= 18) 
		{
			alert("Es mayor de edad");
		}

		if (edadIngresada <= 17)
		{
			alert("Es menor de edad");
		}
		*/


}//FIN DE LA FUNCIÓN