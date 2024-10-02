#include <iostream> 
using namespace std; 

int main() {
    for(int i = 50; i <= 200; i++) { 
        if (i % 7 == 0) { 
            cout << i << ", ";
        }
    }
    cout << endl; 

    for(int i = 56; i <= 200; i+=7) { 
        if (i % 7 == 0) { 
            cout << i << ", ";
        }
    }
    cout << endl; 
}