#include<stdio.h>


void dispay(int var, int *ptr);
void update(int *p);

int main(){

    int var = 15;
    int *ptr;

    ptr = &var;

    dispay(var, ptr);

    update(&var);

    dispay(var, ptr);

    return 0;
}

void dispay(int var, int *ptr){
    printf("\n\n");
    printf("Conteudo de var %d\n", var);
    printf("Endereço de var %p\n", &var);
    printf("Conteudo apontados por ptr %d\n", *ptr);
    printf("Endereço apontado por ptr %p\n", ptr);
    printf("ENdereço do ptr %p\n", &ptr);

}

void update(int *p){
    *p = *p + 1;
}

// Ponteiros:

// *ptr : O apontado por, conteudo do endereço da variável que ptr aponta
//  ptr : O endereço da variável
// &ptr : O endereço do ponteiro