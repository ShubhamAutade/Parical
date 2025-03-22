12. Design two base classes Student (S_id. Name, Class) and Competition (C_id, C_Name). Derive a 
class Stud Comp(Rank) from it. Write a menu driven program to perform following functions i. 
Accept information. ii. Display information. iii. Display Student Details in the ascending order of 
Rank of a specified competition. (Use array of objects). 
Ans::

#include<iostream.h>
#include<conio.h>
class Student {
protected:
    int S_id;
    string Name;
    string Class;
};
class Competition {
protected:
    int C_id;
    string C_Name;
};
class StudComp : public Student, public Competition {
    int Rank;
public:
    void accept() {
        cout << "Enter Student ID, Name, Class, Competition ID, Competition Name, Rank: ";
        cin >> S_id >> Name >> Class >> C_id >> C_Name >> Rank;
    }
    void display() {
        cout << "Student ID: " << S_id << ", Name: " << Name << ", Class: " << Class << ", Competition ID: " << C_id << ", Competition Name: " << C_Name << ", Rank: " << Rank << endl;
    }
    bool operator<(const StudComp& sc) const {
        return Rank < sc.Rank;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    StudComp* scList = new StudComp[n];
    for (int i = 0; i < n; i++) {
        scList[i].accept();
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scList[j] < scList[i]) {
                StudComp temp = scList[i];
                scList[i] = scList[j];
                scList[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        scList[i].display();
    }
    getch();
    return 0;
}