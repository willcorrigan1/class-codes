#include<iostream>
using namespace std; 

int main() { 
    double price; 
    cout << "Enter the price: "; 
    cin >> price; 
    // approach 1
    double priceNtax1 = price * 0.09 + price; 
    cout << priceNtax1 << endl; 
    // approach 2
    double priceNtax2 = price * 1.09;
    cout << priceNtax2 << endl; 
    // approach 3
    cout << price + price * 9 / 100 << endl; 
    // approach 4
    cout << price + 9 / 100 * price << endl;    // this approach will 0 down the tax since 9/100 is an integer division and result in 0. 
    // approach 5
    cout << price + 9.0 / 100 * price << endl; 

}