#include<iostream> 
#include<fstream> 
using namespace std; 

string substr(string s, int i, int j) {
    string s1 = ""; 
    for (int k = i; k <= j; k++) { 
        s1 += s[k];
    } 
    return s1; 
}

bool isPal(string s, int i, int j) { 
    while(i < j) { 
        if (s[i] != s[j]) { 
            return false; 
        }
        i++; j--; 
    }
    return true; 
}

string getAllPalSubs(string s) { 
    string res = "";
    for(int start = 0; start < s.length() - 1; start++) { 
        for(int end = start+1; end < s.length(); end++) { 
            if (isPal(s, start, end)) { 
                res = res + substr(s, start, end) + ", "; 
            }
        }
    }
    return res; 
}

int main() { 
    ifstream inputFile("p13-in.txt");
    ofstream outFile("p13-out.txt");
    while(!inputFile.eof()) { 
        string str;
        inputFile >> str;
        string pals = getAllPalSubs(str);
        outFile << pals << endl; 
    }
}