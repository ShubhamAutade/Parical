17.Write a php program to convert temperature farenheit to celcius using sticky forms.
And::

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $fahrenheit = $_POST["fahrenheit"];
    $celsius = ($fahrenheit - 32) * (5 / 9);
    echo "$fahrenheit°F is equal to $celsius°C.";
}
?>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter temperature in Fahrenheit: <input type="text" name="fahrenheit">
    <input type="submit" value="Convert">
</form>