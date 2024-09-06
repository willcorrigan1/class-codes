#include<iostream>
using namespace std; 

int main() { 
    int x = 12.2; 
    cout << x << endl; // only 12 is going to be stored in x and printed out. because x is a variable of type int. 
    // x = "hi there"; // there is a compilation error her since we cannot store a string in an int variable
    float f = 19.012;
    cout << f << endl; 
    // f = "bye!";     // compilation error
    char ch = 'A';
    cout << ch << endl; 
    // ch = "A";        // compilation error. for char we need ' not "
    string s = "today was a very hot day! 105! really!";
    cout << s << endl; 
    bool b = false; 
    cout << b << endl; 
}