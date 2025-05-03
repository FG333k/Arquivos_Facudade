#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Parte editável do tabuleiro
char tabuleiro[3][3]={{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

// Não mudar é como se fosse um reset da matriz tabuleiro de fato!
char BASE_REINICIO[3][3]={{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

// Protótipos
void atualizarJogo();
bool marcacao(int linha, int coluna, char jogador);
bool verificacaoVitoria();

int main(){
    char pecas[2]={'X', 'O'}, escolha_peca, jogador1='\0', jogador2='\0';

    atualizarJogo();

    // Atirbuição depeças aos jogadores
    do{ 
        printf("\nJogador 1 [X ou O]: ");
        scanf(" %c", &escolha_peca);
        if ((escolha_peca != 'x') && (escolha_peca != 'o') && (escolha_peca != 'X') && (escolha_peca != 'O')){
            
            printf("\nDigite uma opção válida.");
            escolha_peca = 'n';
        }

        switch (escolha_peca){

            case 'x':
            case 'X':
                jogador1 = pecas[0];
                jogador2 = pecas[1];
                break;

            case 'o':
            case 'O':
                jogador1 = pecas[1];
                jogador2 = pecas[0];
                break;
                
            default:
                printf("\nEscolha uma opção válida: ");
                break;
        }

    } while ((escolha_peca != 'x') && (escolha_peca != 'o') && (escolha_peca != 'X') && (escolha_peca != 'O'));

    int contTurn=0,linha, coluna;
    char vez;
    bool loop = true, loopPosicao = true;

    while (loop == true){
        contTurn++;
        if (contTurn%2 == 0){
            vez = jogador1;
        }else{
            vez = jogador2;
        }
    
        while(loopPosicao == true){

            printf("Escolha a posição:\n");
            printf("\nLINHA: ");
            scanf(" %d",&linha);
            printf("\nCOLUNA: ");
            scanf(" %d",&coluna);

            if (((linha <= 3) && (linha > 0)) || ((coluna <= 3) && (coluna > 0))){

                if(marcacao(linha-1,coluna-1, vez)){
                    loopPosicao = false
                }else{
                    printf("Posição invalida, tente novamente.\n");
                }
                
            }else{

                printf("\nPosição linha/coluna não existente.\n");
            }

            system("cls || clear");
            atualizarJogo();
        }

        // Implementar parada de execução!!!
        if(verificacaoVitoria() == true){
            loop = false
        }

    }

    // Pergunta de reiniciação e talvez contagerm de pontos 
    
    return 0;
}

// Função para reexibir o tabuleiro
void atualizarJogo(){
    int contl, contc;

    // Titulo estático do jogo
    printf("====JOGO DA VELHA====\n");

    // Bloco para printar o tabuleiro
    printf("\n\n\n");
    for (contl=0;contl<3;contl++){
        printf("\t");
        for (contc=0;contc<3;contc++){
            printf("%c", tabuleiro[contl][contc]);
            
            if (contc < 2){
                printf(" || ");
            }
        }
        printf("\n\t");

        if (contl < 2){
            printf("===========\n");
        }
    }
}

// Função para a marcação da figura de acordo com o jogador
bool marcacao(int linha, int coluna, char jogador){

    if (tabuleiro[linha][coluna] == ' '){
        tabuleiro[linha][coluna] = jogador;
        return true
    }else{
        return false
    }
}

// Função de verificação de vitória ou em pate entre os jogadores
bool verificacaoVitoria(){


}