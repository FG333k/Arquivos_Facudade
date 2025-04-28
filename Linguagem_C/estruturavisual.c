#include<stdio.h>
#include <stdlib.h>

void limpar_buffer(){
    while(getchar() != '\n'); 
}

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

int main(){
    int num, i, j, loop, raio=num;
    char tip;

    do{
        do{
            printf("Digite um numero de '*' para formar um modelo 2D: ");
            if(scanf("%d", &num) != 1){
                limpar_buffer();
                num = 0;
            }
            
            if (num <= 2)
            {
                system("cls || clear");
                printf("Digite um numero inteiro!\n");
            }else if (num > 50)
            {
                system("cls || clear");
                printf("Digite um numero menor para melhor visualização!\n");
            }
            
        
        } while ((num <= 0) || (num > 50));
    
        do{
        printf("\ndigite para escolher uma opacao de modelo:\n");
        printf("Retangulo [ R ] ou [ r ]\n");
        printf("Triangulo Retangulo Decrescente alinhado a esquerda [ d ]\n");
        printf("Triangulo Retangulo Crescente alinhado a esquerda [ c ]\n");
        printf("Triangulo Retangulo Decrescente alinhado a direita [ D ]\n");
        printf("Triangulo Retangulo Crescente alinhado a direita [ C ]\n");
        printf("Losango [ L ]\n");
        printf("Circulo [ O ]\n");
        printf("==> ");
        scanf(" %c",&tip);
        printf("\n");
    
        if ((tip != 'R') && (tip != 'D') && (tip != 'C') && (tip != 'L') && (tip != 'O') && (tip != 'r') && (tip != 'd') && (tip != 'c') && (tip != 'l') && (tip != 'o'))
        {
            system("cls || clear");
            printf("\nDigite uma opção valida!\n\n");
        }
        
        } while ((tip != 'R') && (tip != 'D') && (tip != 'C') && (tip != 'L') && (tip != 'O') && (tip != 'r') && (tip != 'd') && (tip != 'c') && (tip != 'l') && (tip != 'o'));
    
        switch (tip)
        {
        case 'r':
            
            for (i = 1; i <= num; i++)
            {
                for (j = 1; j <= num; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("RETANGULO %d x %d", num, num);
            break;
        
        case 'd':
            for (i = 1; i <= num; i++)
            {
                for (j = i; j <= num; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("TRIANGULO RETANGULO DECRESCENTE ALINHADO A ESQUERDA %d x %d", num, num);
            break;
    
        case 'c':
            for (i = num; i >= 1; i--)
            {
                for (j = i; j <= num; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("TRIANGULO RETANGULO CRESCENTE ALINHADO A ESQUERDA %d x %d", num, num);
            break;
        
        case 'R':
            
            for (i = 1; i <= num; i++)
            {
                for (j = 1; j <= num; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("RETANGULO %d x %d", num, num);
            break;
        
        case 'D':
            for (i = 1; i <= num; i++) 
            {
                for(j = 1; j < i; j++) {  
                    printf(" ");
                }
                
                for (j = i; j <= num; j++) {
                    printf("*");
                }
                printf("\n");
            }
            printf("TRIANGULO RETANGULO DECRESCENTE ALINHADO A DIREITA %d x %d", num, num);
            break;
    
        case 'C':
            for (i = 1; i <= num; i++) 
            {
                for (j = 1; j <= num - i; j++) {
                    printf(" ");
                }
    
                for (j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            printf("TRIANGULO RETANGULO CRESCENTE ALINHADO A DIREITA %d x %d", num, num);
            break;
        
        case 'L':
            for (i = 1; i <= num; i++) 
            {
                for (j = 1; j <= num - i; j++) {
                    printf(" ");
                }

                for (j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }

        case 'O':
            desenharCirculoPreenchido(raio);
            printf("Circulo de raio: %d", raio);
        break;
        
        default:
            break;
        }



        case 'o':
            desenharCirculoPreenchido(raio);
        
        printf("Circulo de raio: %d", raio);
        break;
        
        default:
            break;
        }
        
        do{
            printf("\n\nDeseja produzir outra imagem? (sim = 1, nao = 2): ");

            if(scanf("%d", &loop) != 1 )
            {
                limpar_buffer();
                loop = 0;
            }

            if (loop != 1 && loop != 2)
            {
                printf("\nOpcao inavllida tente novamente.");
            }
            
        } while (loop != 1 && loop != 2);

        if (loop == 1)
        {
            system("cls || clear");
        }
        
        
    } while (loop == 1);
    
    printf("\n\nFinalizando o programa obrigado!");
    return 0;
}


scanf("%d", variavelel);

if (variavel < 0)
{
    //faz algo 
}


