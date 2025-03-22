18.Write Ajax program to carry out validation for a username entered in textbox. If the textbox is blank, print ‘Enter username’. If the number of characters is less tha three,print’ Username is too short’. If value entered is appropriate the print ‘Valid username’.
Ans::

(USERNAME.HTML)

<!DOCTYPE html>
<html>
<head>
    <title>Username Validation</title>
    <script>
        function validateUsername() {
            var username = document.getElementById("username").value;
            var xhttp = new XMLHttpRequest();
            xhttp.onreadystatechange = function() {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("result").innerHTML = this.responseText;
                }
            };
            xhttp.open("GET", "validate.php?username=" + username, true);
            xhttp.send();
        }
    </script>
</head>
<body>
    <input type="text" id="username" onkeyup="validateUsername()">
    <p id="result"></p>
</body>
</html>

(VALIDATE.PHP)

<?php
$username = $_GET["username"];
if (empty($username)) {
    echo "Enter username.";
} elseif (strlen($username) < 3) {
    echo "Username is too short.";
} else {
    echo "Valid username.";
}
?>