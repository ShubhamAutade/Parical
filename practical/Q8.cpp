8. Create a C++ class Cuboid with data members length, breadth, and height. Write necessary 
member functions for the following float surface area() to calculate and return the surface area 
of cuboid. 
Ans::

#include<iostream.h>
#include<conio.h>
class Cuboid {
    float length, breadth, height;
public:
    void setValues(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    float surfaceArea() {
        return 2 * (length * breadth + breadth * height + height * length);
    }
};
int main() {
    Cuboid c;
    c.setValues(3, 4, 5);
    cout << "Surface Area: " << c.surfaceArea() << endl;
    getch();
    return 0;
}