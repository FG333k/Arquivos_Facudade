#include <stdio.h>
#include "funcoes.h"

int somar(int a, int b){
    return a + b;
}

void pausar(){

    printf("Precione ENTER para continuar...");
    if (getchar() != '\n'){
        getchar();
    }else{
        while (getchar() != '\n');
    }
    
}