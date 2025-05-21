<?php
$nome = filter_input(INPUT_POST, 'nome');
$senha = filter_input(INPUT_POST, 'senha');

if (!empty($_POST['nome']) && !empty($_POST['senha']) ) {
    require 'conn.php';

    $nome = $_POST['nome'];
    $senha = $_POST['senha'];

    $sql = "SELECT * FROM usuarios WHERE nome = '$nome' AND senha = '$senha'";

    $result = mysqli_query($conexao,$sql);

    if (mysqli_num_rows($result) > 0) {
        header("Location: principal.php");
    

    }else{
        header("Location: index.php");

    }

}else{

header("Location: index.php");

}

?>