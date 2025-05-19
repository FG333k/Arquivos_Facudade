#include <stdio.h>
#include <math.h>

void desenharCirculoPreenchido(int raio) {
    int diametro = 2 * raio;
    int i, j;
    
    for (i = 0; i <= diametro; i++) {
        for (j = 0; j <= diametro; j++) {
            // Calcula a distância do ponto atual ao centro
            int x = j - raio;
            int y = i - raio;
            double distancia = sqrt(x*x + y*y);
            
            // Verifica se o ponto está dentro do círculo
            if (distancia <= raio + 0.5) {  // +0.5 para suavizar as bordas
                printf("**");  // Usamos dois asteriscos para melhor proporção
            } else {
                printf("  ");  // Dois espaços em branco
            }
        }
        printf("\n");
    }
}

int main() {
    int raio, loop;

    
    do{
        printf("Digite o raio do círculo (3 a 15): ");
        scanf("%d", &raio);
    
        if (raio < 3 || raio > 30) {
            printf("Raio fora do intervalo recomendado.\n");
            return 1;
        }
    
        printf("\nCírculo preenchido com raio %d:\n\n", raio);
        desenharCirculoPreenchido(raio);

        printf("Deseja formar outro circulo?: 1-sim, 2-nao: ");
        scanf("%d", loop);

    } while (loop != 2);
    
    
    return 0;
}