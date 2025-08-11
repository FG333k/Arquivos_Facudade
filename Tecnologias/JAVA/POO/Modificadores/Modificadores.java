public class Modificadores{

    public String nome;      // Acessível em qualquer lugar
    protected int idade;     // Acesso por subclasses e mesmo pacote
    String especie;         // Acesso apenas no mesmo pacote (default)
    private String codigo;  // Acesso apenas na classe Animal

}

/*public class Exemplo {
	static int total;            //Váriavel de classe (compartilhadda)
	final String Tipo = "Java";  //Constante (não pode ser alterada)
	abstract void calcular();    //Método abstrato (sem implementação)
}*/