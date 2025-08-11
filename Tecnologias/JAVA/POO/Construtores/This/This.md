A palavra-chave `this` em Java se refere ao [[Classes e objetos|objeto]] atual em um [[Métodos|método]] ou [[Construtores|construtor]].
A palavra-chave `this` é frequentemente usada para evitar confusão quando [[Atributos|atributos]] de [[Classes e objetos|classe]] tem o mesmo nome que parâmetros de [[Métodos|métodos]] e [[Construtores|construtores]].

---

## Acessado atributos de classe
As vezes, um [[Construtores|construtor ]] ou [[Métodos|método]] tem como parâmetro o mesmo nome de uma variável de [[Classes e objetos|classe]]. Quando isso acontece, o parâmetro **oculta** temporariamente a variável de [[Classes e objetos|classe]] dentro desse [[Métodos|método]] ou [[Construtores|coonstrutor.]].

Para se referir à variável de [[Classes e objetos|classe]] e não ao parâmetro, pode se usar a palavra-chave `this`:
[[ThisAtri.java|Exemplo]]:
```Java
public class Main{
	int x;    //Variável de classe (x)
	
	//COnstrutor com um parametro x
	public Main(int x){
		this.x = x;    //Referencia a variável de classe 
	}
	
	public static void main(String[] args){
		//Criação do objeto passando o parâmetro do contrutor
		Main objeto = new Main(5);
		System.out.println("O valor de x e: " + objeto.x);
	}
}
```

Saída:
```Shell
O valor de x e: 5
```

É bom pensar assim:
"`this.x`(variável de [[Classes e objetos|classe]]) obtém o valor de  `x`(parâmetro do [[Construtores|construtor]])."
Sem o `this`, o código acima `x = x;` definiria o parâmetro `x` como igual a si mesmo, e a variável de [[Classes e objetos|classe]] permaneceria não inicializada (0).

---

## Chamando um construtor de outro construtor
Também é possível usar `this()` para chamar outro [[Construtores|construtor]] na mesma [[Classes e objetos|classe]].
Isso é útil quando é necessário fornecer valores padrão ou reutilizar o código de inicialização em vez de repeti-lo.
[[ThisContr.java|Exemplo]]:
```Java
public class Main{
	int anoModelo;
	String nomeModelo;
	
	//Construtor com um parâmetro	
	public Main(String nomeModelo){
		//chama o o construtor com dois pparâmetros e mas define um parametro com um valor padrão
		this(2020, nomeModelo);
	}
	
	//Construtor com dois parâmetros	
	public Main(int anoModelo, String nomeModelo){
		//Uso de 'this' para referenciar atributos de classe
		this.anoModelo = anoModelo;
		this.nomeModelo = nomeModelo;
	}
	
	//Método para exibir informações
	public void mostarInfo(){
		System.out.println(anoModelo + " " + nomeModelo);
	}
	
	public static void main(String[] args){
		//Cria um carro com apenas o nome do modelo (usa o ano parão)
		Main car1 = new Main("Corvete");
		
		//Cria um carro com o ano e o nome do modelo
		Main car2 = new Main(1969, "Mustang");
		
		car1.mostarInfo();
		car2.mostarInfo();
	}
}
```

Saída:
```Shell
2020 Corvete
1969 Mustang
```

**Obs.:** A primeira chamada para `this()` deve ser a **primeira instrução** dentro do construtor.