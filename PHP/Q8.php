8.Write a PHP Script to read book.XML and print book details in tabular format using simple XML.(Content of book.XML are (bookcode , bookname , author , year , price).
Ans::

<?php
$books = simplexml_load_file('book.xml');
echo "<table border='1'>";
echo "<tr><th>Book Code</th><th>Book Name</th><th>Author</th><th>Year</th><th>Price</th></tr>";
foreach ($books->book as $book) {
    echo "<tr>";
    echo "<td>" . $book->bookcode . "</td>";
    echo "<td>" . $book->bookname . "</td>";
    echo "<td>" . $book->author . "</td>";
    echo "<td>" . $book->year . "</td>";
    echo "<td>" . $book->price . "</td>";
    echo "</tr>";
}
echo "</table>";
?>