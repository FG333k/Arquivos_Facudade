#include <stdio.h>
#include <stdbool.h>

union senhas{
    char senha[9];
    int criptografia[9];
    int resultado[9];
};

/*void criptografia(){
    int cont = 0;
    while (s.senha[cont] != '\0'){
        
    }
    
    

}*/


int main(){

    union senhas s;
    
    scanf("%8s", s.senha);
    printf("Senha original: %s", s.senha);


    printf("\n\nCriptografia: %d", s.criptografia);
    printf("\n\nDigite a criptografia: ");

    for (int i = 0; i < 9; i++){
        scanf("%d", s.criptografia[i]);
    }
    

    for (int i = 0; i < 9; i++){
        s.resultado[i] = s.criptografia [i];
        printf("%c", s.resultado);
    }
    


    return 0;
}