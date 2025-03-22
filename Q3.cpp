3. Write a C++ program to accept Worker information Worker_Name, No_of_ Hours_worked, 
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. 
(Use default value for Pay Rate). 
Ans::

#include<iostream.h>
#include<conio.h>
void calculateSalary(string Worker_Name, int No_of_Hours_worked, float Pay_Rate = 10.0) {
    float Salary = No_of_Hours_worked * Pay_Rate;
    cout << "Worker Name: " << Worker_Name << endl;
    cout << "Salary: " << Salary << endl;
}
int main() {
    string name;
    int hours;
    float rate;
    cout << "Enter Worker Name: ";
    cin >> name;
    cout << "Enter Number of Hours Worked: ";
    cin >> hours;
    cout << "Enter Pay Rate (optional, press enter to use default): ";
    cin.ignore();
    if (cin.peek() == '\n') {
        calculateSalary(name, hours);
    } else {
        cin >> rate;
        calculateSalary(name, hours, rate);
    }
    getch();
    return 0;
}