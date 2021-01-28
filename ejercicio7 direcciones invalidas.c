// direcciones inválidas

#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int main() {
    
    float *ptr_float;
    
    printf("El valor apuntado por ptr_float es %f ", *ptr_float);//no tiene direccion de memoria asignada
    
    *ptr_float = 10.5;
    
    return 0;
}