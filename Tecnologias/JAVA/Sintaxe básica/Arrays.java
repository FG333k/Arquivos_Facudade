public  class Arrays{
    static void main(String[] args){

        // Declaração de uma array
        String[] carros = {"Volvo", "BMW", "Ford", "Mazda"};
        int[] numeros = {10, 20, 30, 40};

        // Para acessar elementos de ua array
        System.out.println(carros[0]);

        // Para alterar um valor de um elemento
        carros[0] = "Mustang";
        System.out.println(carros[0]);

        // Descobrir o comprimento de uma array
        System.out.println(carros.length);

        // Também é possivel percorrer uma array usando o for com a propriedade lenghth
        for (int i=0;i<numeros.length;i++) {
            System.out.print(numeros[i]+" ");
        }
        System.out.print("\n");

        // Mas para percorrer uma array existe um for especifico (for-each)
        for (int i : numeros) {
            System.out.print(i+" ");
        }
        System.out.print("\n");

        // Arrays multidimencionais
        int[][] tabela_numeros = {
            {1,2,3,4},
            {5,6,7}
        };
        // Acessando os elementos
        System.out.println(tabela_numeros[1][2]);
        // Alterando valores
        tabela_numeros[0][3] = 10;
        System.out.println(tabela_numeros[0][3]);

        // Loop for em uma matriz multidimensional
        for (int i=0;i<tabela_numeros.length;i++){
            for (int j=0;j<tabela_numeros[i].length;j++){
                System.out.print(tabela_numeros[i][j]+" ");
            }
            System.out.print("\n");
        }

        // Também é possivel usar o for-each
        for(int[] linha : tabela_numeros){
            for (int i : linha){
                System.out.print(i+" ");
            }
            System.out.print("\n");
        }
    }
}