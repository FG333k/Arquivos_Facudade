programa
{
	inclua biblioteca Matematica --> mat
	
	const real pi = 3.14
	real cir, r
	
	funcao inicio()
	{
	
		escreva("Digite o comprimento do raio da circunferencia que deseja calcular: ")
		leia(r)

		cir = 2 * pi * r //Formula matemática para calcular a circunferencia

		escreva("A circunferencia mede: ",mat.arredondar(cir, 2))

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 341; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */