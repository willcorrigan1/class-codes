#include<iostream> 
using namespace std; 

void printNumbers(int n) {
    for(int i = 1; i <= n; i++) { 
        cout << i << endl; 
    }
}

int main() { 
    cout << "Enter a number: ";
    int x; 
    cin >> x; 
    printNumbers(x);
}