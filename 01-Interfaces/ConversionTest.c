/* Conversion.c
* Test de Prueba de Conversión de Temperatura.
* Leandro F. Pilar - Legajo 105702/9
* 20/06/2023
*/

#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main(void) {

/* Algunos casos de conversión de temperaturas °F -> °C: */
printf("\n\n");
printf("Casos de Conversion de F a C:\n");
printf("-------------------------------\n\n");

printf ("32 F representan 0.000 C:\n"); 
assert(Celsius(32) == 0); 
printf ("Calculo verificado.\n\n");

// una manera de evaluar conversiones por aproximación de un valor con decimales...
printf ("79 F representan 26.111 C:\n"); 
assert(Celsius(79) <= 26.112); 
assert(Celsius(79) >= 26.110); 
printf ("Calculo verificado.\n\n");

printf ("104 F representan 40.000 C:\n"); 
assert(Celsius(104) == 40); 
printf ("Calculo verificado.\n\n");

printf ("212 F representan 100.000 C:\n"); 
assert(Celsius(212) == 100); 
printf ("Calculo verificado.\n");


/* Algunos casos de conversión de temperaturas °C -> °F: */
printf("\n\n");
printf("Casos de Conversion de C a F:\n");
printf("-------------------------------\n\n");

printf ("0 C representan 32.000 F:\n"); 
assert(Farenheit(0) == 32.0);
printf ("Calculo verificado.\n\n");

printf ("90.0 C representan 194.000 F:\n"); 
assert(Farenheit(90.0) == 194);
printf ("Calculo verificado.\n\n");

printf ("180 C representan 356.000 F:\n"); 
assert(Farenheit(180) == 356);
printf ("Calculo verificado.\n\n");

printf ("300 C representan 572.000 F:\n"); 
assert(Farenheit(300) == 572);
printf ("Calculo verificado.\n\n");

 return 0;
}
