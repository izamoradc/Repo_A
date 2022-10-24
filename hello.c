#include "stdio.h"
#include "stdlib.h"

/*El primer paso es posicionar la ventana de comando en el directorio del archivo a compilar 
El comando para compilar desde la ventana de comando es:
gcc hello.c -o nombre_de_exe_file
Para activar los warnings hay que agregar -Wall al final, ej.
gcc hello.c -o Hello -Wall
Para correr el programa hay que poner el nombre del ejecutable en la ventana de comando*/

int main (void)
{
    printf("Hello World\n");

    return 0;
}