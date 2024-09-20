#include<iostream> 
using namespace std; 

int main() { 
    int age; 
    cout << "Enter the age: "; 
    cin >> age; 
    if (age > 0 and age <= 12) { 
        cout << "Price is $5.\n"; 
    } else if (age > 12 and age <= 18) { 
        cout << "Price is $8.\n"; 
    } else if (age > 18 and age <= 64) { 
        cout << "Price is $12.\n"; 
    } else if (age > 64) { 
        cout << "Price is $6.\n"; 
    } else { 
        cout << "They are not yet born! They don't need a ticket!\n";
    }
}