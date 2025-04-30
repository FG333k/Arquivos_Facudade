#include <stdio.h>

int main(){
    
    int numeros[5], tamanho, cont;
    char letras[5]={'a', 'b', 'c', 'd', 'e'};

    tamanho = (sizeof(numeros) / sizeof(numeros[0]));

    //printf("%d", tamanho);

    for (cont=0; cont<tamanho; cont++)
    {
        numeros[cont] = cont+1;
        printf("\nDigite um numero: %d", numeros[cont]);
        //scanf("%d", numeros[cont]);

        printf("\nDigite uma letra: %c", letras[cont]);
        //scanf("%d", letras[cont]);
    }
    


    return 0;
}
