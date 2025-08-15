#include <stdio.h>

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
void invertir_recursivo(int arr[], int inicio, int fin){
    if (inicio >= fin){
        return ;
    }
    else{
        int aux = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = aux;
    }
    return invertir_recursivo(arr, inicio+1, fin-1);
}

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
    
    invertir_recursivo( arr , inicio, fin);
    // invertir_arreglo(arr, tamaño);

    printf("Arreglo invertido: ");
    imprimir_arreglo(arr, tamaño);

    return 0;
}