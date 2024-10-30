#include<iostream> 
using namespace std; 

int main() { 
    cout << "Enter a num: "; 
    int x; 
    cin >> x; 
    for(int row = 1; row <= x; row++) { 
        for(int j = 1; j <= row; j++) { 
            cout << j; 
        }
        cout << endl; 
    }
}
