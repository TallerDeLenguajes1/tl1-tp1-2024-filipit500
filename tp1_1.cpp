#include <stdio.h>

int main()
{
    int numero = 5;
    int *puntero = &numero;
    printf("contenido del puntero: %p\n", puntero);
    printf("direccion de memoria almacenada en el puntero: %p\n", puntero);
    printf("direccion de memoria de la variable: %p\n", &numero);
    printf("direccion de memoria del puntero: %p\n", &puntero);
    printf("tamaño de memoria de la variable: %d bytes \n", sizeof(numero));
    return 0;
}