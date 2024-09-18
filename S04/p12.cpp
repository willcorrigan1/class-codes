#include<iostream> 
using namespace std; 

int main() { 
    int choice; 
    cout << "Menu\n";
    cout << "====================\n";
    cout << "1- Double Double: $10\n";
    cout << "2- Cheeseburger: $20\n"; 
    cout << "3- Chicken: $30\n";
    cout << "4- Pata: $25\n"; 
    cout << "5- MacNCheese: $39\n\n\n";
    cout << "Enter menu item: "; 
    cin >> choice; 
    if (choice == 1) { 
        cout << "Price is $10\n";
    } else if (choice == 2) { 
        cout << "Price is $20\n";
    } else if (choice == 3) { 
        cout << "Price is $30\n";
    } else if (choice == 4) { 
        cout << "Price is $25\n";
    } else if (choice == 5) { 
        cout << "Price is $39\n";
    } else { 
        cout << "You are at the wrong restaurant!\n";
    }
}