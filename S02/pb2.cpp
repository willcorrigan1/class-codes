#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter a num: "; 
    int x; 
    cin >> x; 
    cout << "The right-most digit is: " << x % 10 << endl; 
}