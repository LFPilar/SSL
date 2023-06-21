/* Conversion.c
* Funciones de Conversión de Temperatura °F (Farenheit) <-> °C (Celsius)
* Leandro F. Pilar - Legajo 105702/9
* 20/06/2023
*/

#include "Conversion.h"

// Conversión de grados Farenheit a Celsius
double Celsius(double f){
 return (5.0/9.0)*(f-32);
}

// Conversión de grados Celsius a Farenheit
double Farenheit(double c){
 return ((1.8*c)+32);
}
