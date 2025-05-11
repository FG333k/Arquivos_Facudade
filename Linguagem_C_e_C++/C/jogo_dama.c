#include <stdio.h>
#include <locale.h>

void exibir_tabuleiro(){
    setlocale(LC_ALL, "");

    // Tabuleiro jogavel
    char bloco = '\u2588';
    char tabuleiro[8][8] = {
                        {bloco,'  ',bloco,'  ',bloco,'  ',bloco,'  '},
                        {'  ',bloco,'  ',bloco,'  ',bloco,'  ',bloco},
                        {bloco,'  ',bloco,'  ',bloco,'  ',bloco,'  '},
                        {'  ',bloco,'  ',bloco,'  ',bloco,'  ',bloco},
                        {bloco,' ' ,bloco,'  ',bloco,' ' ,bloco,' ' },
                        {'  ',bloco,'  ',bloco,'  ',bloco,'  ',bloco},
                        {bloco,'  ',bloco,'  ',bloco,'  ',bloco,'  '},
                        {'  ',bloco,'  ',bloco,'  ',bloco,'  ',bloco}
    };
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main(){
    exibir_tabuleiro();
    printf("\n\n \u2588");
    return 0;
}