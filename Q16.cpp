16. Create a C++ class Visiting Staff with data members Name. No of Subjects. Name of Subjects[]. 
Working hours, Total_Salary. (Number of subjects varies for a Staff). Write a parameterized 
constructor to initialize the data members and create an array for Name_of_Subjects 
dynamically. Display Visiting Staff details by calculating salary. (Assume remuneration Rs. 300 
per working hour. 
Ans::

#include<iostream.h>
#include<conio.h>
class VisitingStaff {
    string Name;
    int No_of_Subjects;
    string* Name_of_Subjects;
    int Working_hours;
    float Total_Salary;
public:
    VisitingStaff(string n, int nos, int wh) : Name(n), No_of_Subjects(nos), Working_hours(wh) {
        Name_of_Subjects = new string[nos];
        for (int i = 0; i < nos; i++) {
            cout << "Enter Subject " << i + 1 << ": ";
            cin >> Name_of_Subjects[i];
        }
    }
    void calculateSalary() {
        Total_Salary = Working_hours * 300;
    }
    void display() {
        cout << "Name: " << Name << ", Number of Subjects: " << No_of_Subjects << ", Working Hours: " << Working_hours << ", Total Salary: " << Total_Salary << endl;
        for (int i = 0; i < No_of_Subjects; i++) {
            cout << "Subject " << i + 1 << ": " << Name_of_Subjects[i] << endl;
        }
    }
    ~VisitingStaff() {
        delete[] Name_of_Subjects;
    }
};
int main() {
    string name;
    int nos, wh;
    cout<<"Enter Visiting Staff Name: ";
    cin>>name;
    cout<<"Enter Number of Subjects: ";
    cin>>nos;
    cout<<"Enter Working Hours: ";
    cin>>wh;
    VisitingStaff vs(name, nos, wh);
    vs.calculateSalary();
    vs.display();
    getch();
    return 0;
}