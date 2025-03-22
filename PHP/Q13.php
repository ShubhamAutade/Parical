13.Write a script to create “breakfast.xml” file with multiple elements as shown below:
<breakfast_menu>
<food>
<name>French Fries</name>
<price>Rs45</price>
<description>Young youths are very much intrested to eat it </description>
<calories>650</calories>
</food>
</breakfast_menu>
Write a script to add multiple elements in “breakfast.xml” file of category, Juice.
Ans::


<?php
$xml = new SimpleXMLElement('<breakfast_menu/>');

$food = $xml->addChild('food');
$food->addChild('name', 'French Fries');
$food->addChild('price', 'Rs45');
$food->addChild('description', 'Young youths are very much interested to eat it');
$food->addChild('calories', '650');

header('Content-type: text/xml');
echo $xml->asXML();
file_put_contents('breakfast.xml', $xml->asXML());
?>