public class Exemplo {

    int anoModelo;
    String nomeModelo;

    public Exemplo(int y, String n){
        anoModelo = y;
        nomeModelo = n;
    }

    public static void main(String[] args){
        Exemplo meuObjeto = new Exemplo(18, "Qualquer");

        System.out.println(meuObjeto.anoModelo + " " + meuObjeto.nomeModelo);
    }
}
