<?php
 
function right($string, $n)
{
      $balik = strrev($string);
      $hasil = strrev(substr($balik, 0, $n));
      return $hasil;
}
 
echo right("banananana", 6);
 
?>