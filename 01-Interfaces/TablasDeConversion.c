/* 
    TablaDeConversion: imprime una Tabla de Conversión de Temperaturas.
    Para hacerlo adecuadamente, depende de dos interfaces, ambas necesarias para que pueda cumplir su objetivo: 
*   Conversion.h -> le indica a este archivo qué pares de temperatura debe imprimir para cada tabla de conversión. 
    Esto significa que TablasDeConversion.c se abstrae del modo en que se calculan los valores.
*   stdio.h -> le indica al compilador que debe incluir info referida al modo en que debe mostrarse en pantalla la info.

* Comentarios adicionales: se trabaja sobre los objetivos fijados en Créditos Extra: 

   Desarrollar la función PrintFilas para que sea genérica, es decir, pueda invocarse desde PrintTablaFahrenheit y desde PrintTablaCelsius. PrintFilas debe invocar a PrintFila. Considere el uso de punteros a función.""

Sobre esto, vale decir que esta consigna se considera lo suficientemente abierta como para que sean admitidas varias posibles implementaciones. En este sentido, el desdoblamiento de una función de impresión (tal como se había considerado en el primer commit) en varias funciones que trabajan en cascada, solo responde a lo que se interpretó de dicho requerimiento. No obstante, no es una opción que personalmente habría preferido, porque complejiza la estructura del programa sin ofrecer mayores beneficios, al menos en la órbita de lo que se interpretó en el pedido.

* Leandro Pilar - Legajo 105702/9
* 22/06/2023
 */

#include <stdio.h>
#include "Conversion.h"
#include <stdbool.h>

/* Recordatorio: la diferencia entre las dos formas de la instrucción #include "Conversion.h" y #include <stdio.h> es que la primera busca el archivo ‘Conversion.h’ en el directorio actual antes de buscarlo en los directorios de los archivos de cabeceras del sistema. La instrucción de inclusión #include <... .h> busca entre los archivos de cabeceras del sistema, pero no busca en el directorio actual.*/

//-----------------------------------------------------------------------------------------------
//Funciones de Impresión de Tablas

void PrintEncabezado()
{
   printf("\n\n");
   printf("Tabla de Temperaturas: Celsius -> Farenheit                    Tabla de Temperaturas: Farenheit -> Celsius\n");
   printf("Grados Centigrados    |   Grados Farenheit                      Grados Farenheit    |    Grados Centigrados\n");
   printf("------------------------------------------                      ------------------------------------------- \n");   
}

void PrintFila (int nroTabla){
   if (nroTabla ==1)
   printf("%24s", ""); // separador de tablas
   else
   printf("------------------------------------------                      ------------------------------------------- \n");
}

void PrintFilas (int nroTabla, double *temperatura) {
if (nroTabla ==1) {
   printf("%20.3f %1s %18.3f", *temperatura, " |", Farenheit(*temperatura)); // invoca función de conversión de °C a °F
} else {
   printf("%16.3f %1s %21.3f\n", *temperatura, " |", Celsius(*temperatura)); // invoca función de conversión de °F a °C  
}
   PrintFila(nroTabla);
}

void PrintTablaCelsius (double *temperatura) {
   PrintFilas(1, temperatura);
 }

void PrintTablaFarenheit (double *temperatura) {
   PrintFilas(2, temperatura);
}


void PrintTablas (double *pminimo, double *pmaximo, double *pdelta) {
PrintEncabezado();
   for(double temperatura = *pminimo; temperatura <= *pmaximo; temperatura = temperatura + *pdelta)
 { 
   PrintTablaCelsius(&temperatura);
   PrintTablaFarenheit(&temperatura);
 }
}

//---------------------------------------------------------------------------------

int main(void){

double minimo, maximo, delta, ip;

printf("Limite Inferior: ");
scanf("%lf", &ip); // cota inferior de temperaturas
minimo = ip;

do {
   printf("\nLimite Superior: ");
   scanf("%lf", &ip); // cota superior
   maximo = ip;
   if (maximo < minimo) printf("Cota superior debe ser mayor a la cota inferior...\n");
   
} while (maximo < minimo);

do {
   printf("\nDelta: ");
   scanf("%lf", &ip); // salto de temperaturas en el rango estudiado
   delta = ip;
   if (delta > (maximo - minimo)) printf("Valor del delta debe ser inferior al rango de cotas...\n");
} while (delta > (maximo - minimo));

PrintTablas (&minimo, &maximo, &delta);

printf("\nComandos p/ correr el Test de Calculo: 1) make Test 2) Test.\n");
printf("Comando p/ borrar archivos intermedios y ejecutables: make borrar.\n");

}



