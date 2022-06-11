function mostrar()
{

	let inicio = 1;
	let fin = 10;
	let notaAleatoria;

	notaAleatoria = inicio + Math.floor(Math.random() * fin);

	alert("Su nota es " + notaAleatoria);

	if (notaAleatoria == 9 || notaAleatoria == 10) 
	{
		alert ("EXCELENTE");
	}
	else
	{
		if(notaAleatoria > 3)
		{
			alert("APROBO");
		}

		else
		{
			alert("Vamos, la proxima se puede");
		}
	}

}//FIN DE LA FUNCIÓN