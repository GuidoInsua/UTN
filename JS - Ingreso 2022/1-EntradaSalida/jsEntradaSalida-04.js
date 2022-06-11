/* 
Debemos lograr tomar un dato por 'PROMPT' 
y lo muestro por 'ID' al presionar el botón 'mostrar'
*/
function mostrar()
{
	let nombreIngresado;
	nombreIngresado=prompt("Ingresa tu nombre");
	document.getElementById('txtIdNombre').value="Tu nombre es " + nombreIngresado;

	/*
	SALIDA:
	alert()
	alert("literal")
	alert(variable)
	alert("literal" + variable)
	
	document.getElementById('txtIdNombre').value=variable;
	document.getElementById('txtIdNombre').value="literal";

	
	ENTRADA:
	prompt()
	variable=prompt("mensaje" , "valor por defecto")
	variable=prompt("mensaje")

	variable=document.getElementById('txtIdNombre').value;
	*/


}


