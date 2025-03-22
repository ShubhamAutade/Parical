6. Create a C++ class Cuboid with data members length, breadth, and height. Write necessary 
member functions for the following i. void setvalues(float float,float) to set values of data 
members. ii. void getvalues() to display values of data members. iii. float volume() to calculate 
and return the volume of cuboid. iv. float surface area() to calculate and return the surface area 
of cuboid. (Use Inline function). 
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
    void getValues() {
        cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
    }
    inline float volume() {
        return length * breadth * height;
    }
    inline float surfaceArea() {
        return 2 * (length * breadth + breadth * height + height * length);
    }
};
int main() {
    Cuboid c;
    c.setValues(3, 4, 5);
    c.getValues();
    cout << "Volume: " << c.volume() << endl;
    cout << "Surface Area: " << c.surfaceArea() << endl;
    getch();
    return 0;
}