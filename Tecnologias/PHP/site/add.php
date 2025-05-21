<?php 
require 'conn.php';

// Filtra dados recebidos 
$nome = filter_input(INPUT_POST, 'nome');
$senha = filter_input(INPUT_POST, 'senha');

// Se nome e senha existirem, insere no banco
if ($nome && $senha){

    $sql = "INSERT INTO usuarios (nome, senha) VALUES ('$nome','$senha')";

    $result = mysqli_query($conexao,$sql);
    header("Location: principal.php");  // Redireciona com suscesso 
    
}else{
    header("Location: adicionar.php");  // Volta se falhar 
}
?>