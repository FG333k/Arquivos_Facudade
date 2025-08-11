([[Classes e objetos|Classes]], [[Métodos|Métodos]], [[Atributos|Atributos]] e [[Construtores.java|Construtores]])

Os **modificadores** em Java são palavras-chave que definem propriedades de acesso, comportamento ou escopo de [[Classes e objetos|classes]], atributos, [[Métodos|métodos]] e construtores. Eles controlam como outros componentes do código podem interagir com esses elementos.
### Tipos: 
- **Modificadores de acesso** - controlam o nível de acesso.
- **Modificadores de não acesso** - não controlam o nível de acesso, mas fornecem outras funcionalidades.

### Modificadores de acesso (Acesso)

| **Modificador**                                     | **Escopo**                                                        | **Aplicação**                                                                            | **Exemplo**                |
| --------------------------------------------------- | ----------------------------------------------------------------- | ---------------------------------------------------------------------------------------- | -------------------------- |
| `public` [[Public.java\|Exemplo]]                   | Acesso total (qualquer classe em qualquer pacote).                | [[Classes e objetos\|Classes]], [[Atributos\|Atributos]], [[Métodos\|Métodos]] | `public class MinhaClasse` |
| `protected` [[Protected.java\|Exemplo]]             | Acesso pela própria classe, subclasses e classes do mesmo pacote. | [[Atributos\|Atributos]], [[Métodos\|Métodos]]                                 | `protected int valor;`     |
| `default`(sem modificador) [[Defaut.java\|Exemplo]] | Acesso apenas por classes do mesmo pacote.                        | [[Classes e objetos\|Classes]], [[Atributos\|Atributos]], [[Métodos\|Métodos]] | `String nome;`             |
| `private` [[Private.java\|Exemplo]]                 | Acesso apenas dentro da própria classe.                           | [[Atributos\|Atributos]], [[Métodos\|Métodos]]                                 | `private int codigo;`      |

Exemplo prático ([[Modificadores.java|Exemplo]]):
``` Java
public class Animal {
	public String nome;     //Acessivel em qualquer lugar  
	protected int idade;    //Acesso por subclasses e mesmo pacote
	String especie;         //Acesso apenas no mesmo pacote (default)
	private String codigo;  //Acesso apenas na classe Animal
}
```


### Modificadores de não acesso (Comportamento)

| **Modificador**                               | **Efeito**                                                                      | **Aplicação**                                                                            | **Exemplo**                     |
| --------------------------------------------- | ------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------- | ------------------------------- |
| `static` [[Static.java\|Exemplo]]             | Pertence à classe (não a instancia).                                            | [[Atributos\|Atributos]], [[Métodos\|Métodos]]                                 | `static int contador;`          |
| `final` [[Final.java\|Exemplo]]               | Bloqueia modificações (constante) ou impede herança/sobrescrita.                | [[Classes e objetos\|Classes]], [[Métodos\|Métodos]], [[Atributos\|Atributos]] | `final double PI = 3.14;`       |
| `abstract` [[Abstract.java\|Exemplo]]         | Define classe/métodos que não podem ser instanciados/implementados diretamente. | [[Classes e objetos\|Classes]], [[Métodos\|Métodos]]                                     | `abstract class Formas;`        |
| `synchronized` [[Synchronized.java\|Exemplo]] | Controla o acesso concorrente (thread-safe).                                    | [[Métodos\|Métodos]]                                                                     | `synchronized void metodo() {}` |
| `transient` [[Transient.java\|Exemplo]]       | Exclui campo durante serialização.                                              | [[Atributos\|Atributos]]                                                       | `transient int temp;`           |
| `volatile` [[Volatile.java\|Exemplo]]         | Garante visibilidade em threads (evita caching).                                | [[Atributos\|Atributos]]                                                       | `volatile boolean ativo;`       |
Exemplo prático ([[Modificadores.java|Exemplo]]):
```Java
public class Exemplo {
	static int total;            //Váriavel de classe (compartilhadda)
	final String Tipo = "Java";  //Constante (não pode ser alterada)
	abstract void calcular();    //Método abstrato (sem implementação)
}
```

