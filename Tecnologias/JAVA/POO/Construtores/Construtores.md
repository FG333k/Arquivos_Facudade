Um construtor em Java é um [[Métodos|método]]  especial usado para inicializar [[Classes e objetos|objetos]].
Um construtor é chamado quando um [[Classes e objetos|objeto]] de uma [[Classes e objetos|classe]] é criado.
Ele pode ser usado para definir valores iniciais para [[Atributos|atributos]] de [[Classes e objetos|objeto]]: 
[[Construtores.java|Exemplo]]:
```Java
public class Main{
	int x;    //Criando atributo da classe
	
	//Criando o contrutor da classe Main
	ppublic Main(){
		x = 5;    //Redefinindo o valor do atributo
	}
	
	public static void main(String[] args){
		Main obj = new Main();    //Criação do objeto(chamando o construtor)
		System.out.println(obj.x);    //Exibindo o valor do atributo
	}
}
```
**Obs.:**
- O nome do construtor deve ser sempre o mesmo da classe e não pode ter um tipo de retorno como (`void`).
- O construtor é chamado quando o objeto é criado.
- Todas as classe ter construtores por padrão: se você não criar um construtor de classe, Java cria um. No entanto, você não poderá definir valores iniciais para atributos de objetos.

---

## Parâmetros do construtor
Os construtores também podem receber parâmetros, que são usados para inicializar [[Atributos|atributos]]. 
No exemplo a seguir adiciona um parâmetro `int y` ao construtor. Dentro do construtor, definimos x como y (x = y). Quando chamamos o construtor, passamos um parâmetro para o construtor (5), que definirá o valor de x como 5.
[[ConstrutoresCPar.java|Exemplo]]:
```Java
public class Main{
	int x;
	
	public Main(int y){
		x = y;
	}
	
	public static void main(String[] args){
		Main obj = new Main(5);
		System.out.println(obj.x);
	}
}
```

Saída:
```Shell
5
```

E podem existir quantos parâmetros forem necessários:
[[Exemplo.java|Exemplo]]:
```Java
public class Main{
	int anoModelo;
	String nomeModelo;
	
	public Main(int ano, String nome){
		anoModelo = ano;
		nomeModelo = nome;
	}
	
	public static void main(String[] args){
		Main meuCarro = new Main(1998, "Mustang");
		System.out.println(meuCarro.anoModelo + " " + meuCarro.nomeModelo);
	}
}
```

Saída:
```Shell
1998 Musatang
```
