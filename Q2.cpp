2. Write a C++ program to find volume of cylinder, cone and sphere. (Use function overloading). 
Ans::

#include<iostream.h>
#include<conio.h>
int main() {
    double pi = 3.14; // Use double for floating-point value
    double r, h;
    std::cout << "Enter radius and height for cylinder: ";
    std::cin >> r >> h;
    std::cout << "Cylinder Volume: " << pi * r * r * h << std::endl;
    std::cout << "Enter radius and height for cone: ";
    std::cin >> r >> h;
    std::cout << "Cone Volume: " << (1.0 / 3.0) * pi * r * r * h << std::endl;
    std::cout << "Enter radius for sphere: ";
    std::cin >> r;
    std::cout << "Sphere Volume: " << (4.0 / 3.0) * pi * r * r * r << std::endl;
    getch();
    return 0;
}