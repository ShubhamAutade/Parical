10.Write PHP script to generate an XML code in the following format
<?xml version="1.0" encoding="ISO-8859-1" ?>
<CATALOG>
<CD>
<TITLE>Empire Burlesque</TITLE>
<ARTIST>Bob Dylan</ARTIST>
<COUNTRY>USA</COUNTRY>
<COMPANY>Columbia</COMPANY>
<PRICE>10.90</PRICE>
<YEAR>1985</YEAR>
</CD>
</CATALOG>
Save the file with name “CD.xml”.

Ans::

<?php
$xml = new SimpleXMLElement('<CATALOG/>');

$cd = $xml->addChild('CD');
$cd->addChild('TITLE', 'Empire Burlesque');
$cd->addChild('ARTIST', 'Bob Dylan');
$cd->addChild('COUNTRY', 'USA');
$cd->addChild('COMPANY', 'Columbia');
$cd->addChild('PRICE', '10.90');
$cd->addChild('YEAR', '1985');

header('Content-type: text/xml');

echo $xml->asXML();

file_put_contents('CD.xml', $xml->asXML());
?>
