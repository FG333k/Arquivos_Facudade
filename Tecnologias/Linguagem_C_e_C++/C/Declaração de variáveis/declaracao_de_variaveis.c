#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //permite usar acentos
    setlocale(LC_ALL,"");

    //imprime ol�
    printf("Ol�\n");

    //Utilizando n�meros inteiros
    int a = 50; //declara��o de variavel inteira
    printf("O valor de a e = %d \n", a);  //para printar se utiliza %d
    scanf("%d", &a);  //Para ler tamb�m se utiliza %d
    printf("O valor de a mudou para = %d", a);

    //Utilizando n�meros reais
    float b = 5.5;  //Declara��o de variavel real
    printf("\nO valor de b � = %f \n", b);  //para printar se utiliza %f
    scanf("%f", &b);  //Paara ler tamb�m se utiliza %f
    printf("O valor de b mudou para = %f", b);

    //Utilizando letras unit�rias
    char letra = 't';  //Declara��o de variavel letra unit�ria
    printf("\nO valor de c � = %c \n", letra);  //para printar se utiliza %c
    fflush(stdin);  //Limpesa do buffer sempre que trabalhar com char
    scanf("%c", &letra);  //Paara ler tamb�m se utiliza %c
    printf("O valor de c mudou para = %c", letra);
}
