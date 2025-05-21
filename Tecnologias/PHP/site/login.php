<?php

// Filtra os dados recebidos do formulário
$nome = filter_input(INPUT_POST, 'nome');   // Pega o 'nome' do POST
$senha = filter_input(INPUT_POST, 'senha'); // Pega 'senha' do POST

// Verifica se os campos estão vazios 
if (!empty($_POST['nome']) && !empty($_POST['senha']) ) {
    require 'conn.php';         // Inclui a conexao com o banco

    // Atribui os valores
    $nome = $_POST['nome'];
    $senha = $_POST['senha'];

    // Consulta SQL 
    $sql = "SELECT * FROM usuarios WHERE nome = '$nome' AND senha = '$senha'";

    // Execulta uma query
    $result = mysqli_query($conexao,$sql);

    // Se encontrar um registo redireciona para principal.php
    if (mysqli_num_rows($result) > 0) {
        header("Location: principal.php");
    
    }else{
        // Se não encontrar volta para index.php
        header("Location: index.php");

    }
}else{

    // Se campos vazios, volta para index.php
    header("Location: index.php");
}
?>