// Atividade 01 - send canvas 


#include <stdio.h>

int mdc(int a, int b) {
    // Caso base: quando b é 0, retorna a mdc que foi encontrado 
    if (b == 0) {
        return a;
    }
    // aqui a gente faz a chamada da função recursiva 
    return mdc(b, a % b);
}

int main() {
    // aqui fazemos o testes
    printf("MDC(50, 15) = %d\n", mdc(50, 15));  // Esperado: 5
    printf("MDC(48, 18) = %d\n", mdc(48, 18));  // Esperado: 6
    printf("MDC(101, 13) = %d\n", mdc(101, 13)); // Esperado: 1

    return 0;
}