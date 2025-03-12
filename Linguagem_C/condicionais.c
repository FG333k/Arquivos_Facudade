#include<stdio.h>
#include<stdlib.h>

void main(){

    //Definindo variaveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicionais simples
    if(a == 5){
        printf("A variavel a = 5 \n");
    }

    if(b == 2.5){
        printf("A variavel b = 2.5\n");
    }

    if(c == 'x'){
        printf("A variavel c = x\n");
    }

    //Numero par ou impar
    if(a % 2 == 1){
        printf("\n A variavel a e impar");
    }else{
        printf("\n A variavel a e par");
    }

    //Condicional composta
    if(opcao == 1){
        printf("\n Opcao = 1");
    }else if(opcao == 2){
        printf("\n Opcao = 2");
    }else{
        printf("\nA opcao nao e igual a 1 nem 2");
    }


}
