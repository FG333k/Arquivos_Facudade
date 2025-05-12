programa
{
	const real pop = 90.0, lux = 150.0
	real dia, km, vdia, vkm, valort
	caracter tip
	funcao inicio()
	{
		escreva("Qual o tipo de carro?(p-popular, l-luxo): ")
		leia(tip)
		escreva("Quantos dias de aluguel?: ")
		leia(dia)
		escreva("Quantos KMs foram percorridos: ")
		leia(km)

		escolha(tip){

			caso 'p':

				vdia = (pop * dia)
				se(km <= 100){

					vkm = (km * 0.20)
					
					}senao{

						vkm = (km * 0.10)
						
						}

				valort = (vdia + vkm)
				escreva("o valor a ser pago será de ", valort)
				pare

			caso 'l':

				vdia = (lux * dia)
				se(km <= 200){

					vkm = (km * 0.30)
					
					}senao{

						vkm = (km * 0.25)
						
						}

				valort = (vdia + vkm)
				escreva("o valor a ser pago será de ", valort)
				pare
				
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 776; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */