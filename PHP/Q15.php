15.Create an application that reads “book.xml” file into simple XML object. Display attributes and elements (Hint:simple_xml_load_file() function) .
Ans::

<?php
$books = simplexml_load_file('book.xml');

foreach ($books->book as $book) {
    echo "Book Code: " . $book->bookcode . "<br>";
    echo "Book Name: " . $book->bookname . "<br>";
    echo "Author: " . $book->author . "<br>";
    echo "Year: " . $book->year . "<br>";
    echo "Price: " . $book->price . "<br><br>";
}
?>