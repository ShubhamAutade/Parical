14.Create a XML file which gives details of movies available in “Mayanagari CD Store” from
following categories
a) Classical
b) Action
c) Horror
Elements in each category are in the following format
<Category>
<Movie Name>----</Movie Name>
<Release Year>----</Release Year>
</Category>
Save the file with name “movies.xml”.
Ans::

<?php
$xml = new SimpleXMLElement('<movies/>');

$classical = $xml->addChild('Category');
$classical->addChild('Movie Name', 'The Godfather');
$classical->addChild('Release Year', '1972');

$action = $xml->addChild('Category');
$action->addChild('Movie Name', 'Die Hard');
$action->addChild('Release Year', '1988');

$horror = $xml->addChild('Category');
$horror->addChild('Movie Name', 'The Exorcist');
$horror->addChild('Release Year', '1973');

header('Content-type: text/xml');
echo $xml->asXML();
file_put_contents('movies.xml', $xml->asXML());
?>