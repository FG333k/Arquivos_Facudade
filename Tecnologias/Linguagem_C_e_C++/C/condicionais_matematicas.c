#include<stdio.h>
#include<stdlib.h>

void main(){

    //Definindo variaveis
    int a = 5, b=10, c = 15;
    char d = 'x';

    //Maior
    if(a > 2){
        printf("\n %d e maior que 2 ", a);
    }

    //Maior ou igual
    if(c >= b){
        printf("\n %d e maior ou igual a %d ", c, b);
    }

    //Menor
    if(a < 10){
        printf("\n %d e menor que 10 ", a);
    }

    //Menor ou igual
    if(a <= 10){
        printf("\n %d e menor ou igual a 10 ", a);
    }

    //Diferente
    if(c != 10){
       printf("\n %d e diferente de 10", c);
    }
    if (d !='a'){
        printf("\n %c e diferente de  a", d);
    }

    printf("\n");
    system("\npause");
}
