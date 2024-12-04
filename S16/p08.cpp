#include<iostream> 
using namespace std; 

int binToDec(string s) { 
    int res = 0; 
    int posVal = 1; 
    for(int i = s.length() - 1; i >= 0; i--) { 
        int dig = s[i] - '0'; // conver char '0' or '1' to their int eq value
        res = res + dig * posVal; 
        posVal *= 2; // double the position value for next digit on the left of cur digit
    }
    return res; 
}

int main() {    
    string binStr; 
    cout << "Enter a bin number: ";
    cin >> binStr;
    int val = binToDec(binStr); 
    cout << val << endl; 
}