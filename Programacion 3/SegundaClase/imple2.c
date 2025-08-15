#include <stdio.h>
int busqueda_lineal ( int arr [] , int tamaño , int elemento ) {
    for (int i = 0; i < tamaño ; i++) {
        if (arr [i] == elemento ) {
            return i;
            }
        }
        return -1;
        }
int busqueda_recursiva(int arr[], int tamaño, int elemento, int indice){
    if (tamaño != 0){
        if (arr[indice] == elemento){
            return indice;
        }else{
            return busqueda_recursiva(arr, tamaño-1, elemento, indice+1);
        }
    }
    else{
        return -1;
    }
}   


int main () {
int arr [] = {2 , 5 , 8 , 12 , 16 , 23 , 38 , 45 , 67 , 78};
int tamaño = sizeof ( arr ) / sizeof ( arr [0]) ;
int elemento = 23;

int resultado = busqueda_lineal ( arr , tamaño , elemento ) ;
int resultado_recursivo = busqueda_recursiva ( arr , tamaño , elemento , 0 ) ;
//Busqueda Lineal
if ( resultado != -1) {
printf ( " Elemento %d encontrado en posición %d \n " , elemento, resultado ) ;
    } else {
printf ( " Elemento %d no encontrado \n " , elemento ) ;
        }
//Busqueda Recursiva
if ( resultado_recursivo != -1) {
printf ( " Elemento %d encontrado en posición %d \n " , elemento, resultado_recursivo ) ;
    } else {
printf ( " Elemento %d no encontrado \n " , elemento ) ;
        }
    return 0;
}

