/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ads;

/**
 *
 * @author felip
 */

// Importa as bibliotecas 
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

// Gerencia a conexão com o banco de dados MySQL
public class Conexao {
    public static Connection conectar(){
        
        try{
            // utilizando JDBC(Java Database Connectivity) para conectar ao MySQL
            String url = "jdbc:mysql://localhost:3306/site";// COnexão no banco 'site' porta 3306
            String user = "root";                           // Usuário 'root'
            String password = "root";                       // Senha 'root'
            
            // Executa a requisição
            Connection conn = DriverManager.getConnection(url,user,password);
                System.out.println("Conectado com sucesso!");   // Debug
                return conn;    // Retorna um objeto Connection que será usado pelas outras classes

        } catch(Exception e) {  // Em caso de erro...
            
            e.printStackTrace();// Imprime mensagem 
            return null;        // Retorna null
        }

    }

}
