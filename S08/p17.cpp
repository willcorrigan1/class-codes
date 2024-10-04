#include <iostream> 
using namespace std; 

int main() {
    int sum = 0; 
    int num = 1; 
    for(;num != 0;) { 
        cout << "Enter a num: "; 
        cin >> num; 
        sum += num; 
    }
    cout << "sum: " << sum << endl; 
}