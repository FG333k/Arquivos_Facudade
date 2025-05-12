programa {
  inclua biblioteca Matematica --> mat

  cadeia nome
  inteiro n1, n2
  real m
  funcao inicio() {



    escreva("Digite o primeiro numero: \n")
    leia(n1)
    escreva("\nDigite o segunedo numero: \n")
    leia(n2)
    m = mat.arredondar( (n1 + n2) / 2, 3)
    escreva("\nA média aritmética entre esse dois numeros é: ",m)

    
  }

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 263; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */