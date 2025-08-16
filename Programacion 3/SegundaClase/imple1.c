#include <stdio.h>
    int suma_iterativa (int n ) {
        int suma = 0;
        for (int i = 1; i <= n ; i ++) {
        suma += i ;
        }
        return suma ;
        }
    // Suma recursiva de 1 a n
    // Caso base: si n <= 0, retorna 0
    // Caso recursivo: suma n y llama a la función con n-1
    int suma_recursiva(int n){
        if (n <= 0){//caso base
            return 0;
        }
        return n + suma_recursiva(n-1); // caso recursivo
        }

    int main () {
        int n = 5;
        printf ( " Suma de 1 a %d = %d\n" , n , suma_iterativa(n)) ;
        printf ( " Suma de 1 a %d = %d\n" , n , suma_recursiva(n));
        return 0;
    }