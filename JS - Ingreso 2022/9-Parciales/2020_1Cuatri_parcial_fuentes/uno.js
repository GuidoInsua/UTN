
function mostrar()
{
	let producto;
	let precioBarbijo;
	let precioJabon;
	let precioAlcohol;
	let barbijoComprado;
	let jabonComprado;
	let alcoholComprado;
	let marca;
	let fabricante;
	let contador;
	let primerBarbijo;
	let primerJabon;
	let primerAlcohol;
	let minimoBarbijo;
	let minimoJabon;
	let minimoAlcohol;
	let cantidad;
	let precio;
	let alcMinimoUnidad;
	let alcMinimoFabricante;
	let promedio;
	let precioTotal;

	contador = 0;
	barbijoComprado = 0;
	jabonComprado = 0;
	alcoholComprado = 0;

	precioBarbijo = 0;
	precioJabon = 0;
	precioAlcohol = 0;

	primerBarbijo = "si";
	primerJabon = "si";
	primerAlcohol = "si";
	minimoBarbijo = 0;
	minimoJabon = 0;
	minimoAlcohol = 0;

	while(contador < 5)
	{
		contador = contador + 1;

		producto=prompt("Elija el producto que desa comprar (-barbijo- -jabon- -alcohol-)");

		while(producto != "barbijo" && producto != "jabon" && producto != "alcohol") 
		{
			producto=prompt("ERROR, ingrese un producto valido (-barbijo- -jabon- -alcohol-)");  
		}

		cantidad=prompt("Ingrese la cantidad que desea");
		cantidad=parseInt(cantidad);

		while(cantidad < 1 || cantidad > 1000)
		{
			cantidad=prompt("ERROR, ingrese una cantidad spuerior a 0 y menor a 1000");
			cantidad=parseInt(cantidad);
		}

		precio=prompt("Ingrese el precio del producto");
		precio=parseInt(precio);

		while(precio < 100 || precio > 300)
		{
			precio=prompt("ERROR, Ingrese un precio mayor a 100 y menor a 300");
			precio=parseInt(precio);
		}

		switch(producto)
		{
			case "barbijo":
				
				barbijoComprado = barbijoComprado + cantidad;
				precioBarbijo = precioBarbijo + precio * cantidad;					

				marca=prompt("Ingrese la marca del barbijo");
				fabricante=prompt("Ingrese el fabricante del barbijo");

				if (primerBarbijo == "si") 
				{
					primerBarbijo = "no";

					minimoBarbijo = precio; 
				}

				else
				{
					if (precio < minimoBarbijo) 
					{
						minimoBarbijo = precio;
					}
				}
			break;

			case "jabon":

				jabonComprado = jabonComprado + cantidad;
				precioJabon = precioJabon + precio * cantidad;					

				marca=prompt("Ingrese la marca del jabon");
				fabricante=prompt("Ingrese el fabricante del jabon");

				if (primerJabon == "si") 
				{
					primerJabon = "no";

					minimoJabon = precio; 
				}

				else
				{
					if (precio < minimoJabon) 
					{
						minimoJabon = precio;
					}
				}
			break;

			case "alcohol":

				alcoholComprado = alcoholComprado + cantidad;
				precioAlcohol = precioAlcohol + precio * cantidad;					

				marca=prompt("Ingrese la marca del alcohol");
				fabricante=prompt("Ingrese el fabricante del alcohol");

				if (primerAlcohol == "si") 
				{
					primerAlcohol = "no";

					minimoAlcohol = precio;

					alcMinimoUnidad = alcoholComprado;

					alcMinimoFabricante = fabricante;
				}

				else
				{
					if (precio < minimoAlcohol) 
					{
						minimoAlcohol = precio;

						alcMinimoUnidad = alcoholComprado;

						alcMinimoFabricante = fabricante;
					}
				}
			break
		}
	}

	// A

	alert("Del alochol mas barato se compraron " + alcMinimoUnidad + " unidades y el fabricante es " + alcMinimoFabricante);

	// B

	// Barbijo
	if (barbijoComprado > jabonComprado && barbijoComprado > alcoholComprado) 
	{
		promedio = precioBarbijo / barbijoComprado;
		alert("El producto con mas unidades es el barbijo y el promedio por compra es " + promedio);
	}

	else
	{
		if (jabonComprado > alcoholComprado)  
		{
			promedio = precioJabon / jabonComprado;
			alert("El producto con mas unidades es el jabon y el promedio por compra es " + promedio);
		}

		else
		{
			promedio = precioAlcohol / alcoholComprado;
			alert("El producto con mas unidades es el alcohol y el promedio por compra es " + promedio);
		}
	}

	// C

	alert("Se compraron " + jabonComprado + " unidades de jabon");

}

