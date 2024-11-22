#include<iostream> 
#include<fstream> 
using namespace std; 

char toupperCase(char ch) { 
    if (ch >= 'a' and ch <= 'z') { 
        return ch - ('a' - 'A'); 
    }
    return ch; 
}

int main() { 
    string s; 
    cout << "Enter a string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) { 
        s[i] = toupperCase(s[i]);
    }
    cout << s << endl; 
}