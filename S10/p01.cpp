#include <iostream> 
using namespace std; 

int main() {
    string s; 
    cout << "Enter a sentece: ";
    getline(cin, s);
    int i = 0; 
    int count = 0; 
    while(i < s.length()) { 
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or
            s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U') { 
                count++; 
        }
        i++; 
    }
    cout << count << endl; 
}