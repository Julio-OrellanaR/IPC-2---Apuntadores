//verificacion de tipos de apuntadores

#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int main() {
    
    int *ptr_int;
    float *ptr_float;
    
    int value;
    ptr_int = &value;
    ptr_float = &value; //asignacion incompatible, porque ptr_float es un float y value es un, su memoria es distinta por eso no son compatibles
    
    return 0;
}