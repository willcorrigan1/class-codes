#include <iostream> 
using namespace std; 

int main() {
    string s; 
    getline(cin,s); 
    bool pal = true; 
    string newstr = "";
    for(int i = 0; i < s.length(); i++) { 
        if (isalpha(s[i])) { 
            newstr += s[i];
        }
    }

    for(int i = 0, j = newstr.length() - 1; i < j; i++, j--) {
        if (newstr[i] != newstr[j]) {
            pal = false; 
            break; 
        }
    }
    if(pal) { // if (pal == true)
        cout << "The string is palindrome!\n";
    } else { 
        cout << "The string is NOT palindrome!\n";
    }
}