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

    //solution 2
    string password;
    for(  ;password != "Saddleback!";   ) {
        cout << "Enter the password:";
        getline(cin, password);
    }
    cout << "You got it!!\n";
}