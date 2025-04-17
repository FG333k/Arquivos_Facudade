#include<stdio.h>


void main(){

    //definindo variáveis 
    int a = 5;
    char b = 'x';

    if (a == 1)
    {
        printf("\n opção escolhida foi: 1")
    }else if (a == 2)
    {
        printf("\n opção escolhida foi: 2")
    }else if (a == 3)
    {
        printf("\n opção escolhida foi: 3")
    }else
    {
        printf("\n opção invalida")
    }

    switch (a)
    {
    case 1:
        printf("\n opção escolhida foi: 1")
        break;
    
    case 2:
        printf("\n opção escolhida foi: 2")
        break;
    
    case 3:
        printf("\n opção escolhida foi: 2")
        break;
    
    default:
        printf("\n Opção invalida")
        break;
    }
    
    //pause o programa após executar 
    system("pause")
}
