// direcciones inválidas

#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int *ptr_int, var;
    
void init_ptr()
{
    int local = 57;
    ptr_int = &local;
}


int main() {
    
    init_ptr();
    var = *ptr_int; //no se debe hacer xd
    *ptr_int = 20;
    
    return 0;
}