#include <iostream> 
using namespace std; 

int main() {
    string s; 
    cout << "Enter a sentece: ";
    getline(cin, s);
    int i = 0; 
    while(i < s.length()) { 
        if (i == 0 or s[i-1] == ' ') { 
            if (s[i] >= 'a' and s[i] <= 'z') { 
                s[i] -= 32; // ascii code for a is 97 and A is 65
            }
        }
        i++; 
    }
    cout << s << endl;
}