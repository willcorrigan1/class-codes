#include <iostream> 
using namespace std; 

int main() {
    int last, prevNum;
    bool ascending = true; 
    for(int i = 0; i < 5; i++) { 
        cout << "Enter a number: ";
        cin >> last; 
        if (i > 0) { 
            if (last < prevNum) { 
                ascending = false; 
            }
        }
        prevNum = last; 
    } 
    if (ascending == true) { 
        cout << "The list is ascending\n";
    } else { 
        cout << "The list is NOT ascending\n";
    }
}