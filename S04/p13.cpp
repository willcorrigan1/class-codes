#include<iostream> 
using namespace std; 

int main() { 
    int monthNum; 
    cout << "Enter the month number: ";
    cin >> monthNum; 
    if (monthNum == 2) { 
        cout << "The month has 28 days!\n";
    } else if (monthNum == 4 or monthNum == 6 or monthNum == 9 or monthNum == 11) { 
        cout << "The month has 30 days!\n";
    } else {  // if (monthNum == 1 or monthNum == 3 or monthNum == 5 or monthNum == 7 or monthNum == 8 or monthNum == 10 or monthNum == 12) { 
        cout << "The month has 31 days!\n";
    }
}