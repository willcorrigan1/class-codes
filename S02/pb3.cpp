#include<iostream>
using namespace std; 

int main() { 
    cout << "Enter a num: "; 
    int x; 
    cin >> x; 
    x = x / 100; 
    cout << "The 3rd digit from right is: " << x % 10 << endl; 
}