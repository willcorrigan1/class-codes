#include<iostream> 
using namespace std; 

int main() { 
    cout << "Enter a num: "; 
    int x; 
    cin >> x; 
    for(int i = 1; i <= x; i++) { 
        for(int j = 0; j < i; j++) { 
            cout << i; 
        }
        cout << endl; 
    }
}
