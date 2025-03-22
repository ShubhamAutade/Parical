15. Write a C++ program to create a class E Bill with data members Cust_Name, Meter_ID, 
No_of_Units and Total Charges. Write member functions to accept and display customer 
information by calculating charges. (Rules to calculate electricity board charges)  For first 100 
units Rs. 1 per unit  For next 200 units: Rs. 2 per unit  Beyond 300 units : Rs. 5 per unit All 
users are charged a minimum of Rs.150. If the total charge is more than Rs.250.00 then an 
additional charge of 15% is added. 
Ans::

#include<iostream.h>
#include<conio.h>
class EBill {
    string Cust_Name;
    int Meter_ID;
    int No_of_Units;
    float Total_Charges;
public:
    void accept() {
        cout << "Enter Customer Name, Meter ID, Number of Units: ";
        cin >> Cust_Name >> Meter_ID >> No_of_Units;
    }
    void calculateCharges() {
        if (No_of_Units <= 100) {
            Total_Charges = No_of_Units * 1;
        } else if (No_of_Units <= 300) {
            Total_Charges = 100 * 1 + (No_of_Units - 100) * 2;
        } else {
            Total_Charges = 100 * 1 + 200 * 2 + (No_of_Units - 300) * 5;
        }
        if (Total_Charges < 150) {
            Total_Charges = 150;
        } else if (Total_Charges > 250) {
            Total_Charges *= 1.15;
        }
    }
    void display() {
        cout << "Customer Name: " << Cust_Name << ", Meter ID: " << Meter_ID << ", Total Charges: " << Total_Charges << endl;
    }
};
int main() {
    EBill bill;
    bill.accept();
    bill.calculateCharges();
    bill.display();
    getch();
    return 0;
}