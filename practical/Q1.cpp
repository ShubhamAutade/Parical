1. Write a C++ program to check maximum and minimum of two integer numbers. (Use Inline 
function and Conditional operator). 
Ans::
#include<iostream.h>
#include<conio.h>
inline int max(int a, int b) {
    return (a > b) ? a : b;
}
inline int min(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Maximum: " << max(num1, num2) << endl;
    cout << "Minimum: " << min(num1, num2) << endl;
    getch();
    return 0;
}