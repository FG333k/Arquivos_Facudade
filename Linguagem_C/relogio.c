#include <stdio.h>
#include <time.h>
#include <unistd.h> // Para sleep()

// Matriz que define os segmentos ativos para cada dígito (0-9)
const int segmentos[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
};

// Função para desenhar um dígito usando 7 segmentos
void desenharDigito(int digito) {
    if (segmentos[digito][0]) printf(" _ \n");
    else printf("   \n");
    
    for (int i = 0; i < 2; i++) {
        if (segmentos[digito][5]) printf("|");
        else printf(" ");
        
        if (segmentos[digito][6]) printf("_");
        else printf(" ");
        
        if (segmentos[digito][1]) printf("|");
        else printf(" ");
        printf("\n");
    }
}

int main() {
    while (1) {
        time_t agora;
        struct tm *info_tempo;
        
        // Obtém o tempo atual
        time(&agora);
        info_tempo = localtime(&agora);
        
        // Limpa a tela (funciona no Windows e Linux)
        system("cls || clear");
        
        printf("\nRelógio Digital:\n\n");
        
        // Desenha horas, minutos e segundos
        desenharDigito(info_tempo->tm_hour / 10);   // Dezena de hora
        desenharDigito(info_tempo->tm_hour % 10);   // Unidade de hora
        
        printf(" ");
        
        desenharDigito(info_tempo->tm_min / 10);    // Dezena de minuto
        desenharDigito(info_tempo->tm_min % 10);    // Unidade de minuto
        
        printf(" ");
        
        desenharDigito(info_tempo->tm_sec / 10);    // Dezena de segundo
        desenharDigito(info_tempo->tm_sec % 10);    // Unidade de segundo
        
        // Atualiza a cada 1 segundo
        sleep(1);
    }
    
    return 0;
}