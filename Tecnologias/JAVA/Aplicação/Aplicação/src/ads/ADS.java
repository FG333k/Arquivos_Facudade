/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package ads;

/**
 *
 * @author felip
 */


// Casse principal que inicia a aplicação
public class ADS {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Conexao conn = new Conexao();   // Cria uma instância da classe Conexao
        conn.conectar();                //Chama o método conectar() paraestabelecer conexão com o banco
    }
}
