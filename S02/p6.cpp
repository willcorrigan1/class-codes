#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter the temp in Farenheit: ";
    float f; 
    cin >> f; 
    float c1 = (f-32)*5/9;
    float c2 = (f-32)*(5/9);
    cout << c1 << endl << c2 << endl; 
}