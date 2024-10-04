#include <iostream> 
using namespace std; 

int main() {
    int choice=1; 
    //for(;choice != 5;) { // since we have the break statement, the condition is not required here anymore. 
    for(;;) {
        cout << "Choose an option:\n";
        cout << "1. Add 2 Numbers \n";
        cout << "2. Sub 2 Numbers \n";
        cout << "3. Mul 2 Numbers \n";
        cout << "4. Div 2 Numbers \n";
        cout << "5. Exit \n";
        
        cin >> choice; 
        if (choice == 5) { 
            break; 
        }
        double x, y; 
        cout << "Enter two numbers: ";
        cin >> x >> y; 
        double res; 
        switch(choice) { 
            case 1: res = x + y; break;
            case 2: res = x - y; break; 
            case 3: res = x * y; break; 
            case 4: res = x / y; break; 
            default: cout << "Invalide operation option!\n";
        }
        cout << "Res is: " << res << endl; 
    }
}