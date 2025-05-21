<?php 
require 'conn.php';

$nome = filter_input(INPUT_POST, 'nome');
$senha = filter_input(INPUT_POST, 'senha');

if ($nome && $senha){

    $sql = "INSERT INTO usuarios (nome, senha) VALUES ('$nome','$senha')";

    $result = mysqli_query($conexao,$sql);
    header("Location: principal.php");
    

}else{
    header("Location: adicionar.php");

}

?>