//--------------------Desreferenciacion de apuntadores--------------

#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int main() {
    int x = 33, y;
    int *p; //se le asigna la direccion de x a p
    p = &x;
    //asignacion del apuntador
    printf("El valor de p es %d \n", *p);
    y = *p + 10;
    printf("EL valor de y es %d ", y);
    return 0;
}