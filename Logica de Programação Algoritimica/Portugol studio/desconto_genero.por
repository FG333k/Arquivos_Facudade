programa
{	
	real compras, valor, porc
	cadeia nome
	caracter sexo
	funcao inicio()
	{
		escreva("Olá qual é o seu nome?: ")
		leia(nome)
		escreva("Qual o seu sexo, ", nome)
		escreva("\n| f-feminino  m-masculino |")
		escreva("\n==> ")
		leia(sexo)
		escreva("Qual foi o valor das compras?: ")
		leia(compras)

		escolha(sexo){
			caso 'f':

			porc = (13.0/100.0)*compras
			valor = (compras - porc)
			escreva("Com o desconto você terá que pagar ", valor)

			caso 'm':

			porc = (5.0/100.0)*compras
			valor = (compras - porc)
			escreva("Com o desconto você terá que pagar ", valor)


			caso contrario:
			escreva("Digite um sexo válido (f  /  m)")
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 659; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */