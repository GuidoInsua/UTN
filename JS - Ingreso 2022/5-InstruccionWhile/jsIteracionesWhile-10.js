/*
Al presionar el botón pedir  números  
hasta que el usuario quiera, mostrar:
1-Suma de los negativos.
2-Suma de los positivos.
3-Cantidad de positivos.
4-Cantidad de negativos.
5-Cantidad de ceros.
6-Cantidad de números pares.
7-Promedio de positivos.
8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos). */
function mostrar()
{

	let numeroIngresado;
	let continuar;
	let contador;
	let sumaNegativos;
	let sumaPositivos;
	let cantidadNegativos;
	let cantidadPositivos;
	let cantidadCeros;
	let cantidadPares;
	let promedioPositivos;
	let promedioNegativos;
	let diferenciaNegPos;

	continuar = "si";
	contador = 0;
	sumaNegativos = 0;
	sumaPositivos = 0;
	cantidadNegativos = 0;
	cantidadPositivos = 0;
	cantidadCeros = 0;
	cantidadPares = 0;

	while(continuar == "si")
	{

		contador = contador + 1;

		numeroIngresado=prompt("Ingrese un numero.");
		numeroIngresado=parseInt(numeroIngresado);

		if (numeroIngresado == 0) 
		{
			cantidadCeros = cantidadCeros + 1;
		}

		else
		{
			if (numeroIngresado > 0) 
			{
				sumaPositivos = sumaPositivos + numeroIngresado;

				cantidadPositivos = cantidadPositivos + 1;
			}

			else
			{
				sumaNegativos = sumaNegativos + numeroIngresado;

				cantidadNegativos = cantidadNegativos + 1;
			}
		}

		if (numeroIngresado %2 == 0) 
		{
			cantidadPares = cantidadPares + 1;
		}

		continuar=prompt("Desea ingresar otro numero?.");

	}

	promedioPositivos = sumaPositivos / cantidadPositivos;
	promedioNegativos = sumaNegativos / cantidadNegativos;

	diferenciaNegPos = sumaPositivos + sumaNegativos;

	alert("1- La suma de los Negativos es " + sumaNegativos);
	alert("2- La suma de los Positivos es " + sumaPositivos);
	alert("3- La cantidad de Positivos es " + cantidadPositivos);
	alert("4- La cantidad de Negativos es " + cantidadNegativos);
	alert("5- La cantidad de Ceros es " + cantidadCeros);
	alert("6- La cantidad de nuemeros Pares es " + cantidadPares);
	alert("7- El promedio de Positivos es " + promedioPositivos);
	alert("8- El promedio de Negativos es " + promedioNegativos);
	alert("9- La diferencia entre Positivos y Negativos es " + diferenciaNegPos);

}//FIN DE LA FUNCIÓN