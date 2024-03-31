#include <stdio.h>
#include <stdlib.h>

int devolverCuadradoConRetoro(int numero);
void devolverCuadradoSinRetorno(int *numero);
void mostrarVariable(int numero);
void invertir(int *a,int *b);
void orden(int *a,int *b);

int main(){
    int a = 3,b = 5;
    int *puntero1 = (int*)malloc(sizeof(int));
    int *puntero2 = (int*)malloc(sizeof(int));
    puntero1 = &a;
    puntero2 = &b;

    //probamos la funcion a//
    printf("******FUNCION A ******\n");
    a = devolverCuadradoConRetoro(a);
    printf("cuadrado: %d\n",a);
    //probamos la funcion b//
    printf("******FUNCION B ******\n");
    devolverCuadradoSinRetorno(puntero2);
    printf("cuadrado: %d\n",b);
    //probamos la funcion c//
    printf("******FUNCION C ******\n");
    mostrarVariable(a);
    //probamos la funcion d//
    printf("******FUNCION D ******\n");
    invertir(puntero1,puntero2);
    printf("a: %d -- b: %d\n",a,b);
    //probamos la funcion e//
    printf("******FUNCION E ******\n");
    orden(puntero1,puntero2);
    printf("a: %d -- b: %d\n",a,b);
    return 0;
}

int devolverCuadradoConRetoro(int numero)
{
    int retorno;
    retorno = numero * numero;
    return retorno;
}


void devolverCuadradoSinRetorno(int *numero)
{
    int numeroAuxiliar = *numero;
    *numero = numeroAuxiliar * numeroAuxiliar;
}

void mostrarVariable(int numero)
{
    printf("direccion de memoria de la variable: %p\n",&numero);
    printf("contenido de la variable: %d\n",numero);
}

void invertir(int *a,int *b)
{
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

void orden(int *a,int *b)
{
    int auxiliar;
    if(*a > *b){
        auxiliar = *a;
        *a = *b;
        *b = auxiliar;
    }
}
    