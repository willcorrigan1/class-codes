#include <iostream> 
using namespace std; 

int main() {
    cout << "Enter a number: ";
    int x; 
    cin >> x; 
    for(int i = 1; i <= 10; i++) { 
        cout << x << " * " << i << " = " << x*i << endl; 
    }
}