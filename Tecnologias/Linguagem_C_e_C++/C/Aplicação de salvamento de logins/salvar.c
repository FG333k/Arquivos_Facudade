#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct usuarios{
    int id;
    char email[20];
    char senha[20];
};

char lista_usuarios_l[256];
FILE *f_txt;
struct usuarios usr;

void listar_usuarios();
void cadastrar();

int main(){
    int escolha;
    bool loop_i = true;

    // implementar o histórico de contagem de usuários

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

                listar_usuarios();
                loop_i = true;
                system("clear || cls");
                break;
            
            case 2:
                cadastrar();
                loop_i = true;
                system("clear || cls");
                break;
            
            case 3:
                loop_i = false;
                break;
            
            default:
                system("clear || cls");            
                printf(">>>Opcao invalida escolha uma opcao valida:\n\n");
                loop_i = true;
                break;
        }
    } while (loop_i);
    
    return 0;
}

void listar_usuarios(){
    system("clear || cls");

    f_txt = fopen("lista_usuarios.txt", "r");
    if (f_txt == NULL){
        printf("Nao ha usuarios cadastradors ainda, por favor cadastre!\n");
    }else{
        printf("\n===LISTA DE USUARIOS===\n\n");
        while (fgets(lista_usuarios_l, 100, f_txt)){
            printf("%s", lista_usuarios_l);
        }
        fclose(f_txt);
    }

    printf("\nPara continuar precione enter...");
    getchar();
    getchar();
}

void cadastrar(){
    int esc_c;
    bool loop_c, loop_Ec;
    usr.id = 0;

    // Verificar último ID usado
    f_txt = fopen("lista_usuarios.txt", "r");
    if (f_txt) {
        while (fgets(lista_usuarios_l, sizeof(lista_usuarios_l), f_txt)) {
            // Extrair o último ID
            sscanf(lista_usuarios_l, "%d", &usr.id);
        }
        fclose(f_txt);
    }

    system("clear || cls");

    loop_c = true;
    do{
        system("clear || cls");
        printf("===CADASTRO===\n\n");
        printf("Digite o Email: ");
        scanf("%s", usr.email);
        printf("Digite a senha: ");
        scanf("%s", usr.senha);

        usr.id++;

        f_txt = fopen("lista_usuarios.txt", "a");
        if (f_txt){
            fprintf(f_txt, "%d |%s |%s\n", usr.id, usr.email, usr.senha);
            fclose(f_txt);
            printf("\nUsuario cadastrad com sucesso! ID: %d\n", usr.id);
        } else{
            printf("\nNao foi possivel abrir o arquivo para cadstro!\n");
        }
        
        loop_Ec = true;

        do{
            printf("\nDeseja cadastrar um novo usuario? [1-sim, 2-nao]: ");
            scanf("%d", &esc_c);

            switch (esc_c){

                case 1:
                    
                    loop_Ec = false;
                    loop_c = true;
                    break;
                
                case 2:
                    
                    loop_Ec = false;
                    loop_c = false;
                    break;

                default:
                    system("clear || cls");
                    printf("Opcao invalida!\n");
                    loop_Ec = true;
                    break;
            }
            
        }while(loop_Ec);
        
    }while(loop_c);
}