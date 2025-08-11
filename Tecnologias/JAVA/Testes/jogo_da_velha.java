import java.util.Scanner;

public class jogo_da_velha {

    // Base usada para reiniciar o tabuleiro editável
    static char BASE_REINICIO[][]={
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    // Tabuleiro editável
    static char tabuleiro[][]={
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    

    // Jogadores
    static int p1, p2;
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        char peca[]={'X', 'O'}, escolhaPeca, jogador1='\0', jogador2='\0', escolhaReinicio;
        boolean loopJogo=true, LoopPrincipal=true;

        do{
            resetTabuleiro();
            atualizarJogo();

            if (jogador1 == '\0') {
                // Atribuição de peças aos jogadores
                do{
                    System.out.print("\nJogador 1 [X ou O]: ");
                    escolhaPeca = scanner.next().toUpperCase().charAt(0);

                    switch (escolhaPeca){
                        case 'X':
                            jogador1 = peca[0];
                            jogador2 = peca[1];    
                            break;
                        case 'O':
                            jogador1 = peca[1];
                            jogador2 = peca[0];
                        default:
                            System.out.println("Opcao invalida. Tente novamente!!!");
                            throw new AssertionError();
                    }

                }while(jogador1 == '\0');
            }

            int contTurn=0, linha, coluna, ganhador;
            char vez;
            boolean loop=true;

            while(loop){

                // Contador de turnos
                if(contTurn%2 == 0){
                    vez = jogador1;
                }else{
                    vez = jogador2;
                }
                contTurn++;

                // Loop para excolha das possições
                boolean loopPosicao=true;
                while(loopPosicao){
                    
                    System.out.println("Eschola a posicao");
                    System.out.print("LINHA: ");
                    linha = scanner.nextInt();
                    System.out.print("COLUNA: ");
                    coluna = scanner.nextInt();

                    // Verificação das posições possíveis
                    if(((linha <= 3) && (linha > 0 ) || (coluna <= 3) && (coluna > 0))){
                        
                        if(marcacao(linha-1,coluna-1,vez)){
                            loopPosicao = false;
                        }else{
                            System.out.println("\nPosicao inalida, tente novamente.");
                        }
                    }else{
                        System.out.println("\n Posicao linha/coluna nao existe.");
                    }
                }

                // Identificador do ganhador
                if(vez == jogador1){
                    ganhador = 1;
                }else{
                    ganhador = 2;
                }

                atualizarJogo();

                // Marcação de ponto e verificação de empate
                if (verificacaoVitoria(vez)){

                    if(ganhador == 1){
                        p1++;
                    }else{
                        p2++;
                    }

                    atualizarJogo();

                    System.out.println("\nParabens jogador " + ganhador + ", voce ganhou com " + vez);

                    loop = false;

                }else if(contTurn == 9){

                    atualizarJogo();

                    System.out.println("\nEmpate!");
                    loop = false;
                }
            }

            do { 
                System.err.print("Deseja recolmecar? [S-sim / N-nao]:");
                escolhaReinicio = scanner.next().toUpperCase().charAt(0);

                if(escolhaReinicio == 'N'){
                    loopJogo = false;
                    LoopPrincipal = false;

                }else if(escolhaReinicio == 'S'){
                    loopJogo = false;
                }else{
                    System.err.println("|\nOpcao invalida. Tenete novamente.");
                }

            } while (loopJogo);

        }while(LoopPrincipal);
        
    }

    //Função para atualizar o jogo
    public static void atualizarJogo(){
        limparTela();

        // Tabela de pontos
        System.out.println("\n    ====JOGO DA VELHA====");
        System.out.println("\n 1 Jogador: " + p1 + "  |  2 Jogador: " + p2);

        // Exibição do tabuleiro
        System.out.println("");
        System.out.println("\t1    2    3\n");
        for (int i=0;i<3;i++){
            System.out.print("    "+ (i+1)+ "   ");
            for (int j=0;j<3;j++){
                System.out.print(tabuleiro[i][j]);

                if (j < 2) {
                    System.out.print(" || ");
                }
            }
            System.out.print("\n       ");
            if (i < 2) {
                System.out.println("=============");
            }
        }
        System.out.println("");
    }

    // Reset do tabuleiro
    public static void resetTabuleiro(){
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                tabuleiro[i][j] = BASE_REINICIO[i][j];
            }
        }
    }

    // Função para limpar a tela 
    public static void limparTela(){
        System.out.print("\033[H\033[2J");  
        System.out.flush();  
    }

    public static boolean marcacao(int linha, int coluna, char jogador){
        if(tabuleiro[linha][coluna] == ' '){
            tabuleiro[linha][coluna] = jogador;
            return true;
        }
        return false;
    }

    // Verifica a vitoria dos jogadores
    public static boolean verificacaoVitoria(char vez){
        for(int i=0;i<3;i++){
            if((tabuleiro[i][0] == vez) && (tabuleiro[i][1] == vez) && (tabuleiro[i][2]) == vez){
                return true;
            }
        }

        for(int i=0;i<3;i++){
            if((tabuleiro[0][i] == vez) && (tabuleiro[1][i] == vez) && (tabuleiro[2][i]) == vez){
                return true;
            }
        }

        if((tabuleiro[0][0] == vez) && (tabuleiro[1][1] == vez) && (tabuleiro[2][2]) == vez){
            return true;
        }else if((tabuleiro[0][2] == vez) && (tabuleiro[1][1] == vez) && (tabuleiro[2][0]) == vez){
            return true;
        }

        return false;
    }
}