<?php
require 'conn.php';		// Conecta com o banco

$lista = [];		// Array para armazenar usuários

// Query para selecionar todos os usuários
$sql = "SELECT * FROM usuarios";
$result = mysqli_query($conexao,$sql);

// Se houver registros, armazenar em $lista
if (mysqli_num_rows($result) > 0){

	while ($linha = mysqli_fetch_assoc($result)) {
		$lista[] = $linha;	// Adiciona cada linha ao array
	}
}
?>


<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="estilo.css">
	<meta charset="utf-8">
	<title></title>
</head>
<body>
<div class="principal">

<!-- Tabela HTML que lista os usuários -->
<table border="1" width="100%">
	<tr>
		<th>ID</th>
		<th>NOME</th>
		<th>SENHA</th>
	</tr>
	<?php foreach ($lista as $dados): ?>
	<tr>  
		<td><?=$dados['id'];?></td>
		<td><?=$dados['nome'];?></td>
		<td><?=$dados['senha'];?></td>
		<td>
			<a href="editar.php?id=<?=$dados['id'];?>">EDITAR</a>
			<a href="excluir.php?id=<?=$dados['id'];?>"
			onclick="return confirm('Certeza?')">EXCLUIR</a>
		</td>
	</tr>
	<?php endforeach; ?>
</table>

<!-- Botões para sair ou adicionar usuário-->
<button><a href="index.php">SAIR</a></button>	
<button><a name="add" href="adicionar.php">ADCIONAR</a></button>	

</div>
</body>
</html>

