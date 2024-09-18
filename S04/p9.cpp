#include<iostream> 
using namespace std; 

int main() { 
    int num; 
    cout << "Enter num for the day of the week: "; 
    cin >> num; 
    num %= 7; // num = num % 7; 
    if (num == 0) { 
        cout << "Saturday!\n";
    } else if (num == 1) { 
        cout << "Sunday!\n";
    } else if (num == 2) { 
        cout << "Monday!\n";
    } else if (num == 3) { 
        cout << "Tuesday!\n";
    } else if (num == 4) { 
        cout << "Wednesday!\n";
    } else if (num == 5) { 
        cout << "Thursday!\n";
    } else if (num == 6) { 
        cout << "Friday!\n";
    }
}