/*
 * funciones.h
 *
 *  Created on: 30 mar. 2022
 *      Author: insua
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// \brief Valida si la temperatura esta entre el punto de congelación y ebullición del agua
/// \param float, char, Un flotante para la temperatura y un caracter que indica f[fahrenheit] o c[celsius]
/// \return float, retorna una temperatura dentro del margen
float ValidacionTemperatura(float,char);

/// \brief Pasa de Celsius a Fahrenhheit o de Fahrenheit a Celsius
/// \param float, char, Un flotante para la temperatura y un caracter que indica f[fahrenheit] o c[celsius]
/// \return float, retorna el pasaje de temperatura
float PasajeDeTemperatura (float,char);


#endif /* FUNCIONES_H_ */
