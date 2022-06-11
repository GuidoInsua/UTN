/*
Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt) y Sumarlos.
mostrar el resulto por medio de "ALERT"*/
function sumar()
{
	let primerNumero;
	let segundoNumero;
	let suma;

	primerNumero=document.getElementById('txtIdNumeroUno').value;
	segundoNumero=document.getElementById('txtIdNumeroDos').value;
  
	primerNumero = parseInt(primerNumero);
	segundoNumero = parseInt(segundoNumero);

	suma = primerNumero + segundoNumero;

	alert(suma);
}

