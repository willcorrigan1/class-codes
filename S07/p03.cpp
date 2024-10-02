#include <iostream> 
using namespace std; 

int main() { 
    int a, b; 
    string s1, s2; 
    cout << "Enter two numbers: ";
    cin >> a >> b; 
    cout << "Enter two words: "; 
    cin >> s1 >> s2; 
    cout << "Adding two ints: " << a + b << endl; 
    cout << "Adding two strings: " << s1 + s2 << endl; 
    //cout << "Adding an int and a string: " << a + s1 << endl; 
}