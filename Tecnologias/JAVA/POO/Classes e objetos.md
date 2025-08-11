Tudo em Java está associado a [[Classes.java|Classes]] e [[Classes e objetos|objetos]], juntamente com seus [[Atributos|atributos]] e [[Métodos|Métodos]].
Por exemplo: na vida real, um carro é um [[Classes e objetos|objeto]]. O carro tem **[[Atributos|atributos]]**, como peso e cor, e **[[Métodos|Métodos]]**, como direção e freio.

Uma [[Classes.java|Classe]] é como um construtor de [[Classes e objetos|objetos]] ou um "projeto" para criar [[Classes e objetos|objetos]].

#### Criação de uma classe:

Para criar uma [[Classes.java|Classe]], use a palavra-chave `class`:

```Java
public class Main{    //Começar com letra maiuscula
	int x = 5;
}
```


#### Criação de um objeto:

Em Java, um [[Classes e objetos|objeto]] é criado a partir de uma [[Classes.java|Classe]]. Já criamos a [[Classes.java|Classe]] chamada `Main`, especifique o nome da [[Classes.java|Classe]], seguido pelo nome do [[Classes e objetos|objeto]] e use a palavra-chave `new`:

```java
public class Main{
	int x = 5;
	
	public static void main(String[] args){
		Main meuObj = new Main();
		System.out.println(meuObj.x);
	}
}
```

---

### Objetos e classes múltiplos

#### Objetos múltiplos
É possível criar vários [[Classes e objetos|objetos]] de uma [[Classes.java|Classe]]:

```Java
public class Main{
	int x = 5;
	
	public static void main(String[] args){
		Main meuObj1 = new Main();    //Objeto 1
		Main meuObj2 = new Main();    //Objeto 2
		System.out.println(meuObj1.x);
		System.out.println(meuObj2.x);
	}
}
```

#### Classes múltiplas
Também é possível criar um [[Classes e objetos|objeto]] de uma [[POO/Uso de varias classes/Main.java|classe]] e acessa-lo de outra [[Secundaria.java|classe]].
Isso costuma ser usado para melhor organização das [[Classes e objetos|classe]] (uma [[POO/Uso de varias classes/Main.java|classe]] possui todos os [[Atributos|atributos]] e [[Métodos|Métodos]], enquanto a outra [[Secundaria.java|classe]] contem o [[Métodos|Métodos]] `main()` (código a ser executado)).

O nome do arquivo Java deve corresponder ao nome da [[POO/Uso de varias classes/Main.java|classe]]. 
**Ex.:**

###### Main.java
```Java
public class Main{
	int x =5;
}
```

###### Segundo.java
```Java
class Second{
	public static void main(String[] args){
		Main meuObj = new Main();
		System.out.println(meuObj.x);
	}
}
```

###### Quando ambos os arquivos forem compilados:
```Shell
C:\User\name> javac Main.java
C:\User\name> javac Segundo.java
```

###### Execução:
```Shell
C:\User\name> java Segundo
```

###### Saída:
```Shell
5
```
