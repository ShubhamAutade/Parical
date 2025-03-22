3.Write a PHP program to create class circle having radius data member and two member functions find_circumfernce () and find_area() . Display area and Circumference depending on user’s preference.
Ans::

<?php
class Circle {
    private $radius;
    public function __construct($radius) {
        $this->radius = $radius;
    }
    public function find_circumference() {
        return 2 * M_PI * $this->radius;
    }
    public function find_area() {
        return M_PI * $this->radius * $this->radius;
    }
}
$radius = 7; // Example radius
$circle = new Circle($radius);
echo "Circumference: " . $circle->find_circumference() . "<br>";
echo "Area: " . $circle->find_area() . "<br>";
?>