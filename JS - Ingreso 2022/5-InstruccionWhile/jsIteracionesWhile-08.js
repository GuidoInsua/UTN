/*
Al presionar el botón pedir  números  hasta que el usuario quiera,
sumar los que son positivos y multiplicar los negativos.*/
function mostrar()
{
	let numeroIngresado;
	let acumulador;
	let continuar;
	let contador;
	let multiplicar;

	contador = 0;
	continuar = "si";
	acumulador = 0;
	promedio = 0;
	multiplicar = 1;

	while(continuar == "si")
	{
		numeroIngresado=prompt("Ingrese numero");

		numeroIngresado=parseInt(numeroIngresado);

		contador = contador + 1;

		if (numeroIngresado > 0) 
		{
			acumulador = acumulador + numeroIngresado;
		}

		if (numeroIngresado < 0)
		{
			multiplicar = multiplicar * numeroIngresado;
		}

		continuar=prompt("Quiere ingresar otro numero?");
	}

	document.getElementById('txtIdSuma').value=acumulador;
	document.getElementById('txtIdProducto').value=multiplicar;

}//FIN DE LA FUNCIÓN