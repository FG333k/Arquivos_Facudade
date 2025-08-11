public class Laco_while {
    public static void main(String[] args) {
        int i = 0;

        // (While-Do) Primeiro verifica a condição depois executa o bloco de código
        while (i < 5) {
            System.out.println(i+1);
            i++;
        }

        // (Do-While) Primeiro executa o bloco de código depois verifica a condição
        i = 0;
        do { 
            System.out.println(i+1);
            i++;
        } while (i < 5);

        // Possibilidade do uso de break no laço while
        i = 0;
        while (i < 10) { 
            System.out.print(i+" ");
            i++;
            if (i == 4) {
                break;
            }
        }
        System.out.println("Break...\n");

        // Possibilidade do uso de continue no laço while
        i = 0;
        while (i < 10) {
            System.out.print(i+" ");
            i++;
            if (i == 6) {
                System.out.print("Continue... ");
                continue;
            }
        }
    }
}
