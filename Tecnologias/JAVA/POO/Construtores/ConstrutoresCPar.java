public class ConstrutoresCPar {
    
    int x; // atributo da classe 

    // Classe construtora
    public ConstrutoresCPar(int y){     // Com parametros 
        x = y;
    }

    public static void main(String[] args){
        ConstrutoresCPar meuObjeto = new ConstrutoresCPar(5); // Objeto da classe chamando a classe construtora com parametro

        System.out.println(meuObjeto.x); // Printa o valor de x
    }
}
