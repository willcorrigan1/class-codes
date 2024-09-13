#include<iostream> 
using namespace std; 

int main() { 
    int x, y; 
    cout << "Enter 2 nums: ";
    cin >> x >> y; 
    if (x > y) { 
        cout << x << " is greater!\n";
    } else if (x < y) { 
        cout << y << " is greater!\n";
    } else { 
        cout << "they are equal!\n";
    }
}