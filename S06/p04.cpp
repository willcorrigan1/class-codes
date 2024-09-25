#include<iostream> 
using namespace std; 

int main() { 
    int monthNum; 
    cout << "Enter the month number: ";
    cin >> monthNum; 
    switch (monthNum)
    {
    case 2:
        cout << "The month has 28 days!\n";
        break;
    case 4:
    case 6: 
    case 9: 
    case 11: 
        cout << "The month has 30 days!\n";
        break;
    case 1:
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
        cout << "The month has 31 days!\n";
        break;
    default:
        cout << "Invalid input!\n";
        break;
    }
}