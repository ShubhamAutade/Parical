9.Write a PHP script to create XML file named “Course.xml”
<Course>
<SYBBA CA>
<Student name> ......</Student name>
<Class name>..... </Class name>
<percentage>.... </percentage>
</SYBBA CA>
</Course>
Store the details of 5 students who are in SYBBACA.
Ans::

<?php
$xml = new SimpleXMLElement('<Course/>');
$sybbaca = $xml->addChild('SYBBA CA');
$sybbaca->addChild('Student name', 'Alice');
$sybbaca->addChild('Class name', 'SYBBA CA');
$sybbaca->addChild('percentage', '85');
header('Content-type: text/xml');
echo $xml->asXML();
file_put_contents('Course.xml', $xml->asXML());
?>
