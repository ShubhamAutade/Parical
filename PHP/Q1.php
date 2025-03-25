1.Define an interface which has methods area( ), volume( ). Define constant PI. Create a class cylinder which implements this interface and calculate area and volume. (Hint: Use define( ))
Ans::

<?php
interface Shape {
    const PI = 3.14159;
    public function area();
    public function volume();
}

class Cylinder implements Shape {
    private $radius;
    private $height;

    public function __construct($radius, $height) {
        $this->radius = $radius;
        $this->height = $height;
    }

    public function area() {
        return 2 * Shape::PI * $this->radius * ($this->radius + $this->height);
    }

    public function volume() {
        return Shape::PI * $this->radius * $this->radius * $this->height;
    }
}

$cylinder = new Cylinder(5, 10);
echo "Area of Cylinder: " . $cylinder->area() . "<br>";
echo "Volume of Cylinder: " . $cylinder->volume() . "<br>";
?>
