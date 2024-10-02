#include <iostream> 
using namespace std; 

int main() {
    string s; 
    getline(cin, s); 
    cout << s[0] << endl; 
    cout << s[1] << endl; 
    cout << s[s.length() - 1] << endl; 
    // middle char: 
    if (s.length() % 2 == 1) { // odd length, only one middle char
        cout << s[s.length()/2] << endl; 
    } else {// even len, we will print 2 middle chars
        cout << s[s.length()/2 - 1]; 
        cout << s[s.length()/2] << endl; 
    }
}
