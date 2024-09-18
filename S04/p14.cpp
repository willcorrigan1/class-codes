#include<iostream> 
using namespace std; 

int main() { 
    int year; 
    cout << "Enter the year: ";
    cin >> year; 
    // sol1
    if (year % 400 == 0 or (year % 4 == 0 and not(year % 100 == 0))) { //if (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)) {  same as above condition
        cout << "Sol1: It is a leap year!\n";
    } else { 
        cout << "Sol1: It is not a leap year!\n";
    }

    // sol2
    if (year % 4 == 0) { 
        if (year % 400 == 0) { 
            cout << "Sol2: It is a leap year!\n";
        } else if (year % 100 == 0) { 
            cout << "Sol2: It is not a leap year!\n";
        } else { 
            cout << "Sol2: It is a leap year!\n";
        }
    } else { 
        cout << "Sol2: It is not a leap year!\n";
    }

}