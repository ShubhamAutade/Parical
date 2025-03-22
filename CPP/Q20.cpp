20. Write a C++ program to create a base class Employee (Emp-code, name, salary). Derive two 
classes as Fulltime (daily wages, number_of_days) and Parttime (number_of_working 
hours,hourly wages) Write a menu driven program to perform following functions: i.Accept the 
details of 'n' employees and calculate the salary. ii.Display the details of 'n' employees.
Ans::

#include<iostream.h>
#include<conio.h>
class Employee {
protected:
    int Emp_code;
    string name;
    float salary;
public:
    virtual void calculateSalary() = 0;
    void display() {
        cout << "Emp Code: " << Emp_code << ", Name: " << name << ", Salary: " << salary << endl;
    }
};
class Fulltime : public Employee {
    float daily_wages;
    int number_of_days;
public:
    Fulltime(int code, string n, float dw, int nod) {
        Emp_code = code;
        name = n;
        daily_wages = dw;
        number_of_days = nod;
    }
    void calculateSalary() override {
        salary = daily_wages * number_of_days;
    }
};
class Parttime : public Employee {
    int number_of_working_hours;
    float hourly_wages;
public:
    Parttime(int code, string n, int nwh, float hw) {
        Emp_code = code;
        name = n;
        number_of_working_hours = nwh;
        hourly_wages = hw;
    }
    void calculateSalary() override {
        salary = number_of_working_hours * hourly_wages;
    }
};
int main() {
    int n, code, nod, nwh;
    string name;
    float dw, hw;
    char type;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee* employees[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter type (F for Fulltime, P for Parttime): ";
        cin >> type;
        cout << "Enter Emp Code, Name: ";
        cin >> code >> name;
        if (type == 'F') {
            cout << "Enter Daily Wages, Number of Days: ";
            cin >> dw >> nod;
            employees[i] = new Fulltime(code, name, dw, nod);
        } else {
            cout << "Enter Hourly Wages, Number of Working Hours: ";
            cin >> hw >> nwh;
            employees[i] = new Parttime(code, name, nwh, hw);
        }
    }
    for (int i = 0; i < n; i++) {
        employees[i]->calculateSalary();
        employees[i]->display();
    }
    getch();
    return 0;
}