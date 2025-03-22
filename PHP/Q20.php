20.Write a php script using ajax concept to check user name and password are valid or invalid.
Ans::

(VALIDATION.HTML)
<!DOCTYPE html>
<html>
<head>
    <title>Login Validation</title>
    <script>
        function validateLogin() {
            var username = document.getElementById("username").value;
            var password = document.getElementById("password").value;
            var xhttp = new XMLHttpRequest();
            xhttp.onreadystatechange = function() {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("result").innerHTML = this.responseText;
                }
            };
            xhttp.open("GET", "validate_login.php?username=" + username + "&password=" + password, true);
            xhttp.send();
        }
    </script>
</head>
<body>
    <input type="text" id="username" placeholder="Username">
    <input type="password" id="password" placeholder="Password">
    <button onclick="validateLogin()">Login</button>
    <p id="result"></p>
</body>
</html>

(VALIDATE_LOGIN.PHP)

<?php
$username = $_GET["username"];
$password = $_GET["password"];

if ($username == "admin" && $password == "password") {
    echo "Valid username and password.";
} else {
    echo "Invalid username or password.";
}
?>