package Construtores.This;
public class ThisContr {

    // Atributos da classe
    int anoModelo;
    String nomeModelo;

    // Construtor com 1 parametro
    public ThisContr(String nomeModelo){

        // Define o segundo parametro como ano padrão
        this(2020, nomeModelo);
    }

    // Construtor com 2 parametros
    public ThisContr(int anoModelo, String nomeModelo){

        // Usa o this para atribuir valores aos atributos da classe
        this.anoModelo = anoModelo;
        this.nomeModelo = nomeModelo;
    }

    // Metodo para printar os valores dos atributos
    public void printInfo(){
        System.out.println(anoModelo + " " + nomeModelo);
    }

    public static void main(String[] args) {

        // Cria o objeto carro usando appenas o nome do modelo e usa o ano padrão
        ThisContr carro1 = new ThisContr("Corvete");

        // Cria o objeto carro com o ano e o modelo 
        ThisContr carro2 = new ThisContr(1995, "Mustang");

        // Chama o metodo que printa os atributos de cada objeto
        carro1.printInfo();
        carro2.printInfo();
    }
}
