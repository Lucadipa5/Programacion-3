#include <stdio.h>

// Función para calcular el MCD de forma iterativa
int mcd_iterativo(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Función para calcular el MCD de forma recursiva
// Caso base: si b es 0, el MCD es a
// Caso recursivo: llamar a la función con (b, a % b)
int mcd_recursivo(int a, int b){
    if (b == 0){ // Caso base
        return a;
    }
    return mcd_recursivo(b, a % b); // Caso recursivo
}

int main() {
    // Pruebas
    int num1 = 48, num2 = 18;
    printf("MCD de %d y %d = %d\n", num1, num2, mcd_iterativo(num1, num2));
    printf("MCD de %d y %d = %d\n", num1, num2, mcd_recursivo(num1, num2));
    return 0;
}