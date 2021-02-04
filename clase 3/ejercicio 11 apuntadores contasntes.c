#include <stdio.h>

int main() {
    int v = 18, w = 21;
    const int *ptr = &v;
    ptr = &w;
    //*ptr = 16;  //error esto no se puede hacer
    w = 3;  //esto si se puede porque w no es una constante
    return 0;
}