
#include <stdio.h>

int main()
{
    //declaramos una variable de tipo entero//
    int n = 10;
    //declaramos un puntero que apunta a una variable de tipo entero//
    int *p_n = &n;
    //mostramos el contenido del puntero//
    printf("contenido del puntero: %p\n",p_n);
    //mostramos la direccion de memoria almacenada en el puntero//
    printf("direccion de memoria almacenada en el puntero: %p\n",p_n);
    //mostramos la direccion de memoria de la variable//
    printf("direccion de memoria de la variable: %p\n",&n);
    //mostramos la direccion de memoria del puntero//
    printf("direccion de memoria del puntero: %p\n",&p_n);
    //mostramos el tamaño de memoria utilizado por la variable//
    printf("tamaño de memoria utilizado por la variable: %d\n",sizeof(n));
    return 0;
}