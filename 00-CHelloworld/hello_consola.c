/* "Hello, world!"
    Al ejecutarse el programa:
    1) se muestra el mensaje "Hello, world!" en la consola (requerimiento punto 8).
    2) se genera el archivo output.txt en la misma carpeta que el ejecutable, se guarda el mismo mensaje (requerimiento punto 9).
    
    Autor
    Leandro Pilar / Usuario Github: LFPilar
    
    Últimas modificaciones
    05-04-2023
*/

#include <stdio.h>

int main(){
   /*Código para cumplimiento de punto 8
     printf() muestra la cadena de texto entre comillas sobre consola
   */
   printf("Hello, World!");

   /*Código para cumplimiento de lo solicitado en punto 9.
     Generación de archivo output.txt con la frase "Hello, world!" 
   */

   int c = 0;
   FILE *archivo;
   char mensaje[] = "Hello, world!\n";

   archivo = fopen("output.txt","wb+"); //si había una copia del archivo otuput.txt, se elimina y se crea una nueva
   
   while (mensaje[c]!='\0') { fputc(mensaje[c], archivo); c++; }
   fclose(archivo);
   return 0;

}