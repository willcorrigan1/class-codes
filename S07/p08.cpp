#include <iostream> 
using namespace std; 

int main() {
    string s; 
    cout << "Enter a sentence: ";
    getline(cin, s);
    s[0] = 's';
    s[s.length() - 1] = 's';
    if (s.length() % 2 == 1) { // odd length
        s[s.length()/2] = 's'; 
    } else {                    // even length
        s[s.length()/2] = 's'; 
        s[s.length()/2 -1] = 's';
    }
    cout << s << endl; 

    // alternative solution
    s[s.length()/2] = 's'; 
    if (s.length() % 2 == 0){
        s[s.length()/2 -1] = 's';
    }
    cout << s << endl; 
}