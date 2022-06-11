/*2.	Para el departamento de Construcción:
A.	 mostrar la cantidad de alambre a comprar  si se ingresara el largo y el ancho de un terreno rectangular y se debe alambra con tres hilos de alambre.
B.	mostrar la cantidad de alambre a comprar  si se ingresara el radio  de un terreno circular y se debe alambra con tres hilos de alambre.
C.	Para hacer un contrapiso de 1m x 1m se necesitan 2 bolsas de cemento y 3 de cal, debemos mostrar cuantas bolsas se necesitan de cada uno para las medidas que nos ingresen.
*/

function Rectangulo () 
{
	let largoTerreno;
	let anchoTerreno;
	let perimetro;
	let alambreNecesario;

	largoTerreno=document.getElementById('txtIdLargo').value;
	anchoTerreno=document.getElementById('txtIdAncho').value;

	largoTerreno=parseInt(largoTerreno);
	anchoTerreno=parseInt(anchoTerreno);

	perimetro=largoTerreno*2 + anchoTerreno*2;

	alambreNecesario=perimetro*3;

	alert("El alambre necesario es " + alambreNecesario);
}
function Circulo () 
{
	let radio;
	let circunferencia;
	let alambreNecesario;
	let pi = Math.PI;		//3.141592653589793


	radio=document.getElementById('txtIdRadio').value;

	radio=parseInt(radio);

	circunferencia = (2*radio) * pi;
	alambreNecesario = circunferencia * 3;

	alert("El alambre necesario es " + alambreNecesario);

}
function Materiales () 
{
	let largoTerreno;
	let anchoTerreno;
	let area;
	let cementoNecesario;
	let calNecesario;
	let mensaje;

	largoTerreno=document.getElementById('txtIdLargo').value;
	anchoTerreno=document.getElementById('txtIdAncho').value;

	largoTerreno=parseInt(largoTerreno);
	anchoTerreno=parseInt(anchoTerreno);

	area = largoTerreno * anchoTerreno;

	cementoNecesario = area * 2
	calNecesario = area * 3

	mensaje = "Se necesitan " + cementoNecesario + " bolsas de cemento ";
	mensaje = mensaje + "y " + calNecesario + " bolsas de cal.";

	alert(mensaje);




}