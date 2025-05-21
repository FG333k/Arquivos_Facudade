<?php
require 'conn.php';

	$lista = [];

	$sql = "SELECT * FROM usuarios";

	$result = mysqli_query($conexao,$sql);

	if (mysqli_num_rows($result) > 0){

		while ($linha = mysqli_fetch_assoc($result)) {
			$lista[] = $linha;
		
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

<table border="1" width="100%">
<tr>
<th>ID</th>
<th>NOME</th>
<th>SENHA</th>
</tr>

<tr>  

<?php foreach ($lista as $dados): ?>

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

<button><a href="index.php">SAIR</a></button>	
<button><a name="add" href="adicionar.php">ADCIONAR</a></button>	

</div>
</body>
</html>

