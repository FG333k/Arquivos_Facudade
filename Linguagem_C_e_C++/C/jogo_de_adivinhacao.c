#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite, tentativas = 0;

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));
    numero_secreto = rand() % 100 + 1; // Gera um número entre 1 e 100

    printf("### Jogo de Adivinhacao ###\n");
    printf("Tente adivinhar o numero secreto (entre 1 e 100)\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numero_secreto) {
            printf("Muito alto! Tente um numero menor.\n");
        } else if (palpite < numero_secreto) {
            printf("Muito baixo! Tente um numero maior.\n");
        } else {
            printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
        }
    } while (palpite != numero_secreto);

    return 0;
}
