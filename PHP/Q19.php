19.Write ajax program to read a text file and print the contents of the file when the user clicks o the print button.
Ans::

(READFILE.HTML)

<!DOCTYPE html>
<html>
<head>
    <title>Read Text File</title>
    <script>
        function readFile() {
            var xhttp = new XMLHttpRequest();
            xhttp.onreadystatechange = function() {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("content").innerHTML = this.responseText;
                }
            };
            xhttp.open("GET", "readfile.php", true);
            xhttp.send();
        }
    </script>
</head>
<body>
    <button onclick="readFile()">Print File Content</button>
    <p id="content"></p>
</body>
</html>

(READFILE.PHP)

<?php
echo file_get_contents("example.txt");
?>