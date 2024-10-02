#include <iostream> 
using namespace std; 

int main() {
    for(;;) {
        cout << "Enter the password:";
        string password;
        getline(cin, password);
        if (password == "Saddleback!") { 
            cout << "Correct!\n";
            break; 
        } else { 
            cout << "Wrong!\n";
        }
    }
}