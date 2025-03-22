14. Design a base class Product (Product_Id, Product_Name, Price). Derive a class Discount 
(Discount_In_Percentage) from Product. A customer buys ‘n’ products. Write a C++ program to 
calculate total price, total discount. 
Ans::

#include<iostream.h>
#include<conio.h>
class Product {
protected:
    int Product_Id;
    string Product_Name;
    float Price;
public:
    void accept() {
        cout << "Enter Product ID, Name, Price: ";
        cin >> Product_Id >> Product_Name >> Price;
    }
    float getPrice() {
        return Price;
    }
};
class Discount : public Product {
    float Discount_In_Percentage;
public:
    void accept() {
        Product::accept();
        cout << "Enter Discount Percentage: ";
        cin >> Discount_In_Percentage;
    }
    float getDiscountedPrice() {
        return Price * (1 - Discount_In_Percentage / 100);
    }
};
int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Discount* products = new Discount[n];
    float totalPrice = 0, totalDiscount = 0;
    for (int i = 0; i < n; i++) {
        products[i].accept();
        totalPrice += products[i].getPrice();
        totalDiscount += products[i].getPrice() - products[i].getDiscountedPrice();
    }
    cout << "Total Price: " << totalPrice << endl;
    cout << "Total Discount: " << totalDiscount << endl;
    getch();
    return 0;
}