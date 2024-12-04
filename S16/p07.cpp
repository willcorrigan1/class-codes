#include<iostream> 
using namespace std; 

string encryptStr(string s) { 
    for(int i = 0; i < s.length(); i+=2) { 
        if (i == s.length()-1) { 
            break; 
        }
        char temp = s[i]; 
        s[i] = s[i+1]; 
        s[i+1] = temp; 
    }
    return s; 
}

int main() {    
    string s; 
    getline(cin, s);
    string s1 = encryptStr(s);
    cout << s1 << endl; 
}