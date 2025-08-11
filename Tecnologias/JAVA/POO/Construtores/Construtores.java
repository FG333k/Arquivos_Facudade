package Construtores;
public class Construtores {
    
    int x;  // Criação do atributo

    // Criação da classe contrutora da classe Contrutores
    public Construtores(){
        x = 5;  // Setando o valor de inicialização do atributo x
    }

    public static void main(String[] args){
        Construtores meuObjeto = new Construtores(); // Criação do objeto da classe Construtores

        System.out.println(meuObjeto.x);    // Printa o valor de x
    }
}
