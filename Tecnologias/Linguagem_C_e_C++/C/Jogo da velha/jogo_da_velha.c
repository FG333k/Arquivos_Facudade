#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Não mudar, é como se fosse um reset da matriz tabuleiro de fato!
static const char BASE_REINICIO[3][3]={
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Parte editável do tabuleiro
static char tabuleiro[3][3]={
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Jogadores
static int p1, p2;

// Teste
typedef struct{
    int vitorias;
    char peca;
}Jogador;



// Protótipos de inicialização
void atualizarJogo(Jogador jogador1, Jogador jogador2);
void resetTabuleiro();
bool marcacao(int linha, int coluna, char peca);
bool verificacaoVitoria(char vez);

int main(){
    char pecas[2]={'X', 'O'}, escolha_peca,/* jogador1='\0', jogador2='\0',*/ LoopJogo;
    bool escolhaReinicio = true;

    Jogador jogador1;
    jogador1.vitorias = 0;
    jogador1.peca = '\0';

    Jogador jogador2;
    jogador2.vitorias = 0;
    jogador2.peca = '\0';

    do{
        resetTabuleiro();
        atualizarJogo(jogador1, jogador2);

        // Atirbuição depeças aos jogadores
        do{ 
            printf("\nJogador 1 [X ou O]: ");
            scanf(" %c", &escolha_peca);
            if (escolha_peca == 'X' || escolha_peca == 'x') {
                jogador1.peca = 'X';
                jogador2.peca = 'O';
            } else if (escolha_peca == 'O' || escolha_peca == 'o') {
                jogador1.peca = 'O';
                jogador2.peca = 'X';
            } else {
                printf("Opcao invalida. Tente novamente.\n");
            }
    
        } while (jogador1.peca == '\0');
    
        int contTurn=0,linha, coluna, ganhador;
        char vez;
        bool loop = true;
    
        // Loop principal do jogo
        while (loop){
    
            // Contador de turnos 
            if (contTurn%2 == 0){
                vez = jogador1.peca;
            }else{
                vez = jogador2.peca;
            }
            contTurn++;
        
            // Loop para escolha das posições 
            bool loopPosicao = true;
            while(loopPosicao){
    
                printf("Escolha a posicao:\n");
                printf("\nLINHA: ");
                scanf(" %d",&linha);
                printf("\nCOLUNA: ");
                scanf(" %d",&coluna);
    
                // Verificação das posições possiveis do tabuleiro / tratamento de erros
                if (((linha <= 3) && (linha > 0)) || ((coluna <= 3) && (coluna > 0))){
    
                    if(marcacao(linha-1,coluna-1, vez)){
                        loopPosicao = false;
                    }else{
                        printf("\nPosicao invalida, tente novamente.\n");
                    }
                    
                }else{
                    printf("\nPosicao linha/coluna nao existente.\n");
                }
    
            }

            // Identificador do ganhador
            if (vez == jogador1.peca){
                ganhador = 1;
            }else{
                ganhador = 2;
            }
            
            atualizarJogo(jogador1, jogador2);
            
            // Verificação de vitória / empate
            if(verificacaoVitoria(vez)){

                printf("\nParabens jogador %d, voce ganhou com %c.\n", ganhador, vez);
                loop = false;

                if (ganhador == 1){
                    jogador1.vitorias++;
                }else{
                    jogador2.vitorias++;
                }
                
                atualizarJogo(jogador1, jogador2);
                

            }else if (contTurn == 9){
                printf("\nEmpate!\n");
                loop = false;
                
            }
        }
        

        // Escolha de reinicio
        escolhaReinicio = true; // Reset da variavel para evitar erros
        do{
            printf("Deseja recomecar? [S-sim / N-nao]: ");
            scanf(" %c", &LoopJogo);

            // Tratamento de erros
            if (LoopJogo == 'N' || LoopJogo == 'n') {
                return 0;
            } else if (LoopJogo == 'S' || LoopJogo == 's') {
                escolhaReinicio = false;
            } else {
                printf("Opcao invalida. Tente novamente.\n");
            }
            
        } while (escolhaReinicio);
    } while (1);
    
    return 0;
}

// Função para limpar a tela
void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Função para reexibir o tabuleiro
void atualizarJogo(struct Jogador jogador1, struct Jogador jogador2){

    // Limpa a tela para manter o jogo claro
    limparTela();

    // Titulo estático do jogo
    printf("\n====JOGO DA VELHA====\n");

    // Tabela de pontos
    printf("\n  1 Jogador: %d   |   2 Jogador: %d\n", jogador1.vitorias, jogador2.vitorias);

    // Bloco para printar o tabuleiro
    printf("\n");
    printf("\t%d    %d    %d\n\n", 1, 2, 3);
    for (int i=0;i<3;i++){
        printf("    %d   ", i+1);
        for (int j=0;j<3;j++){
            printf("%c", tabuleiro[i][j]);
            
            if (j < 2){
                printf(" || ");
            }
        }
        printf("\n       ");
        if (i < 2){
            printf("=============\n");
        }
    }
    printf("\n");
}

// Função para resetar o tabuleiro do jogo
void resetTabuleiro(){

    // Reset do tabuleiro
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabuleiro[i][j] = BASE_REINICIO[i][j];
        }
    }

}

// Função para a marcação da figura de acordo com o jogador
bool marcacao(int linha, int coluna, char peca){

    // Verifica se a posição já está ocupada
    if (tabuleiro[linha][coluna] == ' '){
        tabuleiro[linha][coluna] = peca;
        return true;
    }
    return false;
    
}

// Função de verificação de vitória / empate entre os jogadores
bool verificacaoVitoria(char vez){

    // Verificação de cada linha 
    for (int i= 0; i < 3; i++){
        if ((tabuleiro[i][0] == vez) && (tabuleiro[i][1] == vez) && (tabuleiro[i][2] == vez)){
            return true;
        }
        if ((tabuleiro[0][j] == vez) && (tabuleiro[1][j] == vez) && (tabuleiro[2][j] == vez)){
            return true;
        }
    }
    
    
    // Verifição de diagonais
    if ((tabuleiro[0][0] == vez) && (tabuleiro[1][1] == vez) && (tabuleiro[2][2] == vez)){
        return true;
    }
    if ((tabuleiro[0][2] == vez) && (tabuleiro[1][1] == vez) && (tabuleiro[2][0] == vez)){
        return true;
    }

    return false;
}