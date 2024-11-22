#include<iostream> 
#include<fstream> 
#include<cmath>

using namespace std; 

int reverse(int n) { 
    int res = 0; 
    while(n > 0) { 
        int rmd = n % 10; 
        n = n / 10;
        res = res * 10 + rmd; 
    }
    return res; 
}

int main() {    
    int num; 
    cin >> num; 
    if (num == reverse(num)) { 
        cout << "It is a palindrome number!\n";
    } else { 
        cout << "It is NOT a palindrome number!\n";
    }
}