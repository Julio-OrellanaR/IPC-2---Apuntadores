//desreferenciacion de apuntadores


#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int main() {
    
    struct Articulo
    {
        char nombre[20];//longitud de 20
        char descripcion[100];
        float precio;
    };
    
    struct Articulo art;
    struct Articulo *ptr_art = &art;
    
    (*ptr_art).precio = 50.38;
    ptr_art -> precio = 50.38;
    
    printf("Precio del articulo: %f", ptr_art -> precio);
    
    return 0;
}