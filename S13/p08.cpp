#include<iostream> 
using namespace std; 

int main() { 
    string str; 
    cout << "Enter a string: ";
    getline(cin, str); 
    int k = 0; 
    for(int row = 0; row < 4; row++) { 
        for (int col = 0; col < 4; col++) { 
            //cout << str[k++] << " ";
            cout << str[row * 4 + col] << " ";
        }
        cout << endl; 
    }
}