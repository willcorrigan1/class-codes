#include <iostream> 
using namespace std; 

int main() {
    int max; 
    for(int i = 0; i < 5; i++) {
        int num; 
        cout << "Enter a num: "; 
        cin >> num; 
        if (i == 0) { 
            max = num; 
        } else if (num > max) { 
            max = num; 
        }
    }
    cout << "Max is: " << max << endl; 
}