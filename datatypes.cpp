#include<iostream>
using namespace std;
/*
Problem Statement: Online Shopping Billing System

Write a C++ program for an online shopping 
system that stores customer and product details using 
**different C++ data types** and calculates the
**discount and final bill** 
 based on the product price, quantity, discount, 
 and premium membership.
 If premium member:
    give an additional 5% discount
Else:
    no additional dicdscount
*/

int main() {

    string c_name;
    cout << "Customer Name: ";
    getline(cin, c_name);

    int c_id;
    cout << "Customer ID: ";
    cin >> c_id;

    long p_id;
    cout << "Product ID: ";
    cin >> p_id;

    double p_price;
    cout << "Original Price: ";
    cin >> p_price;

    short quantity;
    cout << "Quantity: ";
    cin >> quantity;

    char p_category;
    cout << "Product Category: ";
    cin >> p_category;

    float dis_percent;
    cout << "Discount Percentage: ";
    cin >> dis_percent;

    bool p_member;
    cout << "Premium Member (1 = Yes, 0 = No): ";
    cin >> p_member;

    // Normal discount
    double discount = p_price * (dis_percent / 100.0);

    // Price after normal discount
    double final_price = (p_price - discount) * quantity;

    // Additional premium discount
    if (p_member) {
        double premium_discount = final_price * (5.0 / 100.0);
        final_price = final_price - premium_discount;
    }

    cout << "\n===== ORDER SUMMARY =====" << endl;
    cout << "Customer Name: " << c_name << endl;
    cout << "Customer ID: " << c_id << endl;
    cout << "Product ID: " << p_id << endl;
    cout << "Product Category: " << p_category << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Original Price: " << p_price << endl;
    cout << "Discount: " << discount << endl;
    cout << "Premium Member: " << p_member << endl;
    cout << "Final Bill: " << final_price << endl;

    return 0;
}