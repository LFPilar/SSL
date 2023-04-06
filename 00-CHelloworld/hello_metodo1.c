/* "Hello, world!"
* Al ejecutarse el programa genera un texto con el mensaje "Hello, world!" que se muestra en el archivo otuput.txt.
* Leandro Pilar / Usuario Github: LFPilar
* 02-04-2023
*/

#include <stdio.h>
#include <string.h>

int main(){
   //Código preliminar para cumplimiento de punto 8
   // printf() muestra la cadena de texto entre comillas
   //printf("Hello, World!");
   
   FILE *archivo;
   char mensaje[200];

   strcpy(mensaje,"Hello, world!\n"); // copia el texto deseado en la cadena de chars mensaje p/ adecuada transf a archivo

   archivo = fopen("output1.txt","wb+");
   fputs(mensaje, archivo);
   fclose(archivo);
   return 0;
}