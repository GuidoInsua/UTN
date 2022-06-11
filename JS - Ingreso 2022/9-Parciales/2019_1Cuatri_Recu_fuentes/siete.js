function mostrar()
{
	let cantidad;
	let contador;
	let producto;
	let kilosTotales;
	let primeroCarne;
	let minimoCarne;
	let primeroPollo;
	let minimoPollo;
	let primeroVegetales;
	let minimoVegetales;
	let contadorCarne;
	let promedioTotal;
	let promedioCarne;
	let cantidadCarne;

	cantidad=0;
	contador=0;
	producto=0;
	primeroCarne="si";
	minimoCarne=0;
	primeroPollo="si";
	minimoPollo=0;
	primeroVegetales="si";
	minimoVegetales=0;
	contadorCarne=0;
	kilosTotales=0;
	promedioTotal=0;
	promedioCarne=0;
	cantidadCarne=0;

	while(contador < 10)
	{
		contador = contador + 1;

		producto=prompt("Elija el sabor (-carne- -vegetales- -pollo-)");

		while(producto != "carne" && producto != "vegetales" && producto != "pollo") 
		{
			producto=prompt("ERROR, ingrese un producto valido (-carne- -vegetales- -pollo-)");  
		}

		cantidad=prompt("Ingrese la cantidad de kilos que desea");
		cantidad=parseInt(cantidad);

		while(cantidad < 1 || cantidad > 500)
		{
			cantidad=prompt("ERROR, ingrese una cantidad spuerior a 0 y menor a 500");
			cantidad=parseInt(cantidad);
		}

		switch (producto)
		{
			case "carne":

				contadorCarne = contadorCarne + 1;

				if (primeroCarne == "si") 
				{
					primeroCarne = "no";

					minimoCarne = cantidad; 
				}

				else
				{
					if (precio < minimoCarne) 
					{
						minimoCarne = precio;
					}
				}

				cantidadCarne = cantidadCarne + cantidad
			break;

			case "vegetales":

				if (primeroVegetales == "si") 
				{
					primeroVegetales = "no";

					minimoVegetales = cantidad; 
				}

				else
				{
					if (precio < minimoVegetales) 
					{
						minimoVegetales = precio;
					}
				}
			break;

			case "pollo":

				if (primeroPollo == "si") 
				{
					primeroPollo = "no";

					minimoPollo = cantidad; 
				}

				else
				{
					if (precio < minimoPollo) 
					{
						minimoPollo = precio;
					}
				}
		}
	kilosTotales = kilosTotales + cantidad;

	}	

	//A

	promedioTotal = kilosTotales / 10

	alert("El promedio de los killos totales es de " + kilosTotales);

	//B

	if (minimoCarne < minimoVegetales && minimoCarne < minimoPollo) 
	{
		alert("La bolsa mas liviana es de " + minimoCarne + " kilos y su sabor es carne");
	}

	else
	{
		if (minimoVegetales < minimoPollo)  
		{
			alert("La bolsa mas liviana es de " + minimoVegetales + " kilos y su sabor es vegetales");
		}

		else
		{
			alert("La bolsa mas liviana es de " + minimoPollo + " kilos y su sabor es pollo");
		}
	}

	//C

	promedioCarne = cantidadCarne / contadorCarne;

	alert("Se compraron " + cantidadCarne + " kilos de carne y su promedio es de " + promedioCarne);
}
