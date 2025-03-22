10. .Write a C++ class Seller (S Name, Product_name, Sales Quantity, Target Quantity, Month. 
Commission). Each salesman deals with a separate product and is assigned a target for a month. 
At the end of the month his monthly sales is compared with target and commission iscalculated 
as follows: If Sales Quantity>Target Quantity then commission is 25% of extra sales made+ 10% 
of target. If Sales Quantity Target Quantity then commission is 10% of target. Otherwise 
commission is zero. Display salesman information along with commission obtained. (Use array 
of objects).
Ans::

#include<iostream.h>
#include<conio.h>
class Seller {
    string S_Name, Product_name, Month;
    int Sales_Quantity, Target_Quantity;
    float Commission;
public:
    void accept() {
        cout << "Enter Seller Name, Product Name, Month, Sales Quantity, Target Quantity: ";
        cin >> S_Name >> Product_name >> Month >> Sales_Quantity >> Target_Quantity;
    }
    void calculateCommission() {
        if (Sales_Quantity > Target_Quantity) {
            Commission = 0.25 * (Sales_Quantity - Target_Quantity) + 0.10 * Target_Quantity;
        } else if (Sales_Quantity == Target_Quantity) {
            Commission = 0.10 * Target_Quantity;
        } else {
            Commission = 0;
        }
    }
    void display() {
        cout << "Seller Name: " << S_Name << ", Product: " << Product_name << ", Month: " << Month << ", Commission: " << Commission << endl;
    }
};
int main() {
    Seller s;
    s.accept();
    s.calculateCommission();
    s.display();
    getch();
    return 0;
}