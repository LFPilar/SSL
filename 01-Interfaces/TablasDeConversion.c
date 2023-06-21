/* 
    TablaDeConversion: imprime una Tabla de Conversión de Temperaturas.
    Para hacerlo adecuadamente, depende de dos interfaces, ambas necesarias para que pueda cumplir su objetivo: 
*   Conversion.h -> le indica a este archivo qué pares de temperatura debe imprimir para cada tabla de conversión. 
    Esto significa que TablasDeConversion.c se abstrae del modo en que se calculan los valores.
*   stdio.h -> le indica al compilador que debe incluir info referida al modo en que debe mostrarse en pantalla la info.
* Leandro Pilar - Legajo 105702/9
* 20/06/2023
 */

#include <stdio.h>
#include "Conversion.h"

/* Recordatorio: la diferencia entre las dos formas de la instrucción #include "Conversion.h" y #include <stdio.h> es que la primera busca el archivo ‘Conversion.h’ en el directorio actual antes de buscarlo en los directorios de los archivos de cabeceras del sistema. La instrucción de inclusión #include <... .h> busca entre los archivos de cabeceras del sistema, pero no busca en el directorio actual.*/

int main(void){

 const int MINIMO = 0; // cota inferior de temperaturas
 const int MAXIMO = 300; // cota superior
 const int DELTA = 10; // salto de termperaturas en el rango estudiado

printf("\n\n");
printf("Tabla de Temperaturas: Celsius -> Farenheit                    Tabla de Temperaturas: Farenheit -> Celsius\n");
printf("Grados Centigrados    |   Grados Farenheit                      Grados Farenheit    |    Grados Centigrados\n");
printf("------------------------------------------                      ------------------------------------------- \n");

 for(int temperatura = MINIMO; temperatura <= MAXIMO; temperatura = temperatura + DELTA)
 {
    /* invoca función de conversión de °C a °F*/
    printf("%20d %1s %18.3f", temperatura, " |", Farenheit(temperatura));

    printf("%24s", ""); 

    /* invoca función de conversión de °F a °C*/
    printf("%16d %1s %21.3f\n", temperatura, " |", Celsius(temperatura));
 }

}