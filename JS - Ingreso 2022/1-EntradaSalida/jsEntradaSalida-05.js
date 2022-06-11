/*
Debemos lograr tomar nombre y edad por ID y mostrarlos concatenados 
ej.: "Usted se llama José y tiene 66 años" 	*/
function mostrar()
{	
	
	let nombreIngresado;
	let edadIngresada;
	let mensaje;

	nombreIngresado=document.getElementById('txtIdNombre').value;
	edadIngresada=document.getElementById('txtIdEdad').value;

	
	//alert("Vos te llamas " + nombreIngresado + " y tenes " + edadIngresada + " años");

	//mensaje="Vos te llamas " + nombreIngresado + " y tenes " + edadIngresada + " años";
	//alert(mensaje);

	mensaje = "Vos te llamas " + nombreIngresado;
	mensaje = mensaje + " y tenes " + edadIngresada;
	mensaje = mensaje + " años";

	alert(mensaje);
	

		/*
		ejercicio 05 bis
		Debemos lograr tomar nombre, apellido (este por prompt) y edad por ID y mostrarlos concatenados 
		ej.: "Usted se llama José,perez  y tiene 66 años" 	

		let nombreIngresado;
		let apellidoIngresado;
		let edadIngresada;
		let mensaje;

		nombreIngresado=document.getElementById('txtIdNombre').value;
		edadIngresada=document.getElementById('txtIdEdad').value;

		apellidoIngresado=prompt("Ingrese su apellido");

		mensaje= "Usted se llama " + nombreIngresado + " " + apellidoIngresado+ " y tiene " + edadIngresada + " años";
		alert(mensaje);
		*/


}

