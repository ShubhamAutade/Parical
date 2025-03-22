2.Create Class Collge and Class Department as base class and derived class respectively , Create one more class as Faculty to display it’s detail information.( Use the concept of interface)
Ans::

<?php
interface DisplayInfo {
    public function display();
}
class College implements DisplayInfo {
    private $name;
    public function __construct($name) {
        $this->name = $name;
    }
    public function display() {
        echo "College Name: " . $this->name . "<br>";
    }
}
class Department implements DisplayInfo {
    private $name;
    public function __construct($name) {
        $this->name = $name;
    }
    public function display() {
        echo "Department Name: " . $this->name . "<br>";
    }
}
class Faculty implements DisplayInfo {
    private $name;
    public function __construct($name) {
        $this->name = $name;
    }
    public function display() {
        echo "Faculty Name: " . $this->name . "<br>";
    }
}
$college = new College("ABC College");
$department = new Department("Computer Science");
$faculty = new Faculty("Dr. John Doe");
$college->display();
$department->display();
$faculty->display();
?>