

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
	
<form method="POST" action="add.php">	<!-- envia dados para add.php -->
	<label>NOME</label><br>
	<input type="text" name="nome" placeholder="Digite um nome."><br><br>
	<label>SENHA</label><br>
	<input type="password" name="senha" placeholder="Digite uma senha."><br><br>
	<input type="submit" value="Adcionar" name="adc">
	<button><a href="principal.php">VOLTAR</a></button>
</form>
</div>
</body>
</html>