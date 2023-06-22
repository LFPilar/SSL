/* Conversion.c
* Test de Prueba de Conversión de Temperatura.
* Leandro F. Pilar - Legajo 105702/9
* 22/06/2023
*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h> // requerido para manejar función abs
#include "Conversion.h"

int main(void) {

double casos[8] = {32, 79, 104, 212, 0, 90, 180, 300}; // de 0 a 3: conversión a Celsius, de 4 a 7: conversión a Farenheit
double resultadosEsperados[8] = {0, 26.111, 40.000, 100.000, 32.000, 194.000, 356.000, 572.000};

for (int a = 0; a<8; a++){
    if (a==0) {
        printf("\n");
        printf("Casos de Conversion de grados F a grados C:\n");
        printf("-------------------------------------------\n\n");        
    }

    if (a==4) {
        printf("\n");
        printf("Casos de Conversion de grados C a grados F:\n");
        printf("-------------------------------------------\n\n");        
    }

    if (a<4) {
        if (resultadosEsperados[a] != abs(resultadosEsperados[a])) {
            // una manera de evaluar conversiones por aproximación de un valor con decimales...
            assert(Celsius(casos[a]) <= resultadosEsperados[a]+0.001); 
            assert(Celsius(casos[a]) >= resultadosEsperados[a]-0.001);
        } else assert(Celsius(casos[a]) == resultadosEsperados[a]); 
    } else {
        if (resultadosEsperados[a] != abs(resultadosEsperados[a])) {
            assert(Farenheit(casos[a]) <= resultadosEsperados[a]+0.001); 
            assert(Farenheit(casos[a]) >= resultadosEsperados[a]-0.001);

        } else assert(Farenheit(casos[a]) == resultadosEsperados[a]); 
    }

    printf ("%.3f %20s %.3f \n", casos[a], " grados representan ", resultadosEsperados[a]); 
    printf ("Calculo verificado.\n\n");
}

return 0;
}
