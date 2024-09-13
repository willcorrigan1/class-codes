#include<iostream>
using namespace std; 

int main() { 
    float f; 
    cout << "Enter a float num: "; 
    cin >> f; 
    int i = f; 
    cout << "int value: " <<  i << endl; 
    cout << "fraction value: " << f - i << endl; 
}