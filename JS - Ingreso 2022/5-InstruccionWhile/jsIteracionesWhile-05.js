/*
Al presionar el botón pedir un sexo
'f' para femenino, 'm' para masculino.*/
function mostrar()
{
	let sexoIngresado;

	sexoIngresado = prompt("ingrese f ó m .");

	while(sexoIngresado != "m" && sexoIngresado != "f")
	{
		alert("no valido");

		sexoIngresado = prompt("ingrese f ó m .");
	}

	alert("valido");

	document.getElementById('txtIdSexo').value=sexoIngresado;


}//FIN DE LA FUNCIÓN