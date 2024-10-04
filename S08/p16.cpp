#include <iostream> 
using namespace std; 

int main() {
    int num = 1; 
    int count = 0; 
    for(;num > 0; ) {
        cout << "Enter a num: ";
        cin >> num; 
        count++; 
    }
    cout << "Number of pos nums entered: " << --count << endl; 
}