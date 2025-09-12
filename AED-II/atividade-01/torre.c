


#include <stdio.h>

void torre_de_hanoi(int n_discos, char pino_origem, char pino_destino, char pino_auxiliar) {
    if (n_discos == 1) {
        // Só tem um disco, então move direto
        printf("Mover disco 1 de %c para %c\n", pino_origem, pino_destino);
        return;
    }
    // Move os n-1 discos pra torre auxiliar
    torre_de_hanoi(n_discos - 1, pino_origem, pino_auxiliar, pino_destino);
    // Move o disco maior pro destino
    printf("Mover disco %d de %c para %c\n", n_discos, pino_origem, pino_destino);
    // Move os discos da auxiliar pro destino
    torre_de_hanoi(n_discos - 1, pino_auxiliar, pino_destino, pino_origem);
}

int main() {
    int n = 3; // Testa com 3 discos
    torre_de_hanoi(n, 'A', 'C', 'B'); // A é origem, C destino, B auxiliar
    return 0;
} /* torre de hanoi eu nao sei muito como funciona e frita bastante a cabeça hahahha, 
então nao sei se está certo e tive bastante dificuldade. Nesse codigo eu coloquei n no main pra testar com diferentes numeros
*/


