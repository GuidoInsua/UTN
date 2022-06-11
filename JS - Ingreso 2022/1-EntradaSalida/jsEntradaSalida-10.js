/*
Debemos lograr tomar el importe por ID.
Transformarlo a entero (parseInt), luego
mostrar el importe con un Descuento del 25 %
en el cuadro de texto "RESULTADO"*/
function mostrarAumento()
{

	let importeIngresado;
	let resultado;

	importeIngresado=document.getElementById('txtIdImporte').value;

	importeIngresado = parseInt(importeIngresado);

	resultado = importeIngresado - importeIngresado * 0.25;

	document.getElementById('txtIdResultado').value=resultado;


	/*	let importeIngresado;		10 Bis
		let porcentaje;
		let descuento;
		let resultado;
		let mensaje;

		importeIngresado=document.getElementById('txtIdImporte').value;

		porcentaje = prompt("Ingrese el porcentaje de descuento");

		importeIngresado = parseInt(importeIngresado);
		porcentaje = parseInt(porcentaje);

		descuento = importeIngresado * porcentaje / 100;
		resultado = importeIngresado - descuento;

		document.getElementById('txtIdResultado').value=resultado;

		mensaje = "Usted ingreso un importe de " + importeIngresado;
		mensaje = mensaje + " e ingreso un descuento del " + porcentaje + "%";
		mensaje = mensaje + " lo cual deja el monto fianl en " + resultado;	

		alert(mensaje);		*/

}
