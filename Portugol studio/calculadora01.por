programa
{
    funcao inicio()
    {
        cadeia Ex, resp, Rd, N
        real N1, N2, V, Re
        
        repita
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
            escreva("| [^] Para exponenciar |\n")
            escreva("========================\n")
            escreva("==> ")
            leia(Ex)
            
            limpa_tela()
            
            repita
            {
                escolha Ex
                {
                    caso "+":
                        escreva("=======================\n")
                        escreva("|        SOMA         |\n")
                        escreva("=======================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = N1 + N2
                        escreva("==[ ", N1, " + ", N2, " = ", V, " ]\n")
                        
                    caso "-":
                        escreva("=======================\n")
                        escreva("|     SUBTRAÇÃO       |\n")
                        escreva("=======================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = N1 - N2
                        escreva("==[ ", N1, " - ", N2, " = ", V, " ]\n")
                        
                    caso "X", "x":
                        escreva("=============================\n")
                        escreva("|    MULTIPLICAÇÃO         |\n")
                        escreva("=============================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = N1 * N2
                        escreva("==[ ", N1, " x ", N2, " = ", V, " ]\n")
                        
                    caso "/":
                        escreva("=================\n")
                        escreva("|    DIVISÃO    |\n")
                        escreva("=================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        escreva("[C] Divisão Completa\n")
                        escreva("[R] Divisão C/ Resto\n")
                        escreva("==> ")
                        leia(Rd)
                        
                        escolha Rd
                        {
                            caso "c", "C":
                                V = N1 / N2
                                escreva("==[ ", N1, " / ", N2, " = ", V, " ]\n")
                            
                            caso "r", "R":
                                V = trunc(N1 / N2)
                                Re = N1 mod N2
                                escreva("==[ ", N1, " / ", N2, " = ", V, " ]\n")
                                escreva("==[ Resto: ", Re, " ]\n")
                            
                            caso contrario:
                                escreva("Opção inválida! Escolha 'C' ou 'R'.\n")
                        }
                        
                    caso "^":
                        escreva("=============================\n")
                        escreva("|       POTENCIAÇÃO         |\n")
                        escreva("=============================\n")
                        escreva("1° Numero: ")
                        leia(N1)
                        escreva("2° Numero: ")
                        leia(N2)
                        
                        V = potencia(N1, N2)
                        escreva("==[ ", N1, " ^ ", N2, " = ", V, " ]\n")
                    
                    caso contrario:
                        escreva("Opção inválida! Escolha uma operação válida.\n")
                }
                
                escreva("NOVAMENTE? [SIM=> ENTER / N]: ")
                leia(N)
                limpa_tela()
                
            } enquanto (N != "n" e N != "N")
            
            escreva("==============================\n")
            escreva("|     DESEJA CONTINUAR?      |\n")
            escreva("==============================\n")
            escreva("| [ENTER] Para voltar ao início |\n")
            escreva("| [N] Para sair                 |\n")
            escreva("==> ")
            leia(resp)
            
            limpa_tela()
            
        } enquanto (resp != "n" e resp != "N")
    }
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 127; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */