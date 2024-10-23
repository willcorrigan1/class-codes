#include<iostream> 
using namespace std; 

void sayHi(string name) {
    cout << "Hello " << name << endl; 
}

int main() { 
    while(true) { 
        string n; 
        cout << "Enter a name: "; 
        getline(cin, n); 
        if (n == "end") { 
            break; 
        }
        sayHi(n);
    }
}