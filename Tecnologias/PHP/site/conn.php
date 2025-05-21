<?php 
$host = 'localhost';
$usuario = 'root';
$senha = 'root';
$banco = 'site';


$conexao = mysqli_connect($host, $usuario, $senha, $banco);

if (!$conexao){
    die("Errou: ".mysqli_connect_error());
}
echo "Conectado!";





?>