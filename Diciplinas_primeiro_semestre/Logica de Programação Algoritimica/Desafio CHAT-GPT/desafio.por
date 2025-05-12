programa
{
	cadeia nome
	real alt
	inteiro idade, n1, n2, soma
	funcao inicio()
	{
		escreva("Escreva seu nome: ")
		leia(nome)
		escreva("Escreva sua idade: ")
		leia(idade)
		escreva("Escreva sua altura: ")
		leia(alt)

		escreva("\nOlá ", nome, "! Seja bem vindo(a).\n")

		se (idade < 12){

			escreva("Você é uma criança!\n")
			
			}senao se(idade >= 18){

				escreva("Você é um(a) adulto(a)!\n")
				
				}senao{

					escreva("Você é um(a) adolecente!\n")
					
					}

		escreva("Digite dois números que deseja somar\n")
		escreva("Número 1:")
		leia(n1)
		escreva("Número 1:")
		leia(n2)

		soma = (n1 + n2)

		escreva("A soma de ", n1, " e ", n2, " é igual a ", soma, "\n")


		escreva("Digite dois números que deseja saber se são impares ou pares\n")
		escreva("Número 1:")
		leia(n1)
		escreva("Número 1:")
		leia(n2)

		se((n1 % 2) == 0){

			escreva("\nO  número ", n1," é par.")
			
			}senao{

				escreva("\nO  número ", n1," é impar.")
				
				}

		se((n2 % 2) == 0){

			escreva("\nO número ", n2," é par.")
			
			}senao{

				escreva("\nO número ", n2," é impar.")
				
				}

		escreva("\n \nDigite um número para ser verificado: ")
		leia(n1)

		se(n1 > 10){

			escreva("O número ", n1," é maior que 10")
			
			}senao{

				escreva("O número ", n1," é menor ou igual a 10")
				
				}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 81; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */