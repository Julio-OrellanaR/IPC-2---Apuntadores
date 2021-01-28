// Apuntadores a apuntadores

#include <stdio.h>

//Referenciacion: es la obtencion de la direccion de una variable

int main() {
    
    char c = 'z';
    char *pc = &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    ***pppc = 'm'; //cambie el valor de c='z' a 'm'
    
    printf("el valor del ultimo apuntador es: %c", ***pppc);
    return 0;
}
  