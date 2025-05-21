<?php
require 'conn.php';

// Filtra os dados recebidos
$nome = filter_input(INPUT_POST, 'nome');
$senha = filter_input(INPUT_POST, 'senha');
$id = filter_input(INPUT_POST, 'id');

// Se todos od campos existirem, tualiza
if ($id && $nome && $senha){
    $sql = "UPDATE usuarios set nome = '$nome' , senha = '$senha' where id = '$id'";

    $result = mysqli_query($conexao,$sql);
    header("Location: principal.php");  // Redireciona se sucesso
    exit;

}else{
    header("Location: adicionar.php");
}
?>