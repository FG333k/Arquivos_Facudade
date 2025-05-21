<?php 
$host = 'localhost';    // Servidor onde o MySQL está rodando
$usuario = 'root';      // Usuário do banco de dados
$senha = 'root';        // Senha do banco
$banco = 'site';        // Nome do banco de dados

// Tenta conectar ao MySQL 
$conexao = mysqli_connect($host, $usuario, $senha, $banco);

// Verificação se houve erro na conexão
if (!$conexao){
    die("Errou: ".mysqli_connect_error());  // Mata o script e mostra o erro
}
echo "Conectado!";      // Confirmação
?>