#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Não mudar, é como se fosse um reset da matriz tabuleiro de fato!
char BASE_REINICIO[3][3]={
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Parte editável do tabuleiro
char tabuleiro[3][3]={
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Jogadores
int p1, p2;


// Protótipos de inicialização
void atualizarJogo();
void resetTabuleiro();
bool marcacao(int linha, int coluna, char jogador);
bool verificacaoVitoria(char vez);

int main(){
    char pecas[2]={'X', 'O'}, escolha_peca, jogador1='\0', jogador2='\0', LoopJogo;
    bool escolhaReinicio = true;

    do
    {
        resetTabuleiro();
        atualizarJogo();

        // Atirbuição depeças aos jogadores
        do{ 
            printf("\nJogador 1 [X ou O]: ");
            scanf(" %c", &escolha_peca);
            if (escolha_peca == 'X' || escolha_peca == 'x') {
                jogador1 = 'X';
                jogador2 = 'O';
            } else if (escolha_peca == 'O' || escolha_peca == 'o') {
                jogador1 = 'O';
                jogador2 = 'X';
            } else {
                printf("Opcao invalida. Tente novamente.\n");
            }
    
        } while (jogador1 == '\0');
    
        int contTurn=0,linha, coluna, ganhador;
        char vez;
        bool loop = true;
    
        // Loop principal do jogo
        while (loop){
    
            // Contador de turnos 
            if (contTurn%2 == 0){
                vez = jogador1;
            }else{
                vez = jogador2;
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
            if (vez == jogador1){
                ganhador = 1;
            }else{
                ganhador = 2;
            }
            
            atualizarJogo();
            
            // Verificação de vitória / empate
            if(verificacaoVitoria(vez)){

                printf("\nParabens jogador %d, voce ganhou com %c.\n", ganhador, vez);
                loop = false;

                if (ganhador == 1){
                    p1++;
                }else{
                    p2++;
                }
                
                atualizarJogo();
                

            }else if (contTurn == 9){
                printf("\nEmpate!\n");
                loop = false;
                
            }
        }
        

        // Escolha de reinicio
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

// Função para reexibir o tabuleiro
void atualizarJogo(){

    // Limpa a tela para manter o jogo claro
    system("cls || clear");

    // Titulo estático do jogo
    printf("\n====JOGO DA VELHA====\n");

    // Tabela de pontos
    printf("\n  1 Jogador: %d   |   2 Jogador: %d\n", p1, p2);

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
bool marcacao(int linha, int coluna, char jogador){

    // Verifica se a posição já está ocupada
    if (tabuleiro[linha][coluna] == ' '){
        tabuleiro[linha][coluna] = jogador;
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
    }
    // Verificação de cada coluna
    for (int j= 0; j < 3; j++){
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