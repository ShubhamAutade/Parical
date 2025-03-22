9. Write a c++ program to accept radius of a Circle. Calculate and display diameter,circumference 
as well as area of a Circle. (Use Inline function).
Ans::

#include<iostream.h>
#include<conio.h>
inline float diameter(float radius) {
    return 2 * radius;
}
inline float circumference(float radius) {
    return 2 * 3.14159 * radius;
}
inline float area(float radius) {
    return 3.14159 * radius * radius;
}
int main() {
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Diameter: " << diameter(radius) << endl;
    cout << "Circumference: " << circumference(radius) << endl;
    cout << "Area: " << area(radius) << endl;
    getch();
    return 0;
}