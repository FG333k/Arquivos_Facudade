#include<stdio.h>
#include <stdlib.h>

void main(){
    int num, i, j;
    char tip;

    do{
        printf("Digite um numero para formar um modelo 2D: ");
        scanf(&num);
        
        if (num%1 != 0)
        {
            system("cls");
        }
    
    } while (num%1 != 0);

    do{
    printf("digite para escolher uma opação de modelo:\n");
    printf("Retangulo [ R ]\n");
    printf("Triangulo Retangulo Decrescente [ D ]\n");
    printf("Triangulo Retangulo Crescente [ C ]\n");
    scanf(&tip);

    if ((tip != 'R') && (tip != 'D') && (tip != 'C') && (tip != 'r') && (tip != 'd') && (tip != 'c'))
    {
        system("cls");
        printf("Digite uma opção válida!\n\n");
    }
    
    } while ((tip != 'R') && (tip != 'D') && (tip != 'C') && (tip != 'r') && (tip != 'd') && (tip != 'c'));

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
        break;
    
    case 'D':
        for (i = 1; i <= num; i++)
        {
            for (j = i; j <= num; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 'C':
    for (i = num; i >= 1; i--)
        {
            for (j = i; j <= num; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    
    default:
        break;
    }

    return 0;
}