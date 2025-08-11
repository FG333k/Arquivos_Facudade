public class Switch_Case {
    public static void main(String[] args) {
        int dia_da_semana = 5;
        
        switch (dia_da_semana) {
            case 1:
                System.out.println("Domingo");
                break;
            
            case 2:
                System.out.println("Segunda-feira");
                break;
            
            case 3:
                System.out.println("Terça-feira");
                break;
            
            case 4:
                System.out.println("Quarta-feira");
                break;
            
            case 5:
                System.out.println("Quinta-feira");
                break;
            
            case 6:
                System.out.println("Sexta-feira");
                break;
            
            case 7:
                System.out.println("Sabado");
                break;
            
            default:
                System.out.println("Erro, dia não existe");
                break;
        }
    }
}
