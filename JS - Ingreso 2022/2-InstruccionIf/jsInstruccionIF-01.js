function mostrar()
{
	let edadIngresada;

	edadIngresada = document.getElementById('txtIdEdad').value;
	edadIngresada = parseInt(edadIngresada);

	if(edadIngresada == 15)  // == comparacion por igual
	{
		alert("niña bonita");
	}

}//FIN DE LA FUNCIÓN