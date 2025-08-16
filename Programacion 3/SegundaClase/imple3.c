#include <stdio.h>

// Función para invertir un arreglo de forma iterativa
void invertir_arreglo(int arr[], int tamaño) {
    int inicio = 0;
    int fin = tamaño - 1;
    while (inicio < fin) {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        inicio++;
        fin--;
    }
}

// Función para invertir un arreglo de forma recursiva
// Caso base: cuando inicio >= fin, no se hace nada (arreglo ya invertido)
// Caso recursivo: intercambiar los elementos en inicio y fin, y llamar a la función con inicio+1 y fin-1
void invertir_recursivo(int arr[], int inicio, int fin){
    if (inicio >= fin){ // Caso base
        return ;
    }
    else{
        int aux = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = aux;
    }
    // Llamada recursiva con los índices avanzados
    return invertir_recursivo(arr, inicio+1, fin-1); // Caso recursivo
}

// Función para imprimir el arreglo
void imprimir_arreglo(int arr[], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int inicio = 0;
    int fin = tamaño - 1;

    printf("Arreglo original: ");
    imprimir_arreglo(arr, tamaño);

    // Prueba de la función recursiva
    invertir_recursivo(arr, inicio, fin);

    //invertir_arreglo(arr, tamaño);

    printf("Arreglo invertido: ");
    imprimir_arreglo(arr, tamaño);

    return 0;
}