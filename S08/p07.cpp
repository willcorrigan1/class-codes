#include <iostream> 
using namespace std; 

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) { 
        if (i % 3 == 0 and i % 5 == 0) { 
            sum += i; 
        }
    }
    cout << sum << endl; 

    sum = 0;
    for(int i = 15; i <= 100; i+=15) { 
        sum += i; 
    }
    cout << sum << endl; 

}