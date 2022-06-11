/*
al presionar el botón 
pedir un número entre 0 y 9 inclusive.*/
function mostrar()
{
	let numeroIngresado;

	numeroIngresado = prompt("ingrese un número entre 0 y 9 inclusive.");

	while(numeroIngresado < 0 || numeroIngresado > 9)
	{
		alert("error");
		numeroIngresado = prompt("ingrese un número entre 0 y 9 inclusive.");
	}

	alert("bien");

	document.getElementById('txtIdNumero').value=numeroIngresado;
	
}//FIN DE LA FUNCIÓN