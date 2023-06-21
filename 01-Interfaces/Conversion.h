/* Conversion.h
* Interfaz vinculante de archivos:
*    Proveedor (Conversion.c, en el que se implementan las funciones de conversión de temperatura) 
*    Consumidores (TablasDeConversion.c, ConversionTest.c, en los que se invocan las funciones de conversión de temperatura)
* Leandro F. Pilar - Legajo 105702/9
* 20/06/2023
*/

#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED

double Celsius(double);

double Farenheit(double);

#endif