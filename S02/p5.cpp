#include<iostream>
using namespace std; 

int main() { 
    float pi = 3.1415; 
    cout << "Enter the radius of the sphere: "; 
    float rad; 
    cin >> rad; 
    float vol1 = (4 / 3) * pi * (rad * rad * rad);
    float vol2 = ((float)4 / 3) * pi * (rad * rad * rad);
    float vol3 = (4.0 / 3) * pi * (rad * rad * rad);
    cout << vol1 << endl; 
    cout << vol2 << endl; 
    cout << vol3 << endl; 
}