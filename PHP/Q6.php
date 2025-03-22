6.Write a XML program which shows how you can easily read and display the contents of an XML document using SimpleXML .
Ans::

<?php
$xml = <<<XML
<books>
    <book>
        <title>PHP Basics</title>
        <author>John Doe</author>
        <year>2021</year>
    </book>
    <book>
        <title>Advanced PHP</title>
        <author>Jane Doe</author>
        <year>2022</year>
    </book>
</books>
XML;
$books = simplexml_load_string($xml);
foreach ($books->book as $book) {
    echo "Title: " . $book->title . "<br>";
    echo "Author: " . $book->author . "<br>";
    echo "Year: " . $book->year . "<br><br>";
}
?>