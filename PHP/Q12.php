12.Write a script to create “cricket.xml” file with multiple elements as shown below:
<CricketTeam>
<Team country=”India”>
<player> </player>
<runs> </runs>
<wicket> </wicket>
</Team>
</CricketTeam>
Write a script to add multiple elements in “cricket.xml” file of category, country=”Australia”.
Ans::

<?php
$xml = new SimpleXMLElement('<CricketTeam/>');

$team = $xml->addChild('Team');
$team->addAttribute('country', 'India');
$team->addChild('player', 'Virat Kohli');
$team->addChild('runs', '12000');
$team->addChild('wicket', '0');

header('Content-type: text/xml');
echo $xml->asXML();
file_put_contents('cricket.xml', $xml->asXML());
?>
