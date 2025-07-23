#ifndef SALVAR_H
#define SALVAR_H


// Struct para receber os atributos de usu´┐¢rio
struct usuarios{
    int id;         // Identificador num´┐¢rico
    char email[20]; // Email do usu´┐¢rio
    char senha[20]; // Senha do usu´┐¢rio
};

// Vari´┐¢veis globais
char lista_usuarios_l[256]; // Vetor usado para receber o texto do arquivo
FILE *f_txt;                // Variav´┐¢l do tipo conteiro para o acesso do arquivo
struct usuarios usr;        // Atribui´┐¢´┐¢o da variavel a struct

// Prot´┐¢tipos das func├º├Áes
void listar_usuarios();
void cadastrar();

#endif