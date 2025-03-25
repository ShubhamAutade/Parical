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

(BOOK.XML)

<?xml version="1.0" encoding="UTF-8"?>
<books>
    <book>
        <bookcode>101</bookcode>
        <bookname>The Great Gatsby</bookname>
        <author>F. Scott Fitzgerald</author>
        <year>1925</year>
        <price>10.99</price>
    </book>
    <book>
        <bookcode>102</bookcode>
        <bookname>To Kill a Mockingbird</bookname>
        <author>Harper Lee</author>
        <year>1960</year>
        <price>7.99</price>
    </book>
    <book>
        <bookcode>103</bookcode>
        <bookname>1984</bookname>
        <author>George Orwell</author>
        <year>1949</year>
        <price>8.99</price>
    </book>
</books>
