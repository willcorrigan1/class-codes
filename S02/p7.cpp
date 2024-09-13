#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter two numbers for x and y: "; 
    int x, y; 
    cin >> x >> y;
    // method to swap: 
    int temp = x; 
    x = y; 
    y = temp;
    cout << "x: " << x << " y: " << y << endl;
    // method 2 to swap: 
    cout << "Enter two numbers for x and y again: "; 
    cin >> x >> y;  // x = 10, y = 20 
    x = x + y;      // x = 30, y = 20
    y = x - y;      // x = 30, y = 10 
    x = x - y;      // x = 20, y = 10
    cout << "x: " << x << " y: " << y << endl;

}