17.Write a php program to convert temperature farenheit to celcius using sticky forms.
And::

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_POST["fahrenheit"]) && is_numeric($_POST["fahrenheit"])) {
        $fahrenheit = $_POST["fahrenheit"];
        $celsius = ($fahrenheit - 32) * (5 / 9);
        echo "<p>" . htmlspecialchars($fahrenheit) . "°F is equal to " . round($celsius, 2) . "°C.</p>";
    } else {
        echo "<p style='color:red;'>Please enter a valid numeric temperature.</p>";
    }
}
?>

<form method="post" action="<?php echo htmlspecialchars($_SERVER['PHP_SELF']); ?>">
    <label>Enter temperature in Fahrenheit:</label>
    <input type="text" name="fahrenheit" required>
    <input type="submit" value="Convert">
</form>
