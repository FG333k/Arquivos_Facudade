#include <stdio.h>

// Criação da struct
struct minhaStruct{

    // Membros da struct
    int num; 
    char letr;
    char string[30];
 };

int main(){

    // Variavel para struct criada
    struct minhaStruct s1;

    // Criando outra varavel
    struct minhaStruct s2;
    
    
    // Sintaxe "variavel + . + membro "
    
    // Atribuindo varores aos membros
    s1.num = 10;
    s1.letr = 'A';
    
    s2.num = 20;
    s2.letr = 'B'
    
    // Não é possivel exibir uma string normalmente :
    // s1.string = "Text...";
    // printf("%s", s1.string);
    // Então usamos strcpy() para atribuir valor a string
    strcpy(s1.string, "Texto...");
    
    // Tambem é possivel atribuir valores aos membros de outra forma:
    // struct minhaStruct s1 = {10, 'A', "Texto..."};

    // Podemos tambem atribuir uma struct a outra:
    // s2 = s1;

    /* 
    Também é possivel modificar valores como numa variavel nomrmal
    mas sempre usando a sintaxe do " . "
    ex: 
        struct minhaStruct s1 = {10, 'A', "Texto..."};
        s1.num = 20;
        s1.letr = 'B';
        strcpy(s1.string, "Outro texto...");
    
    Muito util quando os valores de uma struct estão copiados em outra
    */

    // Exibindo os seus respectivos valores
    printf("%d", s1.num);
    printf("%c", s1.letr);
    printf("%s", s1.string);

    /*
    Utilidade das structs:
    ex:     Catalogo de carros
        struct car{
            char marca[20];
            char modelo[20];
            int ano;
        };

        int main(){
            struct car car1 = {"BMW", "X5", 1999};
            struct car car2 = {"Ford", "Mustang", 1969};
            struct car car3 = {"Toyota", "Corolla", 2011};

            printf("%s %s %d\n", car1.marca, ca1.modelo, car1.ano);
            printf("%s %s %d\n", car2.marca, ca2.modelo, car2.ano);
            printf("%s %s %d\n", car3.marca, ca3.modelo, car3.ano);

            retunr 0;
        }
    */

    return 0;
}