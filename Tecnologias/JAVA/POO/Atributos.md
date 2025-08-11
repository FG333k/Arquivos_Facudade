[[Atributos.java|Atributos]] são as "variáveis" dentro de uma [[Classes e objetos|classe]] 
**Ex.:** 

###### Classe `Main` com os atributos `x` e `y`:
```Java
public class Main{
	int x = 5;
	int y = 3;
}
```

---
### Acesoo aos atributos
É possível acessar atributos cirando um [[Classes e objetos|objeto]] da [[Classes e objetos|casse]] e usando a sintaxe de ponto (`.`):
O exemplo a seguir criará um [[Classes e objetos|objeto]] da [[Classes e objetos|classe]] `Main`, com o nome `meuObj`. Usamos o atributo `x` no [[Classes e objetos|objeto]] para imprimir seu valor:
```Java
public class Main{
	int x = 5;
	
	public static void main(String[] args){
		Main meuObj = new Main();
		System.out.println(meuObj.x);
	}
}
```

---
### Modificando atributos
Também é possível modificar valores de atributos:
###### Definindo o valor de `x` como 40:
```Java
public class Main{
	int x;
	
	public static void main(String[] args){
		Main meuObj = new Main();
		meuObj.x = 40;
		System.out.println(meuObj.x);
	}
}
```

ou substituir valores existentes:
```Java
public class Main{
	int x = 10;
	
	public static void main(String[] args){
		Main meuObj = new Main();
		meuObj.x = 25;
		Sysetem.out println(meuObj.x);
	}
}
```

###### Para definir atributos imutáveis (constantes), definimos o atributo com o [[Modificadores|modificador]] `final` [[Final.java|Ex.]]:  
```Java
public class Main{
	final int x = 10;
	
	public static void main(String[] args){
		Main meuObj = new Main();
		meuObj.x = 25;    //Isso irá gerar um erro 
		System.out.println(meuObj.x);
	}
}
```

`final` é útil quando é necessário que uma variavel sempre armazene o mesmo valor, como  PI(3,14159...).