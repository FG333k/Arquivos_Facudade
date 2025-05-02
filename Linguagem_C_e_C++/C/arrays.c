#include <stdio.h>

int main(){
    int vet[5]={1,2,3,4,5}, contv;
    int mat[2][5]={{10,20,30,40,50}, {60,70,80,90,100}}, cont1, cont2;
    int test[]={10, 20, 30, 40, 50}, contt, tamanho;
    int temat[][]={{1,2,3,4}, {5,6,7,8}}, tamanho1, tamanho2, contt1, contt2;
    
    printf("VETOR\n");
    for (contv = 0;contv < 5; contv++)
    {
        printf("%d ", vet[contv]);
    }
    printf("\n\n");

    printf("MATRIZ\n");
    for (cont1 = 0; cont1 < 2; cont1++)
    {
        for (cont2 = 0; cont2 < 5; cont2++)
        {
            printf("%d ", mat[cont1][cont2]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Testando como optimizar lops (for)\n");
    printf("VETORES\n");
    tamanho = sizeof(test) / sizeof(test[0]);

    for (contt = 0; contt < tamanho; contt++)
    {
        printf("%d ", test[contt]);
    }

    pritnf("MATRIZ\nNÃO CONSEGUI IMPLEMENTAR ");

    
    

    return 0;
}