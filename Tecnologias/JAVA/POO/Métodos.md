[[Metodos.java|Métodos]] são declarados dentro de uma [[Classes e objetos|classe]] e que eles são usados para executar determinadas ações:
**Ex.:** 
```Java
public class Main{
	static void meuMetodo(){
		System.out.println("Hello World!");
	}
}
```

`meuMetodo()`  imprime texto (a ação), quando é **chamado**. Para chamar um método, escreva o nome do método seguido por dois parênteses  `( )` e um ponto e virgula `;`

**Ex.:**
```Java
public class Main{
	static void meuMetodo(){
		System.out.println("Hello World!");
	}
	
	public static void main(String[] args){
		meuMetodo();
	}
}
```

---
##### `static` VS `public` ([[Modificadores]])
Você frequentemente verá programas Java que possuem [[Atributos|atributos]] e métodos  `static` ou `public`.
No exemplo acima, criamos um método `static`, o que significa que ele pode ser acessado sem criar um [[Classes e objetos|objeto]] da [[Classes e objetos|classe]], diferente de `public` que só pode ser acessado por [[Classes e objetos|objetos]]:

**Ex.:**
```Java
public class Main{
	static void metodoEstatico(){
		system.out.println("Esse é um método estatico!!");
	}
	
	public void metodoPublico(){
		system.out.println("Esse é um método publico!!");
	}
	
	public static void main(String[] args){
		metodoEstatico();    //Chama o método estatico
		// metodoPublico();  //Haverá erro na compilação
		
		Main meuObj = new Main();    //Criação do objeto
		meuObj.metodoPublico();      //Chama o método publico por meio do objeto
	}
}
```

---

#### Métodos de acesso com um objeto
[[MetodosObj.java|Exemplo]]:
```Java
public class Main{
	
	//Criação do método aceleracaoTotal()
	public void aceleracaoTotal(){
		System.out.println("O carro chegou na sua aceleracao");
	}
	
	//Criação do método velocidade e parametro
	public void velocidade(int velocidadeMax){
		System.our.println("A velocidade maxima e: " + velocidadeMax);
	}
	
	public static void main(String[] args){
		Main carro = new Main();    //Criação do objeto(carro)
		carro.aceleracaoTotal();    //Chamando o método aceleracaoTotal
		carro.velocidade(200);      //Chamando o método velocidade com o valor do parametro
	}
}
```

Saída:
```Shell
O carro chegou na sua aceleracao
A velocidade maxima e: 200
```