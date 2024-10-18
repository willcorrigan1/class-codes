#include <iostream> 
using namespace std; 

int main() {
    int num; 
    cout << "Enter a num: ";
    cin >> num; 
    long int fact = 1; 
    while (num > 1) { 
        fact = fact * num; 
        num--; 
    }
    cout << "Factorial of the entered num is: " << fact << endl; 
}