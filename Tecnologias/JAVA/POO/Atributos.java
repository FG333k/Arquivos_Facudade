public class Atributos{

    // Atributos 
    int x;
    int y = 10;
    final int z = 30; // Atributo imutavel
    String nome;

    public static void main(String[] args){

        // Objeto da classe
        Atributos obj = new Atributos();

        // Acessando atributos por meio do objeto
        obj.x = 20;
        System.out.println(obj.y);
        System.out.println(obj.z);
        obj.nome = "Nome";

    }
}