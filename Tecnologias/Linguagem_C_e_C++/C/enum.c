#include <stdio.h>

// Criando a enum
enum Nivel{         //VALORES PADRÃO    |*Caso seja atribuido um        Ex:
    LOW = 10,       // 0                | valor apenas a um item,          |LOW = 5,
    MEDIUM = 50,    // 1                | os proximos itens atualizarão    |MEDIUM, -> 6
    HIGH = 100      // 2                | seus valores de acordo           |HIGH    -> 7
};

int main(){

    // Variavél para enum recebendo uma atribuição do tipo (MEDIUM)
    enum Nivel variavel_nivel = MEDIUM;

    // Exibindo o valor da variavel
    printf("%d", variavel_nivel); // Saída:  1(Antes da atribuição)
    printf("%d", variavel_nivel); // Saída:  50(Depois da atribuição)

    /* USO DAS ENUMS:
        São rfrequentemente usadas em instruções
        switch para verificar valores correspondentes:

        enum Nivel {
            LOW = 1,
            MEDIUM,
            HIGH
        };

        int main(){
            enum Nivel variavel_enum = MEDIUM;

            switch (variavel_enum) {
                case 1:
                    printf("Nivel baixo");
                    [CODIGO...]
                    break;
                case 2:
                    printf("Nivel medio");
                    [CODIGO...]
                    break;
                case 3:
                    printf("Nivel alto");
                    [CODIGO...]
                    break;
                defaut:
                    printf("Mensagem de defaut");
                    [CODIGO...]
            }
            return 0;
        }

    */
    

    return 0;
}