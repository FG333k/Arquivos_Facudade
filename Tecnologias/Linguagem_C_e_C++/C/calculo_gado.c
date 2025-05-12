#include <stdio.h>

int main(){
    int quantidade, arrobas, peso_unitario, peso_total, preco;
    float resultado;

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    peso_total = 0;

    for (int i = 0; i < quantidade; i++){
        printf("%d° Valor: ", i+1);
        scanf("%d", &peso_unitario);

        peso_total += peso_unitario;
    }

    printf("Quantas arrobas: ");
    scanf("%d", &arrobas);
     printf("Preco: ");
    scanf("%d", &preco);

    resultado = ((peso_total / arrobas) * preco);

    printf("RESULTADO:  %.2f\n", resultado);
    printf("PESO TOTAL:  %d\n", peso_total);
    

}