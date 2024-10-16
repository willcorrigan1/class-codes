#include <iostream> 
using namespace std; 

int main() {
    string s; 
    cout << "Enter a sentece: ";
    getline(cin, s);
    cout << "Enter a character: ";
    char ch; 
    cin >> ch; 
    ch = (ch > 'A' and ch < 'Z') ? ch + 32 : ch;
    int count = 0; 
    int i = 0; 
    while(i < s.length()) { 
        char ch1 = s[i]; 
        ch1 = (ch1 > 'A' and ch1 < 'Z') ? ch1 + 32 : ch1;
        if (ch == ch1) { 
            count++; 
        }
        i++;
    }
    cout << count << endl; 
}