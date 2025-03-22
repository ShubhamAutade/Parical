4. Write a C++ program to create a base class Employee (Emp-code, name, salary). Derive two 
classes as Fulltime (daily wages, number_of_days) and Parttime (number_of_working hours, 
hourly wages) Write a menu driven program to perform following functions: i.Accept the details 
of 'n' employees and calculate the salary. ii.Display the details of 'n' employees. iii.Display the 
details of employee having maximum salary for both types of employees. 
Ans::

#include<iostream.h>
#include<conio.h>
const int MAX = 100;
class Employee {
public:
    int code;
    string name;
    double salary;
    void accept() {
        cout << "Code: "; cin >> code;
        cout << "Name: "; cin.ignore(); getline(cin, name);
    }
    void display() {
        cout << "Code: " << code << ", Name: " << name << ", Salary: " << salary << endl;
    }
};
class Fulltime : public Employee {
public:
    void accept() {
        Employee::accept();
        double wages; int days;
        cout << "Daily Wages: "; cin >> wages;
        cout << "Days: "; cin >> days;
        salary = wages * days;
    }
};
class Parttime : public Employee {
public:
    void accept() {
        Employee::accept();
        double wages; int hours;
        cout << "Hourly Wages: "; cin >> wages;
        cout << "Hours: "; cin >> hours;
        salary = wages * hours;
    }
};
int main() {
    Fulltime ft[MAX];
    Parttime pt[MAX];
    int ftCount = 0, ptCount = 0, choice;
    while (true) {
        cout << "\nMenu:\n1. Add Employee\n2. Display Employees\n3. Max Salary\n4. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Type (1-Fulltime, 2-Parttime): ";
            int type; cin >> type;
            if (type == 1 && ftCount < MAX) ft[ftCount++].accept();
            else if (type == 2 && ptCount < MAX) pt[ptCount++].accept();
            else cout << "Invalid type or limit reached!\n";
        } else if (choice == 2) {
            cout << "\nFulltime Employees:\n";
            for (int i = 0; i < ftCount; i++) ft[i].display();
            cout << "\nParttime Employees:\n";
            for (int i = 0; i < ptCount; i++) pt[i].display();
        } else if (choice == 3) {
            int maxFt = 0, maxPt = 0;
            for (int i = 1; i < ftCount; i++)
                if (ft[i].salary > ft[maxFt].salary) maxFt = i;
            for (int i = 1; i < ptCount; i++)
                if (pt[i].salary > pt[maxPt].salary) maxPt = i;
            cout << "\nFulltime Employee with Max Salary:\n";
            if (ftCount > 0) ft[maxFt].display();
            cout << "\nParttime Employee with Max Salary:\n";
            if (ptCount > 0) pt[maxPt].display();
        } else if (choice == 4) {
            cout << "Exiting...\n";
            getch();
            return 0;
        } else {
            cout << "Invalid choice!\n";
        }
    }
    getch();
    return 0;
}