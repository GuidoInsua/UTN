function mostrar()
{

	let continuar;
	let nombre;
	let edad;
	let sexo;
	let nota;
	let cantidadVaronesAprobados;
	let contadorMasculino;
	let notasMasculino;
	let contadorFemenino;
	let notasFemenino;
	let contadorMenores;
	let notasMenores;
	let contadorAdolecentes;
	let notasAdolecentes;
	let contadorMayores;
	let notasMayores;
	let promedioMenores;
	let promedioAdolecentes;
	let promedioMayores;
	let promedioMasculino;
	let promedioFemenino;

	continuar="si";
	cantidadVaronesAprobados=0;
	contadorMasculino=0;
	notasMasculino=0;
	contadorFemenino=0;
	notasFemenino=0;
	contadorMenores=0;
	notasMenores=0;
	contadorAdolecentes=0;
	notasAdolecentes=0;
	contadorMayores=0;
	notasMayores=0;
	promedioMenores=0;
	promedioAdolecentes=0;
	promedioMayores=0;
	promedioMasculino=0;
	promedioFemenino=0;

	while(continuar == "si")
	{
		nombre=prompt("Ingrese el nombre del estudiante");

		edad=prompt("Ingrese la edad del estudiante");
		edad=parseInt(edad);

		while(edad < 1 || edad > 100) 
		{
			edad=prompt("ERROR, ingrese una edad valida");  
			edad=parseInt(edad);
		}

		sexo=prompt("Ingrese el sexo (-masculino-femenino-)");

		while(sexo != "masculino" && sexo != "femenino")
		{
			sexo=prompt("ERROR, ingrese un sexo valido");
		}

		nota=prompt("Ingrese la nota de 0 a 10");
		nota=parseInt(nota);

		while(nota < 0 || nota > 10)
		{
			nota=prompt("ERROR, ingrese una nota valida");
			nota=parseInt(nota);
		}

		if (sexo == "masculino" && nota > 3 ) 
		{
			cantidadVaronesAprobados = cantidadVaronesAprobados + 1;
		}

		if (sexo == "masculino") 
		{
			contadorMasculino = contadorMasculino + 1;

			notasMasculino = notasMasculino + nota;  
		}

		else
		{
			contadorFemenino = contadorFemenino + 1;

			notasFemenino = notasFemenino + nota;
		}

		if (edad < 13) 
		{
			contadorMenores = contadorMenores + 1;

			notasMenores = notasMenores + nota;
		}

		else
		{
			if (edad < 18) 
			{
				contadorAdolecentes = contadorAdolecentes + 1;

				notasAdolecentes = notasAdolecentes + nota;
			}

			else
			{
				contadorMayores = contadorMayores + 1;

				notasMayores = notasMayores + nota;
			}
		}

		continuar=prompt("Quiere ingresar otro?");
	}

	document.write(notasMenores);
/*
	//A

	alert("la cantidad de varones aprobados es " + cantidadVaronesAprobados);

	//B

	promedioMenores = notasMenores / contadorMenores;

	alert("El promedio de los menores es " + promedioMenores);

	//C

	promedioAdolecentes = notasAdolecentes / contadorAdolecentes;

	alert("El promedio de los notasAdolecentes es " + promedioAdolecentes);

	//D

	promedioMayores = notasMayores / contadorMayores;

	alert("El promedio de los mayores es " + promedioMayores);

	//F

	promedioMasculino = notasMasculino / contadorMasculino;

	alert("El promedio de los masculino es " + promedioMasculino);

	promedioFemenino = notasFemenino / contadorFemenino;

	alert("El promedio de los femenino es " + promedioFemenino);*/


}
