#include <stdio.h>
#include <time.h> // Para funções de tempo 
#include <unistd.h> // Para sleep()
#include <stdlib.h> // Para system() limpar tela

/*  Matriz para representar os digitos de 0 - 9
    Cada linha representa um digito indicando qual
    segmento está ativo para validação do caracter
    a ser printado no console.  */
const int segments[10][7] = {
   //a,b,c,d,e,f,g                      LOCALIZAÇÃO DOS SEGMENTOS
   //| | | | | | |                       _____a_____    1=ativo   
    {1,1,1,1,1,1,0}, // 0                |         |    0=desativo
    {0,1,1,0,0,0,0}, // 1                |         |
    {1,1,0,1,1,0,1}, // 2                f         b
    {1,1,1,1,0,0,1}, // 3                |         |
    {0,1,1,0,0,1,1}, // 4                |____g____|
    {1,0,1,1,0,1,1}, // 5                |         |
    {1,0,1,1,1,1,1}, // 6                |         |
    {1,1,1,0,0,0,0}, // 7                e         c
    {1,1,1,1,1,1,1}, // 8                |         |
    {1,1,1,1,0,1,1}  // 9                |____d____|
};

void printDigitosLinha(int digitos[], int linha);

int main() {

    // loop contnuo para atualização do relógio
    while (1) {

        // Obtem a hora atual e o sistema converte par a estrutura tm
        time_t now;
        struct tm *timeinfo;
        time(&now);
        timeinfo = localtime(&now);
        
        // Limpa o terminal 
        system("cls || clear");

        printf("\n  Relogio Digital:\n\n");
        
        // Prepara os digitos separando cada componete em digitos individuais
        int digitos[6] = {
            timeinfo->tm_hour / 10,
            timeinfo->tm_hour % 10,
            timeinfo->tm_min / 10,
            timeinfo->tm_min % 10,
            timeinfo->tm_sec / 10,
            timeinfo->tm_sec % 10
        };
        
        // Imprime todas a 5 linhas que compõem o display
        for (int linha = 0; linha < 5; linha++) {
            printDigitosLinha(digitos, linha);
        }
        
        // Pausa o programa por 1 segundo antes de atualizar novamente
        sleep(1);
    }
    return 0;
}

// Função para exibir uma linha com todos os 6 digitos (HH:MM:SS)
void printDigitosLinha(int digitos[], int linha) {

    // Percorre cada digito 
    for (int i = 0; i < 6; i++) {
        int d = digitos[i];
        
        // Bloco de verificção de segmentos (1=ativo, 0=desativo)
        if (linha == 0) { // Segmento a (topo)
            printf(" %c ", segments[d][0] ? '_' : ' ');
        }
        else if (linha == 1) { // Parte superior (f + espaço + b)
            printf("%c %c", 
                   segments[d][5] ? '|' : ' ',
                   segments[d][1] ? '|' : ' ');
        }
        else if (linha == 2) { // Segmento g (central)
            printf(" %c ", (segments[d][6]) ? '_' : ' ');
        }
        else if (linha == 3) { // Parte inferior (e + espaço + c)
            printf("%c %c",
                   segments[d][4] ? '|' : ' ',
                   segments[d][2] ? '|' : ' ');
        }
        else if (linha == 4) { // Segmento d (base)
            printf(" %c ", segments[d][3] ? '_' : ' ');
        }

        // Insere espaçamento entre os digitos para os ":" 
        if (i == 1 || i == 3) printf("   "); 
        else printf(" ");
    }
    printf("\n");
}