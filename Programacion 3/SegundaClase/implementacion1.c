#include <stdio.h>
int suma_iterativa(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
            }
    return suma;
}

int suma_recursiva(int n) {
 if (n <= 1) {
    return 1;
    }
else {
    return n + suma_recursiva(n-1);
    }
}
int main() {
int n = 5;
printf("Suma de 1 a %d %d\n", n, suma_iterativa(n));
printf("Suma de 1 a %d %d\n", n, suma_recursiva(n));
return 0;
}