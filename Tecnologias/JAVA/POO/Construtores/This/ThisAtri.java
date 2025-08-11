package Construtores.This;
public class ThisAtri {

    int x; // Atributo da classe

    // Construtor 
    public ThisAtri(int x){
    //  classe   parametro
        this.x = x;     // O this é usado na ocasião de a variavel/atributo da classe tem o mesmo nome do parametro do construtor ou metodo  por exemplo. Então usamos o this para de referir a vsriavel/atributo da classe.
    }

    public static void main(String[] args) {

        // Criação do objeto
        ThisAtri obj = new ThisAtri(5);

        // Exibindo o valor do atribuo da classe
        System.out.println("O valor de x e: " + obj.x);
    }
}
