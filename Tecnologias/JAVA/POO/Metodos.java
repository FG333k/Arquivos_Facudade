public class Metodos{

    // Metodo estático
    static void staticMetod(){
        System.out.println("Helo, World");
    }

    // Metodo publico
    public void publicMetod(){
        System.out.println("Helo, World");
    }

    public static void main(String[] args){

        // Chamando o metodo estatico
        staticMetod();

        // Chamando o metodo publico
        Metodos obj = new Metodos();    // Criação do objeto da classe
        obj.publicMetod();              // Chamada do metodo por meio do objeto
    }
}