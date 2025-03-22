13. Write a C++ program to create two Classes Square and Rectangle. Compare area of both the 
shapes using friend function. Accept appropriate data members for both the classes.  
Ans::

#include<iostream.h>
#include<conio.h>
class Rectangle;
class Square {
    float side;
public:
    Square(float s) : side(s) {}
    friend void compareArea(Square s, Rectangle r);
};
class Rectangle {
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    friend void compareArea(Square s, Rectangle r);
};
void compareArea(Square s, Rectangle r) {
    float areaSquare = s.side * s.side;
    float areaRectangle = r.length * r.breadth;
    if (areaSquare > areaRectangle) {
        cout << "Square has larger area." << endl;
    } else if (areaSquare < areaRectangle) {
        cout << "Rectangle has larger area." << endl;
    } else {
        cout << "Both have the same area." << endl;
    }
}
int main() {
    Square s(5);
    Rectangle r(4, 6);
    compareArea(s, r);
    getch();
    return 0;
}