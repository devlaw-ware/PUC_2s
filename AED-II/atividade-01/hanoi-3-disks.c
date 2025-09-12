
// aqui coloquei no problema pra testar com 3 discos! 

#include <stdio.h>

void torre_de_hanoi(int n_discos, char pino_origem, char pino_destino, char pino_auxiliar) {
    if (n_discos == 1) {
        // Se só tem 1 disco, move direto
        printf("Mover disco 1 de %c para %c\n", pino_origem, pino_destino);
        return;
    }
    torre_de_hanoi(n_discos - 1, pino_origem, pino_auxiliar, pino_destino);
    printf("Mover disco %d de %c para %c\n", n_discos, pino_origem, pino_destino);
    torre_de_hanoi(n_discos - 1, pino_auxiliar, pino_destino, pino_origem);
}

int main() {
    torre_de_hanoi(3, 'A', 'C', 'B');
    return 0;
}