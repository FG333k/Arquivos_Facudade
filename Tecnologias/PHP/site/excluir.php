<?php
require 'conn.php';

$id = filter_input(INPUT_GET, 'id');

if ($id){
    $sql = "DELETE  FROM usuarios WHERE id = '$id'";
    $result = mysqli_query($conexao,$sql);

}
header("Location: principal.php");
exit;



?>