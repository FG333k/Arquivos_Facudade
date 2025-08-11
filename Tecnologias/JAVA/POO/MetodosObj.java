public class MetodosObj{

    // Criando metodos
    public void aceleracaoTotal(){
        System.out.println("O carro está indo o mais rapido que pode");
    }

    public void velocidade(int velocidadeMax){
        System.out.println("Avelocidade maxima e: " + velocidadeMax);
    }

    public static void main(String[] args){

        // Objeto 
        MetodosObj meuCarro = new MetodosObj();

        // Chamando metodos
        meuCarro.aceleracaoTotal();
        meuCarro.velocidade(200);

    }
}