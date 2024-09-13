#include<iostream> 
using namespace std; 

int main() { 
    int x; 
    cout << "Enter a num: "; 
    cin >> x; 
    if (x > 10) { 
        cout << "Your number is greater than 10\n";
    } else if ( x < 10) { 
        cout << "Your number is less than 10\n";
    } else { 
        cout << "Your number is equal to 10\n";
    }
}