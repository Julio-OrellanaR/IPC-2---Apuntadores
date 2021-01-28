// Apuntadores constantes y apuntador a constantes

#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int main() {
    
    int a = 10, b = 15;
    
    int *const ptr = &a;
    *ptr = 3;
    ptr = &b; //por ser constante no permite hacer el cambio, esto tirara error
    
    return 0;
}