#include<iostream> 
using namespace std; 

int main() { 
    int hr; 
    cout << "Enter hour of day (0-24): ";
    cin >> hr; 
    if (hr >= 0 and hr < 12) { 
        cout << "Good morning!\n";
    } else if (hr > 12  and hr < 17) { 
        cout << "Good afternoon!\n";
    } else if (hr >= 17 and hr < 20) { 
        cout << "Good evening!\n";
    } else if (hr >= 20 and hr <= 24) { 
        cout << "Good night!\n";
    } else { 
        cout << "It is an invalide time on earth!\n";
    }
}