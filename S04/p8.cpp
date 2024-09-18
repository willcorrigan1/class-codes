#include<iostream> 
using namespace std; 

int main() { 
    int x; 
    cout << "Enter a num: "; 
    cin >> x; 
    if (x > 0) { 
        cout << "num is positive!\n";
    } else if (x < 0) { 
        cout << "num is negative!\n";
    } else { 
        cout << "num is zero!\n";
    }
}