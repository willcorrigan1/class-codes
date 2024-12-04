#include<iostream> 
using namespace std; 

string decToBin(int n) { 
    int posVal = 1; 
    while(posVal <= n) { 
        posVal *= 2; 
    }
    posVal /= 2; 
    string res = ""; 
    while(posVal >= 1) { 
        if (n >= posVal) {
            res = res + '1';
            n -= posVal; 
        } else { 
            res = res + '0';
        }
        posVal /= 2; 
    }
    return res; 
}

int main() {    
    int num;
    cout << "Enter a dec number: ";
    cin >> num;
    string val = decToBin(num); 
    cout << val << endl; 
}