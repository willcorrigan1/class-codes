#include<iostream> 
#include<fstream> 
#include<cmath>

using namespace std; 

bool isPrime(int n) { 
    int x = sqrt(n) + 1;
    for(int i = 2; i <= x; i++) { 
        if (n % i == 0) { 
            return false; 
        }
    }
    return true; 
}

int main() {    
    int sum = 2; 
    for(int i = 3; i<=100; i++) { 
        if (isPrime(i)) { 
            sum += i;
        }
    }
    cout << sum << endl; 
}