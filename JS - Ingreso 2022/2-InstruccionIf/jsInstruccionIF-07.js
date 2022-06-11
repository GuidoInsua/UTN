function mostrar()
{
	let edadIngresada;
	let estadoIngresado;

	edadIngresada=document.getElementById('txtIdEdad').value;
	estadoIngresado=document.getElementById('estadoCivil').value;

	edadIngresada = parseInt(edadIngresada);

	if (edadIngresada < 18 && estadoIngresado != "Soltero")
	{
		alert("Es muy pequeño para NO ser soltero.");
	}


	


}//FIN DE LA FUNCIÓN