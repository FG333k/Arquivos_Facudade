public class Se_Entao {
    public static void main(String[] args) {
        int x = 10, y = 20;
        
        // Verificação simples de if
        if (y > x) {
            System.out.println("20 é maior que 18");
        }

        // Verificação com if e else
        if (y > 30) {
            System.out.println("y Não é maior que 30");
        }else{
            System.out.println("y é menor que 30");
        }

        // Verificação com if e else if
        if(x > y){
            System.out.println("x é maior que y");
        }else if(x < y){
            System.out.println("x é menor que y");
        }else{
            System.out.println("x é igual a y");
        }

        // Shorthand
        String resultado = (y > x) ? "y é maior que x" : "x é maior que y";
        System.out.println(resultado);
    }
}