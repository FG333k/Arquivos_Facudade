programa
{
	
inteiro num, soma = 0, cont
	funcao inicio()
	{
		para(cont=1;cont<=4;cont++){

			escreva("Digite o ", cont, "° valor: ")
			leia(num) 

			enquanto (num <= 0){

				escreva("Digite um numero maiior que 0!: ")
				leia(num)
				
				}
			soma += num
			escreva(soma, "\n")
			
			}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 275; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */