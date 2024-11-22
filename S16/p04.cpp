#include<iostream> 
#include<fstream> 
using namespace std; 

string ccipher(string s, int key) { 
    string res = "";
    key = key % 26; 
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            res += ' '; 
            continue;
        }
        char ch = s[i] + key; 
        if (ch > 'z') { 
            ch = 'a' - 1 + ch % 'z';
        }
        res += ch; 
    }
    return res; 
}

int main() {    
    string s; 
    cout << "Enter a string: ";
    getline(cin, s);
    int key; 
    cout << "Enter a cipher key:";
    cin >> key;
    cout << ccipher(s, key) << endl; 
}