#include<stdio.h>
#include<stdlib.h>


void main(){

    //definindo variaveis
    int cont;

    //tabuada do 5
    for (cont  = 1; cont <= 10; cont++)
    {
        printf("\n5 X %d = %d", cont, 5 * cont);
    }

    //contando de 2 em 2
    for (cont = 0; cont <= 10; cont += 2)
    {
        printf("\n%d", cont);
    }

    //contagem regreciva
    for (cont = 10; cont >= 1; cont--)
    {
        printf("\n%d", cont);
    }
    
    //Pausa o programa depois de terminar de execultar
    system("pause")
}
