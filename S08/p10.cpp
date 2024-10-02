#include <iostream> 
using namespace std; 

int main() {
    int sum = 0; 
    for(int i = 1; i <= 15; i++) { 
        sum += (i * i);
    }
    cout << sum << endl; 
}