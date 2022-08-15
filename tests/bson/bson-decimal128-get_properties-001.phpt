--TEST--
MongoDB\BSON\Decimal128 get_properties handler (get_object_vars)
--FILE--
<?php

$decimal = new MongoDB\BSON\Decimal128('1234.5678');

var_dump(get_object_vars($decimal));

?>
===DONE===
<?php exit(0); ?>
--EXPECT--
array(1) {
  ["dec"]=>
  string(9) "1234.5678"
}
===DONE===
