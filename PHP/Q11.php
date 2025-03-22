11.Write PHP script to generate an XML code in the following format
<?xml version="1.0" encoding="ISO-8859-1" ?>
<CATALOG>
<PLANT>
<BOTANICAL>Sanguinaria canadensis</BOTANICAL>
<ZONE>4</ZONE>
<LIGHT>Mostly Shady</LIGHT>
<PRICE>$2.44</PRICE>
<AVAILABILITY>031599</AVAILABILITY></PLANT></CATAOG>
Save the file with name “plant.xml”.
Ans::

<?php
$xml = new SimpleXMLElement('<?xml version="1.0" encoding="ISO-8859-1"?><CATALOG/>');

$plant = $xml->addChild('PLANT');
$plant->addChild('BOTANICAL', 'Sanguinaria canadensis');
$plant->addChild('ZONE', '4');
$plant->addChild('LIGHT', 'Mostly Shady');
$plant->addChild('PRICE', '$2.44');
$plant->addChild('AVAILABILITY', '031599');

header('Content-type: text/xml');
echo $xml->asXML();
file_put_contents('plant.xml', $xml->asXML());
?>
