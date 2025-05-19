#include <stdio.h>

//Acessando, editando e lendo arquivos com C

int main(){

    // Ponteiropara acessr o arquivo
    FILE *ftxt;

    // Editar o arquivo (apagando o conteudo existente) / criar
    ftxt = fopen("teste.txt", "w"); // Acessa o local do arquivo e edita com "w", se não existir, cria
    printf("Arquivo criaado\n\n"); // Debug
    fprintf(ftxt, "Arquivo reeditado+++++"); // Conteudo a ser adcionado / substituindo
    printf("Arquivo editado\n\n"); // Debug
    fclose(ftxt); // Fecha o arquivo


    // Editar o arquivo (adicionanado ao conteudo existente) / criar
    ftxt = fopen("teste.txt", "a");// Acessa o local do arquivo e edita com "a", se não existir, cria
    printf("Arquivo acessado\n\n"); // Debug
    fprintf(ftxt, "\n\nArquivo com conteudo adicionado"); // Conteudo a ser adcionado (sem apagar o existente)
    printf("Arquivo editado\n\n"); // Debug
    fclose(ftxt); // Fecha o arquivo


    // Lendo o arquivo (NÂO CRIA)
    ftxt = fopen("teste.txt", "r");// Acessa o local do arquivo e edita com "w", se não existir, retorna NULL
    char texto[100]; // Cria um array para receber o conteudo do arquivo (tamanho que possa caber todo o contetudo)

    // Laço de repetição por que a função fgets() só lê uma linha por vez
    while(fgets(texto, 100, ftxt)){ // Função fgets() recebe os paramentros: nome do array=texto, tamanho maximo=100, nome do arquivo=ftxt

        printf("%s", texto); // Exibe o conteudo lido do arquivo
    }
    fclose(ftxt); // Fecha o arquivo

    // Boas práticas ---
    ftxt = fopen("teste.txt", "r");// Acessa o local do arquivo e edita com "w", se não existir, retorna NULL
    char texto[100]; // Cria um array para receber o conteudo do arquivo (tamanho que possa caber todo o contetudo)

    // --- Usar uma verificação caso o arquivo não exista:
    if((fgets(texto, 100, ftxt)) == NULL){
        printf("O arquivo não existe ou não está com o endereço correto");
    }else{
        while(fgets(texto, 100, ftxt)){ // Função fgets() recebe os paramentros: nome do array=texto, tamanho maximo=100, nome do arquivo=ftxt

        printf("%s", texto); // Exibe o conteudo lido do arquivo
        }
    }
    fclose(ftxt); // Fecha o arquivo

    return 0;
}