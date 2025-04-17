programa
{	
    funcao inicio()
    {
        caracter Ex, resp, Rd, N
        real N1, N2, V, Re
        
        faca
        {
            escreva("========================\n")
            escreva("|      CALCULADORA     |\n")
            escreva("========================\n")
            escreva("|  ESCOLHA A EXPRESSÃO |\n")
            escreva("========================\n")
            escreva("| [+] Para somar       |\n")
            escreva("| [-] Para subtrair    |\n")
            escreva("| [X] Para multiplicar |\n")
            escreva("| [/] Para dividir     |\n")
           // escreva("| [^] Para exponenciar |\n")
            escreva("========================\n")
            escreva("==> ")
            leia(Ex)
            
            limpa()
            
            faca
            {
                escolha (Ex)
                {
                    caso '+':
                        escreva("=======================\n")
                        escreva("|        SOMA         |\n")
                        escreva("=======================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = N1 + N2
                        escreva("==[ ", N1, " + ", N2, " = ", V, " ]\n")
                        
                        pare
                        
                    caso '-':
                        escreva("=======================\n")
                        escreva("|     SUBTRAÇÃO       |\n")
                        escreva("=======================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = N1 - N2
                        escreva("==[ ", N1, " - ", N2, " = ", V, " ]\n")

                        pare
                        
                    caso 'x':
                        escreva("=============================\n")
                        escreva("|    MULTIPLICAÇÃO         |\n")
                        escreva("=============================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = N1 * N2
                        escreva("==[ ", N1, " x ", N2, " = ", V, " ]\n")

                        pare
                        
                    caso '/':
                        escreva("=================\n")
                        escreva("|    DIVISÃO    |\n")
                        escreva("=================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        //escreva("\n|Divisão completa [ C ]\n")
                        //escreva("\n|Divisão inteira  [ I ]\n")
                        //leia(dvc)

                        //escolha(dvc){

                        	//caso'c' ou 'C':
                        	
					//	V = N1 / N2
                        	//	escreva("==[ ", N1, " / ", N2, " = ", V, " ]\n")

         				//caso'i' ou 'I':

         				//	V = (N1  N2)
                         //   Re = (N1 % N2)
                        	//}
                       
                        

                        pare
                        
                    //caso '^':
                        //escreva("=============================\n")
                        //escreva("|       POTENCIAÇÃO         |\n")
                        //escreva("=============================\n")
                        //escreva("1° Numero: ")
                        //leia(N1)
                        //escreva("2° Numero: ")
                        //leia(N2)
                        
                        //V = exp(N1 * log(N2))
                        //escreva("==[ ", N1, " ^ ", N2, " = ", V, " ]\n")

                        //pare
                    
                    caso contrario:
                        escreva("Opção inválida! Escolha uma operação válida.\n")
                }
                
                escreva("NOVAMENTE? [SIM=> S / NÃO=> N]: ")
                leia(N)
                limpa()
                
            } enquanto (N != 'n' e N != 'N')
            
            escreva("==============================\n")
            escreva("|     DESEJA CONTINUAR?      |\n")
            escreva("==============================\n")
            escreva("| [S] Para voltar ao início |\n")
            escreva("| [N] Para sair                 |\n")
            escreva("==> ")
            leia(resp)
            
            limpa()
            
        } enquanto (resp != 'n' e resp != 'N')
    }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 3445; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */