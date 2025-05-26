public class Laco_For {
    public static void main(String[] args) {

        //  Laço for simples
        for (int i=0;i<=5;i++) {
            System.out.print(i+" ");
        }
        System.out.println("\n");

        // Lço for aninhado
        for (int i=0;i<5;i++) {
            for (int j = 0; j < 5; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
        }
        System.out.print("\n");

        // Laço for-each
        String[] carros = {"Volvo", "BMW", "Ford", "Mazda"};
        for (String i : carros) {       // Percorre cada elemento do array
            System.out.print(i+" ");
        }
        System.out.println("\n");

        // Possibilidade do uso do break no laço for
        for (int i = 0;i < 10;i++) {
            if (i == 6) {
                break;
            }
            System.out.print(i+" ");
        }
        System.out.println("Break...\n");

        // Possibilidade do uso de cotinue no laço for
        for (int i=0;i<10;i++) {
            if(i == 6){
                System.out.print("Continue... ");
                continue;
            }
            System.out.print(i+" ");
        }

    }
}
