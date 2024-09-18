#include<iostream> 
using namespace std; 

int main() { 
    char ch; 
    cout << "Enter a char: "; 
    cin >> ch; 
    if (ch == 'a' or ch == 'i' or ch == 'o' or ch == 'e' or ch == 'u' or ch == 'A' or ch == 'I' or ch == 'O' or ch == 'E' or ch == 'U') {
        cout << "The char is vowel!\n";
    } else { 
        cout << "The char is consonant!\n";
    }
}