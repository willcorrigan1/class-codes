#include<iostream> 
using namespace std; 

int main() { 
    int v1, v2, v3;
    cout << "Enter 3 numbers: ";
    cin >> v1 >> v2 >> v3; 
    int output = (v1 + v2) * v3; 
    cout << "The result is: " << output << endl; 
}