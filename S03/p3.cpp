#include<iostream>
using namespace std; 

int main() { 
    int x; 
    cout << "Enter a num: "; 
    cin >> x; 
    x++; 
    cout << "x++ result: " << x << endl; 
    x++; 
    cout << "x++ result: " << x << endl; 
    x+=5; 
    cout << "x+=5 result: " << x << endl; 
    x-=5; // x = x - 5;
    cout << "x-=5 result: " << x << endl; 
    x*=5; 
    cout << "x*=5 result: " << x << endl; 
    x/=5; // x = x / 5; 
    cout << "x/=5 result: " << x << endl; 
    x--; 
    cout << "x-- result: " << x << endl; 
    x--; 
    cout << "x-- result: " << x << endl; 
}