<?php
require 'conn.php';

$info = [];		// Array para dados de usuários
$id = filter_input(INPUT_GET, 'id');	// Pega o ID da URL

// Se o ID existir, busca o usuário
if ($id){
	$sql = "SELECT * FROM usuarios WHERE id = '$id'";
    $result = mysqli_query($conexao,$sql);

	if (mysqli_num_rows($result) > 0){
		$info = mysqli_fetch_assoc($result);	// Armazen os dados 

	}else{
		header("Location: principal.php");		// Se nao existir, volta
	}
}else{
	header("Location: principal.php");			// Se não houver ID, volta
}
?>



<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" type="text/css" href="estilo.css">
	<title>adcionar</title>
</head>
<body>

<div class="formulario">

<!-- Formulário preenchido dom os dados do usuário -->
<form method="post" action="edit.php">
	<input type="hidden" name="id" value="<?=$info['id'];?>">
	<label>Nome:<br/><input type="tetx" name="nome" value="<?=$info['nome'];?>"></label>
	<br/><br/>
	<label>Senha:<br/><input type="password" name="senha" value="<?=$info['senha'];?>"></label>
	<br/><br/>
	<input type="submit" value="Salvar">
	<button><a href="principal.php">VOLTAR</a></button>
</form>

</div>
</body>
</html>