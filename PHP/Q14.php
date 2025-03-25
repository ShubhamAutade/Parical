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

$classical = $xml->addChild('Classical');
$movie1 = $classical->addChild('Movie');
$movie1->addChild('MovieName', 'The Godfather');
$movie1->addChild('ReleaseYear', '1972');

$action = $xml->addChild('Action');
$movie2 = $action->addChild('Movie');
$movie2->addChild('MovieName', 'Die Hard');
$movie2->addChild('ReleaseYear', '1988');

$horror = $xml->addChild('Horror');
$movie3 = $horror->addChild('Movie');
$movie3->addChild('MovieName', 'The Exorcist');
$movie3->addChild('ReleaseYear', '1973');

header('Content-type: text/xml');
echo $xml->asXML();

file_put_contents('movies.xml', $xml->asXML());
?>
