#include <stdio.h>

int mcd_iterativo(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mcd_recursivo(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        int temp = b;
        b = a % b;
        a = temp;
    }
    mcd_recursivo( a, b);
}

int main() {
    int num1 = 48, num2 = 18;
    printf("MCD de %d y %d = %d\n", num1, num2, mcd_iterativo(num1, num2));
    printf("MCD de %d y %d = %d\n", num1, num2, mcd_recursivo(num1, num2));
    return 0;
}