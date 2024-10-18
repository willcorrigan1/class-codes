#include <iostream> 
using namespace std; 

int main() {
    int n1 = 0, n2 = 1; 
    cout << "Enter a number: ";
    int num; 
    cin >> num; 
    cout << n1 << ", " << n2; 
    while (n2 < num) { 
        int temp = n2; 
        n2 = n1 + n2; 
        n1 = temp; 
        if (n2 < num) { 
            cout << ", " << n2; 
        }
    }
    cout << endl; 
}