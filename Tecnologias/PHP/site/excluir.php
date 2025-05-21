<?php
require 'conn.php';

// Pega o ID da URL
$id = filter_input(INPUT_GET, 'id');

// Se o ID existir, deleta o usuário
if ($id){
    $sql = "DELETE  FROM usuarios WHERE id = '$id'";
    $result = mysqli_query($conexao,$sql);
}

// Redireciona e volta para a principal.php
header("Location: principal.php");
exit;
?>