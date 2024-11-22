#include<iostream> 
#include<fstream> 
using namespace std; 

bool checkFormat(string s) { 
    if (s[0] != '+' or s[2] != '(' or s[6] != ')' or s[10] != '-') { 
        return false;
    } 

    for(int i = 0; i < s.length(); i++) { 
        if (i == 0 or i == 2 or i == 6 or i == 10) { 
            continue;
        }
        if (!(s[i] >= '0' and s[i] <= '9')) { 
            return false; 
        }
    }
    return true; 
}

bool checkFormatWithTemplate(string s) { 
    string t = "+#(###)###-####";
    for(int i = 0; i < s.length(); i++) { 
        if (t[i] == '#' and not (s[i] <= '9' and s[i]>='0')) { 
            return false; 
        } 
        if (t[i] != '#' and s[i] != t[i]) { 
            return false; 
        }
    }
    return true; 
}

int main() { 
    
    string s; 
    cout << "Enter a phone number: ";
    getline(cin, s);
    if (checkFormat(s)) { 
        cout << "It follows the format!\n";
    } else { 
        cout << "It doesn't follow the format!\n";
    }
}