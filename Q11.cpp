11. Create a C ++ class Fraction with data members Numerator and Denominator. Write a C+ 
program to calculate and display sum of two fractions. (Use Constructor). 
Ans::

#include<iostream.h>
#include<conio.h>
class Fraction {
    int Numerator, Denominator;
public:
    Fraction(int n = 0, int d = 1) : Numerator(n), Denominator(d) {}
    Fraction add(Fraction f) {
        int num = Numerator * f.Denominator + f.Numerator * Denominator;
        int den = Denominator * f.Denominator;
        return Fraction(num, den);
    }
    void display() {
        cout << Numerator << "/" << Denominator << endl;
    }
};
int main() {
    Fraction f1(1, 2), f2(1, 3);
    Fraction f3 = f1.add(f2);
    f3.display();
    getch();
    return 0;
}