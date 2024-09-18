#include<iostream> 
using namespace std; 

int main() { 
    int num; 
    cout << "Enter a num: "; 
    cin >> num; 
    if (num % 2 == 0) { 
        cout << "The number is even!\n"; 
    } else { 
        cout << "The number is odd!\n";
    }
}