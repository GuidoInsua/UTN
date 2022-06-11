function mostrar()
{
	let numeroIngresado;
	let contador;
	let suma;
	let promedio;

	contador = 0;
	acumulador = 0;
	promedio = 0;

	while(contador < 5)
	{
		numeroIngresado=prompt("Ingrese un numero");
		numeroIngresado=parseInt(numeroIngresado);

		contador = contador + 1;
		acumulador = acumulador + numeroIngresado;
	}

	promedio = acumulador/5;

	document.getElementById('txtIdSuma').value=acumulador;
	document.getElementById('txtIdPromedio').value=promedio;


}//FIN DE LA FUNCIÓN