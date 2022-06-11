/*
Debemos lograr tomar el importe por ID ,
transformarlo a entero (parseInt), luego
mostrar el importe con un aumento del 10 %
en el cuadro de texto "RESULTADO".*/
function mostrarAumento()
{

	/*	let sueldoIngresado;
	let aumento;
	let resultado;

	sueldoIngresado=document.getElementById('txtIdSueldo').value;

	sueldoIngresado = parseInt(sueldoIngresado);

	aumento = sueldoIngresado * 0.1;
	resultado = sueldoIngresado + aumento;

	document.getElementById('txtIdResultado').value=resultado; */


	let sueldoIngresado;
	let porcentaje;
	let aumento;
	let resultado;

	sueldoIngresado=document.getElementById('txtIdSueldo').value;

	porcentaje = prompt("Ingrese el porcentaje de aumento");

	sueldoIngresado = parseInt(sueldoIngresado);
	porcentaje = parseInt(porcentaje);

	aumento = sueldoIngresado * porcentaje / 100;
	resultado = sueldoIngresado + aumento;

	document.getElementById('txtIdResultado').value=resultado;

	alert("El aumento es " + aumento);
}
