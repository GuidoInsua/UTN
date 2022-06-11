function mostrar()
{

	let edadIngresada;

	edadIngresada=document.getElementById('txtIdEdad').value;
	edadIngresada = parseInt(edadIngresada);

	if (edadIngresada >= 18) 
	{
		alert("Es mayor de edad");
	}

}//FIN DE LA FUNCIÓN