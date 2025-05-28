/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ads;

/**
 *
 * @author felip
 */

// Importando bibliotecas
import java.sql.*;
import java.util.ArrayList;
import java.util.List;

// Data Access Object para operações no banco de dados
public class PessoaDAO {
    
    private Connection conn = Conexao.conectar();
    
    // CRUD no banco de dados
        public void inserir (Pessoa p) throws SQLException{ // INSERIR
        
            // Adiciona um novo usuário na tabela usuarios
            String sql = "INSERT INTO usuarios (nome,senha) VALUES (?,?)";
            PreparedStatement stmt = conn.prepareStatement(sql);    // Evitando SQL injection
            stmt.setString(1,p.getNome());
            stmt.setString(2, p.getSenha());
            stmt.executeUpdate();       // Update
        
        }
        
        public void autualizar (Pessoa p) throws SQLException{  // AUALIZAR
        
            // Atualiza os dados de um uruário existente
            String sql = "UPDATE usuarios SET nome = ?, senha = ? WHERE id = ?";
            PreparedStatement stmt = conn.prepareStatement(sql);    // Evitando SQL injection
            stmt.setString(1,p.getNome());
            stmt.setString(2, p.getSenha());
            stmt.setInt(3, p.getId());
            stmt.executeUpdate();       // Update
            
        }
        
        public void deletar (int id) throws SQLException{   // DELETAR
        
            // Remove um usuário pelo ID
            String sql = "DELETE FROM usuarios WHERE id = ?";
            PreparedStatement stmt = conn.prepareStatement(sql);    // Evitando SQL injection
            stmt.setInt(1, id);
            stmt.executeUpdate();       // Update
        
        }
        
        public List<Pessoa> Listar() throws SQLException{   // lISTAR
        
            // Inicializa um ArrayList vazio que armazena os objetos Pessoa
            List<Pessoa> lista = new ArrayList<>();

            String sql = "SELECT * FROM usuarios";  // Seleciona todos os usuários da tabela
            Statement stmt = conn.createStatement();// Cria um objeto Statement a partir da conexão ativa (conn)
            ResultSet rs = stmt.executeQuery(sql);  // Objeto que retorna os resutados da consulta em forma tabular
            
            // Loop para leitura avançando para o proximo registro(rs.next()), retorna false quando ão há mais registros
            while(rs.next()){
                
                // Para cada registro

                Pessoa p = new Pessoa();    // Cria um objeto Pessoa

                // Preenche seus atributos com os valores do banco
                    p.setId(rs.getInt("id"));   // Obtém co vlor inteiro da coluna "id"
                    p.setNome(rs.getString("nome"));    // Obtém o valor da string da coluna "nome"
                    p.setSenha(rs.getString("senha"));  // Obtém o valor string da coluna "senha"
                //................................................

                lista.add(p);               // Adiciona o objeto Pessoa à lista

                //...................
            
            }
            
            return lista;   // Retorna a lista com todos os usuários encontrados 
        
        }
    //.......................

}
