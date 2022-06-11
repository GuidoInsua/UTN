/*
Al presionar el botón pedir  números  hasta que el USUARIO QUIERA 
e informar la suma acumulada y el promedio.
*/
function mostrar()
{
	let numeroIngresado;
	let promedio;
	let continuar;
	let contador;

	contador = 0;
	continuar = "si";
	acumulador = 0;
	promedio = 0;

	while(continuar == "si")
	{
		numeroIngresado=prompt("Ingrese numero");
		numeroIngresado=parseInt(numeroIngresado);

		contador = contador + 1;

		acumulador = acumulador + numeroIngresado;

		continuar=prompt("Quiere ingresar otro numero?");
	}

	promedio = acumulador/contador;

	document.getElementById('txtIdSuma').value=acumulador;
	document.getElementById('txtIdPromedio').value=promedio;

}//FIN DE LA FUNCIÓN