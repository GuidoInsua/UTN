/*1.	Para el departamento de facturación:
A.	Ingresar tres precios de productos y mostrar la suma de los mismos.
B.	Ingresar tres precios de productos y mostrar el promedio de los mismos.
C.	ingresar tres precios de productos  y mostrar precio final (más IVA 21%).
*/
function Sumar () 
{
	let primerPrecio;
	let segundoPrecio;
	let tercerPrecio;
	let suma;

	primerPrecio=document.getElementById('txtIdPrecioUno').value;
	segundoPrecio=document.getElementById('txtIdPrecioDos').value;
	tercerPrecio=document.getElementById('txtIdPrecioTres').value;

	primerPrecio=parseInt(primerPrecio);
	segundoPrecio=parseInt(segundoPrecio);
	tercerPrecio=parseInt(tercerPrecio);

	suma = primerPrecio + segundoPrecio + tercerPrecio;

	alert(suma);


}
function Promedio () 
{
	let primerPrecio;
	let segundoPrecio;
	let tercerPrecio;
	let suma;
	let promedio;

	primerPrecio=document.getElementById('txtIdPrecioUno').value;
	segundoPrecio=document.getElementById('txtIdPrecioDos').value;
	tercerPrecio=document.getElementById('txtIdPrecioTres').value;

	primerPrecio=parseInt(primerPrecio);
	segundoPrecio=parseInt(segundoPrecio);
	tercerPrecio=parseInt(tercerPrecio);

	suma = primerPrecio + segundoPrecio + tercerPrecio;
	promedio = suma / 3;

	alert(promedio);

}								
function PrecioFinal () 
{
	let primerPrecio;
	let segundoPrecio;
	let tercerPrecio;
	let suma;
	let impuesto;
	let precioFinal;

	primerPrecio=document.getElementById('txtIdPrecioUno').value;
	segundoPrecio=document.getElementById('txtIdPrecioDos').value;
	tercerPrecio=document.getElementById('txtIdPrecioTres').value;

	primerPrecio=parseInt(primerPrecio);
	segundoPrecio=parseInt(segundoPrecio);
	tercerPrecio=parseInt(tercerPrecio);

	suma = primerPrecio + segundoPrecio + tercerPrecio;
	impuesto = suma * 21/100;
	precioFinal = suma + impuesto;

	alert(precioFinal);
}