# Makefile
# Archivo de compilación de múltiples unidades.
# Leandro F. Pilar - Legajo 105702/9
# 20/06/2023


# Makefile permite automatizar un proceso de compilación que, tal como sucede en este caso, involucra a múltiples unidades de compilación.

# Tablas es el archivo ejecutable que interesa generar. Ocupa el lugar de objetivo, también llamado target. Se le indica a Makefile que posee dos dependencias o pre-requisitos: los objetos Conversion.o y TablasDeConversion.o. El comando (o regla) que hace con que a partir de los objetos pueda generarse el ejecutable es "gcc -Wall Conversion.o TablasDeConversion.o -o Tablas".

# No hace falta especificar la interfaz ‘Conversion.h’ porque la instrucción #include "Conversion.h" en los archivos Conversion.c y TablasDeConversion.c le ordenan al compilador que lo incluya automáticamente en donde se requiera.

# De esta manera se evita reescribir comandos/ flags en repetidas líneas. Se citan como $(..) cuando se necesiten:
CC = gcc 
CFLAGS = -Wall

# Genera los dos archivos ejecutables necesarios.
all: Tablas Test 

Tablas: Conversion.o TablasDeConversion.o
	$(CC) $(CFLAGS) Conversion.o TablasDeConversion.o -o Tablas

# Ninguno de los dos objetos existe! Al parecer, no hace falta indicarle a Makefile cuáles son sus respectivas dependencias ni de qué modo deben generarse a partir de los archivos .c. De hecho, no hace falta definir los targets (según se muestra necesario en un ejemplo similar en https://makefiletutorial.com/):

#Conversion.o: Conversion.h Conversion.c
#	gcc -c Conversion.c -o Conversion.o

#TablasDeConversion.o: Conversion.h TablasDeConversion.c 
#	gcc -c TablasDeConversion.c -o TablasDeConversion.o

# No se requieren dado que Makefile se toma el trabajo de correr esos comandos automáticamente, al detectar que para crear Tablas.exe los necesitará. Más aún, y esta es tal vez la mayor ventaja de Makefile: cada vez que deba generarse Tablas.exe, Makefile chequea que no haya habido cambios sobre las dependencias de los targets especificados, esto es, Conversion.c y TablasDeConversion.c. Si detecta cambios en ellos (comparando el timestamp o marca de tiempo de los archivos), vuelve a generar los objetos para que estos cambios se transladen al archivo ejecutable Tablas.exe.

# Se incluye la creación del Test de Conversión, un archivo exe que se crea vía comando por consola make Test -> Test

Test: ConversionTest.o Conversion.o
	$(CC) $(CFLAGS) ConversionTest.o Conversion.o -o Test

# target clean posee regla no reconocida... No borra los archivos
clean:
	rm -f ConversionTest.o Conversion.o Tablas.exe Test.exe

# target borrar posee reglas reconocidas.
borrar:
	del *o
	del *exe