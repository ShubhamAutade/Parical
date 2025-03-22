4.Write a PHP Script to display Server information in table format (Use $_SERVER).
Ans::

<?php
echo "<table border='1'>";
echo "<tr><th>Key</th><th>Value</th></tr>";
foreach ($_SERVER as $key => $value) {
    echo "<tr><td>$key</td><td>$value</td></tr>";
}
echo "</table>";
?>