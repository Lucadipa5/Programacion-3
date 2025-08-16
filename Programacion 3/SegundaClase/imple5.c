#include <stdio.h>

// Conversión decimal a binario de forma iterativa
void decimal_a_binario(int numero) {
    if (numero == 0) {
        printf("0\n");
        return;
    }

    int binario[32];
    int i = 0;

    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

// Conversión decimal a binario de forma recursiva
// Caso base: si numero == 0, termina
// Caso recursivo: llama a la función con numero / 2 y luego imprime numero % 2
void binario_recursivo(int numero){
    if (numero == 0){ // Caso base
        return;
       
    }
    binario_recursivo(numero / 2); // Caso recursivo
    printf("%d", numero % 2);
}

int main() {
    int numero = 25;
    printf("El numero %d en binario es: ", numero);

    decimal_a_binario(numero);
    binario_recursivo(numero);
}