#include <iostream> 
using namespace std; 

int main() {
    int x; 
    cout << "Enter a number: ";
    cin >> x; 
    int fact = 1; 
    for(int i = x; i > 0; i--) { 
        fact *= i; 
    }
    cout << fact << endl; 
}