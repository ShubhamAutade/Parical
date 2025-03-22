7. Write a C++ program to create a class Date with data members day, month, and year. 
Usedefault and parameterized constructor to initialize date and display date in dd-Mon-yyyy 
format. (Example: Input 04-01-2021 Output: 04-Jan-2021).
Ans::

#include<iostream.h>
#include<conio.h>
class Date {
    int day, month, year;
public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
    void display() {
        string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        cout << day << "-" << months[month - 1] << "-" << year << endl;
    }
};
int main() {
    Date d1(4, 1, 2021);
    d1.display();
    getch();
    return 0;
}