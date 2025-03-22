7.Write a script to create “Company.xml” file with multiple elements as shown below:
<CemployeeTeam>
<Team Name=”Red”>
<Ename> </ Ename >
<Eexperience> </ Eexperience >
<Emobno> </ Emobno >
<Eaddress> _______</Eaddress>
</Team>
</CemployeeTeam>
Ans::

<?php
$xml = new SimpleXMLElement('<CemployeeTeam/>');
$team = $xml->addChild('Team');
$team->addAttribute('Name', 'Red');
$team->addChild('Ename', 'John Doe');
$team->addChild('Eexperience', '5 years');
$team->addChild('Emobno', '1234567890');
$team->addChild('Eaddress', '123 Main St');
header('Content-type: text/xml');
echo $xml->asXML();
file_put_contents('Company.xml', $xml->asXML());
?>