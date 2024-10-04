#include <iostream> 
using namespace std; 

int main() {
    int itemCount; 
    cout << "Enter number of items: ";
    cin >> itemCount; 
    double sum = 0; 
    for(int i = itemCount; i > 0; i--) { 
        double price; 
        cout << "Enter price of item:" ; 
        cin >> price; 
        sum += price; 
    }
    cout << "Total is: " << sum << endl; 
}