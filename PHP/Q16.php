16.Write a php script to create class shape and its sub class triangle,square,circle and display area of selected shape.(use of Inheritance).
Ans::

<?php
class Shape {
    public function area() {
        return 0;
    }
}

class Triangle extends Shape {
    private $base;
    private $height;

    public function __construct($base, $height) {
        $this->base = $base;
        $this->height = $height;
    }

    public function area() {
        return 0.5 * $this->base * $this->height;
    }
}

class Square extends Shape {
    private $side;

    public function __construct($side) {
        $this->side = $side;
    }

    public function area() {
        return $this->side * $this->side;
    }
}

class Circle extends Shape {
    private $radius;

    public function __construct($radius) {
        $this->radius = $radius;
    }

    public function area() {
        return M_PI * $this->radius * $this->radius;
    }
}

$triangle = new Triangle(5, 10);
$square = new Square(5);
$circle = new Circle(5);

echo "Area of Triangle: " . $triangle->area() . "<br>";
echo "Area of Square: " . $square->area() . "<br>";
echo "Area of Circle: " . $circle->area() . "<br>";
?>