#include<stdio.h>
#include<stdlib.h>


void main(){
    

    //Definindo variaveis
    int a = 10

    //conectivo Lógico E (and) , se uma comparação for FALSA não entra no bloco
    if (a > 5 && a < 15)
    {
        printf("\n A variável 'a' está enre 5 e 15");
    }

    //conectivo Lógico Ou (or)) , se pelo menos uma comparação for VERDADEIRO entra no bloco
    if (a > 5 || a > 15)
    {
        printf("\n A variável 'a' é maior que 5 ou maior que 15");
    }

    //Misturando conectivos
    if ((a > 5 && a < 15) || a == 20)
    {
        printf("\n A variável 'a' está enre 5 e 15 ou é igual a 20");
    }
    

    //pause o programa após executar
    system("pause");
}
