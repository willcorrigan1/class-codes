#include<iostream> 
#include<fstream> 
using namespace std; 

string extractDomain(string s) { 
    string res = "";
    bool atSignSeen = false; 
    for(int i = 0; i < s.length(); i++) { 
        if (atSignSeen) { 
            res += s[i]; 
        }
        if (s[i] == '@') { 
            atSignSeen = true; 
        }
    }
    return res; 
}

int main() { 
    string s; 
    cout << "Enter an email address: ";
    // we are assuming that user will enter a valid email address
    getline(cin, s);
    cout << extractDomain(s) << endl; 
}