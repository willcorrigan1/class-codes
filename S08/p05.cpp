#include <iostream> 
using namespace std; 

int main() {
    int sum = 0; 
    for(int i = 1; i <= 50; i++) { 
        if (i%2 == 0) { 
            sum += i; 
        }
    }
    cout << sum << endl; 

    sum = 0; 
    for(int i = 2; i <= 50; i+=2) { 
        sum += i; 
    }
    cout << sum << endl; 

}