#include <stdio.h>

// Búsqueda lineal iterativa
int busqueda_lineal ( int arr [] , int tamaño , int elemento ) {
    for (int i = 0; i < tamaño ; i++) {
        if (arr [i] == elemento ) {
            return i;
            }
        }
        return -1;
        }

// Búsqueda lineal recursiva
// Caso base: si tamaño es 0, no se encontró el elemento y retorna -1
// Caso recursivo: si el elemento en el índice actual es igual al buscado, retorna el índice
// Si no, llama recursivamente con tamaño-1 e índice+1
int busqueda_recursiva(int arr[], int tamaño, int elemento, int indice){
    if (tamaño != 0){ // Caso base: si tamaño es 0, termina la búsqueda
        if (arr[indice] == elemento){
            return indice;
        }else{
            return busqueda_recursiva(arr, tamaño-1, elemento, indice+1); // Caso recursivo
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
printf( " Elemento %d no encontrado \n " , elemento ) ; 
}
}