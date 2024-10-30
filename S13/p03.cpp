#include<iostream> 
using namespace std; 

void printALine(int count) { 
    for(int i = 0; i < count; i++) { // prints a line
        cout << "* "; 
    }
    cout << endl; 
}

int main() { 
    int count; 
    cout << "Enter a number: "; 
    cin >> count; 
    for(int row = 0; row < count; row++) { // as many as lines
        printALine(count);
    }
}