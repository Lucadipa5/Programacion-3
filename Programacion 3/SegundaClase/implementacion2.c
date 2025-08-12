#include <stdio.h>

int busqueda_lineal(int arr[], int tamaño, int elemento) {
    for (int i = 0; i < tamaño; i++) {
       if (arr[i] == elemento) {
             return i;
        }
    }
        return-1;
    }
//  Pista: El parámetro indice representa la posición actual en el arreglo.
int busqueda_lineal_recursiva(int arr[], int tamaño, int elemento) {
   if (tamaño == 0) {//caso base
        return -1;
    }
     if (arr[tamaño - 1] == elemento) {
        return tamaño - 1;
    }
    return busqueda_lineal_recursiva(arr, tamaño - 1, elemento);
}
int main() {
int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 78};
int tamaño = sizeof(arr) / sizeof(arr[0]);
int elemento = 23;

int resultado = busqueda_lineal_recursiva(arr, tamaño, elemento);
if (resultado !=-1) {
printf("Elemento %d encontrado en posici n %d\n", elemento, resultado);
} else {
printf("Elemento %d no encontrado\n", elemento);
}
return 0;
int resultadox = busqueda_lineal(arr, tamaño, elemento);
if (resultadox !=-1) {
printf("Elemento %d encontrado en posici n %d\n", elemento, resultadox);
} else {
printf("Elemento %d no encontrado\n", elemento);
}
return 0;
}