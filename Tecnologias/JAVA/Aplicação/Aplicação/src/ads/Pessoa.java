/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ads;

/**
 *
 * @author felip
 */


// Modelo de dados para representar um usuário
public class Pessoa {

    // Atributos 
    private int id;         // Identificador único (chave primária)
    private String nome;    // Nome do usuário
    private String senha;   // Senha do usuário
    
    // Construtores
    public Pessoa(){}       // Vazio
    public Pessoa(String nome, String senha){
        this.nome = nome;
        this.senha = senha;
    }

    // Getters e Setters para todos ors atributos 
        public int getId() {
            return id;
        }

        public void setId(int id) {
            this.id = id;
        }

        public String getNome() {
            return nome;
        }

        public void setNome(String nome) {
            this.nome = nome;
        }

        public String getSenha() {
            return senha;
        }

        public void setSenha(String senha) {
            this.senha = senha;
        }
    //...........................................
    
}
