#include<iostream> 
using namespace std; 

int sumOfDigits(int n) { 
    int res = 0; 
    while(n > 0) {
        int mostRightDigit = n % 10; 
        res += mostRightDigit; 
        n /= 10; 
    }
    return res; 
}

int main() {    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int val = sumOfDigits(num); 
    cout << val << endl; 
}