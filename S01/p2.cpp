#include<iostream> 
using namespace std; 

int main() { 
    int x;  // we ask c++ to get a memory location from RAM and name it x
            // and we say we are going to store an int number (whole number) in x
    x = 10; // we ask c++ to store value of 10 in memory location named x
            // x = 10; is called an assignment instruction
    int y;  // we get another memory location and name it y. 
            // we don't store a value in that memory location. 
            // it will keep whatever from whatever time in the past that had been
            // stored in that memory location -- let's call it a garbage value
    cout << "x: " << x << endl; 
    cout << "y: " << y << endl; 
}