#include<stdio.h>
#include<stdlib.h>


void main(){
    //definindo variaaveis 
    int a = 1; b = 10

    //contando ate 10
    //Primeiro confere a condição depois execulta o bloco de codigo
    while (a <= 10)
    {
        //imprime a variavel a na tela 
        printf("\n%d", a);

        //incremento
        a++       //a = a + 1;
    }

    //Execulta o bloco de codigo depois confere a condição
    do{
        //imprime a variavel a na tela 
        printf("\n%d", a);

        //incremento
        a++       //a = a + 1;
    }while (a <= 10);

    //contagem regreciva
    while (b >= 1)
    {
        printf("\n%d", b);

        b--       //b = b - 1;
    }
    
    
    system("pause")
}
