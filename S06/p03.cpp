#include<iostream> 
using namespace std; 

int main() { 
    int itemNum; 
    cin >> itemNum; 
    switch (itemNum) {     
        case 1: 
            cout << "Price is $10\n";
            break;
        case 2: 
            cout << "Price is $20\n";
            break;
        case 3: 
            cout << "Price is $30\n";
            break;
        case 4: 
            cout << "Price is $25\n";
            break;
        case 5: 
            cout << "Price is $39\n";
            break;
        default: 
            cout << "You are at the wrong restaurant!\n";
    }
}
