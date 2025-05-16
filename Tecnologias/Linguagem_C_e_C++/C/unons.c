#include <stdio.h>
#include <stdbool.h>

// Diferente das structs as unions não podem receber varios tipos de valores ao mesmo tempo

// Exemplo de union
union minhaUnion{

    // Membros da union
    int i;
    char c;
    bool b;
};


int main(){
    union minhaUnion uni;

    // Atribuindo um valor a variavel dentro da union
    uni.i = 10;

    printf("Union int i: %d\n\n", uni.i); // Exibe o valor da variavel i da union

    uni.c = 'A';
    printf("Union char c: %c\n\n", uni.c); // Exibe o valor da variavel c da union

    /* Como a union só poderá receber um vlor de um tipo por vez
     então caso tentarmos reexibir a variavel i o resultado mudará
    */
    printf("union int i: %c\n\n", letrai);

    /* Mesmo que ela não seja modificada diretamente, pois cada
     alteração que for eita em uma variavel todas as outras sofrerão
     mudanlaças pois na union cada variavel compartilha o mesmo
     espaço de memória
    */
   
    return 0;
}