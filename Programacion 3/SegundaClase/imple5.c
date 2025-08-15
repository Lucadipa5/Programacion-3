#include <stdio.h>

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
void binario_recursivo(int numero){
    
    if (numero == 0){
        return;
    }
   binario_recursivo(numero / 2);
    printf("%d", numero % 2);
}

int main() {
    int numero = 2;
    printf("El numero %d en binario es: ", numero);
    binario_recursivo(numero);
    return 0;
}