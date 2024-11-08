#include<iostream> 
using namespace std; 

int main() { 
    int heights[5];
    for(int i = 0; i < 5; i++) { 
        cout << "Enter height of student #" << i << ":";
        cin >> heights[i];
    }

    cout << "Here are heights that you entered: \n";
    for(int i = 0; i < 5; i++) { 
        cout << heights[i] << endl; 
    }
}