#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Struct para receber os atributos de usuário
struct usuarios{
    int id;         // Identificador numérico
    char email[20]; // Email do usuário
    char senha[20]; // Senha do usuário
};

// Variáveis globais
char lista_usuarios_l[256]; // Vetor usado para receber o texto do arquivo
FILE *f_txt;                // Variavél do tipo conteiro para o acesso do arquivo
struct usuarios usr;        // Atribuição da variavel a struct

// Protótipos das variáveis
void listar_usuarios();
void cadastrar();

int main(){
    int escolha;
    bool loop_i = true;

    // Loop principal da interface
    do{
        printf("====SISTEMA DE CADASTRO====\n");
        printf("\nEscolha uma opcao\n");
        printf("Listar usuarios: [1]\n");
        printf("Cadastrar usuarios: [2]\n");
        printf("Sair: [3]\n");
        printf("\n===[ ");

        scanf("%d", &escolha);

        switch (escolha){
            case 1:

                listar_usuarios();      // Chama a função
                loop_i = true;          // Mantem o valor de loop verdadeiro
                system("clear || cls"); // Lipa a tela anterior
                break;
            
            case 2:
                cadastrar();            // Chama a função 
                loop_i = true;          // Mantem o valor de loop verdadeiro
                system("clear || cls"); // Limpa a tela anterior
                break;
            
            case 3:
                loop_i = false;         // Troca o valor de loop para falso (fializa o programa)
                break;
            
            default:
                system("clear || cls"); // Limpa a tela
                printf(">>>Opcao invalida escolha uma opcao valida:\n\n");
                loop_i = true;          // Mantem o vaalor de loop verdadeiro
                break;
        }
    } while (loop_i);
    
    return 0;
}

// Função de listagem de usuários
void listar_usuarios(){
    system("clear || cls");             // Limpa a tela anterior

    f_txt = fopen("lista_usuarios.txt", "r"); // Abre o arquivo de texto (modo leitura)

    // Verificação de existencia do arquivo ou do conteúdo
    if (f_txt == NULL){
        printf("Nao ha usuarios cadastradors ainda, por favor cadastre!\n");
    }else{
        printf("\n===LISTA DE USUARIOS===\n\n");

        // Inicia um loop para que a função fgets leia cada linha
        while (fgets(lista_usuarios_l, 100, f_txt)){

            printf("%s", lista_usuarios_l); // Exibe a lista de usuários linha por linha
        }
        fclose(f_txt);                  // Fecha o arquivo
    }

    printf("\nPara continuar precione enter..."); // Mensagem de espera 
    getchar();                          // Lê o (enter) deichado no bufer
    getchar();                          // Aquara o precionamento do (enter)
}

// Função de cadastro de usuários
void cadastrar(){
    int esc_c;
    bool loop_c, loop_Ec;
    usr.id = 0;                         // Inicializa a variável

    f_txt = fopen("lista_usuarios.txt", "r");   // Abre o arquivo de texto (modo leitura) 
    
    // Verificar último ID usado
    if (f_txt) {
        while (fgets(lista_usuarios_l, sizeof(lista_usuarios_l), f_txt)) {
            // Extrair o último ID
            sscanf(lista_usuarios_l, "%d", &usr.id);
        }
        fclose(f_txt);                  // Fecha o arquivo
    }

    system("clear || cls");             // Limpa a tela anterior

    loop_c = true;                      // Inicializa a variável

    // Loop da interface de cadastro
    do{
        system("clear || cls");         // Limpa a tela anterior
        printf("===CADASTRO===\n\n");
        printf("Digite o Email: ");
        scanf("%s", usr.email);
        printf("Digite a senha: ");
        scanf("%s", usr.senha);

        usr.id++;                       // Incrementa o numero de id a cada cadastro

        f_txt = fopen("lista_usuarios.txt", "a"); // Abre o arquivo de texto (modo edição)

        // Verificação de existencia do arquivo ou do conteúdo
        if (f_txt){
            fprintf(f_txt, "%d |%s |%s\n", usr.id, usr.email, usr.senha); // Adidicona os respectivos atributos

            fclose(f_txt);              // Fecha o arquivo

            printf("\nUsuario cadastrad com sucesso! ID: %d\n", usr.id); // Exibe mensagem de sucesso
        } else{
            printf("\nNao foi possivel abrir o arquivo para cadstro!\n"); // Exibe mensagem de erro
        }
        
        loop_Ec = true;                 // Inicializa a variável

        // Loop da inteface de escolha
        do{
            printf("\nDeseja cadastrar um novo usuario? [1-sim, 2-nao]: ");
            scanf("%d", &esc_c);

            switch (esc_c){

                case 1:
                    
                    loop_Ec = false;    // Troca o valor do loop para falso (finalizando o loop de esxolha)
                    loop_c = true;      // Mantem o valor do loop verdadeiro
                    break;
                
                case 2:
                    
                    loop_Ec = false;    // Troca o valor do loop para falso (finalizando o loop de escolha)
                    loop_c = false;     // Troca o valor do loop para falso (finalizando o loop de cadastro)
                    break;

                default:
                    system("clear || cls"); // Limpa a tela anterior
                    printf("Opcao invalida!\n");
                    loop_Ec = true;     // Mantem o valor do loop de escolha
                    break;
            }
            
        }while(loop_Ec);
        
    }while(loop_c);
}