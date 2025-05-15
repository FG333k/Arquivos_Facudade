#include <stdio.h>
#include <stdbool.h>

//----------------EDITAR TODO O CÓDIGO PARA UM FFORMATO EXPLICATIVO 


union minhaUnion{
    int i;
    char c;
    bool b;
};


int main(){
    char letrac = 'A';
    int letrai = 65;


    union minhaUnion uni;
    uni.c = 'A';
    printf("União char: %d\n\n", uni.c);

    uni.i = 65;
    printf("União int: %c\n\n", uni.i);

    printf("Variavel char: %d\n\n", letrac);
    printf("Variavel int: %c\n\n", letrai);

    printf("União char: %d\n\n", uni.b);

    return 0;
}