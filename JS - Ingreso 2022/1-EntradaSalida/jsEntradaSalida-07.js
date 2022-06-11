/*
Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostrar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/ 
function sumar()
{	
	let primerNumero;
	let segundoNumero;
	let suma;

	primerNumero=document.getElementById('txtIdNumeroUno').value;
	segundoNumero=document.getElementById('txtIdNumeroDos').value;

	primerNumero=parseInt(primerNumero);
	segundoNumero=parseInt(segundoNumero);

	suma=primerNumero+segundoNumero;

	alert(suma);	
}

function restar()
{
	let primerNumero;
	let segundoNumero;
	let resta;

	primerNumero=document.getElementById('txtIdNumeroUno').value;
	segundoNumero=document.getElementById('txtIdNumeroDos').value;

	primerNumero=parseInt(primerNumero);
	segundoNumero=parseInt(segundoNumero);

	resta=primerNumero-segundoNumero;

	alert(resta);
}

function multiplicar()
{ 
	let primerNumero;
	let segundoNumero;
	let multiplicar;

	primerNumero=document.getElementById('txtIdNumeroUno').value;
	segundoNumero=document.getElementById('txtIdNumeroDos').value;

	primerNumero=parseInt(primerNumero);
	segundoNumero=parseInt(segundoNumero);

	multiplicar=primerNumero*segundoNumero;

	alert(multiplicar);
}

function dividir()
{
	let primerNumero;
	let segundoNumero;
	let division;

	primerNumero=document.getElementById('txtIdNumeroUno').value;
	segundoNumero=document.getElementById('txtIdNumeroDos').value;

	primerNumero = parseInt(primerNumero);
	segundoNumero = parseInt(segundoNumero);

	division = primerNumero / segundoNumero;

	alert(division);
}

