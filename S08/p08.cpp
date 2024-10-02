#include <iostream> 
using namespace std; 

int main() {
    cout << "Enter a number: ";
    int x; 
    cin >> x; 
    for(int i = 2; i <= x; i+=2) { 
        cout << i << ", ";
    }
    cout << endl; 
}