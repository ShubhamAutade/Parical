5.Write a PHP script to Design a form to accept a number from the user to check whether number is palindrome or not. 
(Use the concept of self processing page)
Ans::

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $number = $_POST["number"];
    $reverse = strrev($number);
    if ($number == $reverse) {
        echo "$number is a palindrome.";
    } else {
        echo "$number is not a palindrome.";
    }
}
?>
<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter a number: <input type="text" name="number">
    <input type="submit" value="Check">
</form>