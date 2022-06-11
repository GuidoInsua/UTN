/*
Al presionar el botón pedir  números  hasta que el usuario quiera,
mostrar el número máximo y el número mínimo ingresado.*/
function mostrar()
{	
	let numeroIngresado;
	let continuar;
	let minimo;
	let maximo;
	let esElPrimero;

	contador = 0;
	continuar = "si";
	esElPrimero = "si";
	minimo = 0;
	maximo = 0;


	while(continuar == "si")
	{
		numeroIngresado=prompt("Ingrese numero");
		numeroIngresado=parseInt(numeroIngresado);

		contador = contador + 1;

		if (esElPrimero == "si") 
		{
			esElPrimero = "no";

			minimo = numeroIngresado;

			maximo = numeroIngresado;
		}

		else
		{
			if (numeroIngresado > maximo) 
			{
				maximo = numeroIngresado;
			}

			if (numeroIngresado < minimo) 
			{
				minimo = numeroIngresado;
			}
		}

		continuar=prompt("Quiere ingresar otro numero?");
	}

	document.getElementById('txtIdMaximo').value=maximo;
	document.getElementById('txtIdMinimo').value=minimo;
}//FIN DE LA FUNCIÓN