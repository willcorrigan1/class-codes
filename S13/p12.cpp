#include<iostream> 
#include<fstream> 
using namespace std; 

bool isAnagram(string s1, string s2) { 
    // we assume that words wont' have the * character in them
    if (s1.length() != s2.length()) { 
        return false; 
    }
    for(int i = 0; i < s1.length(); i++) { 
        bool foundChar = false; 
        for(int j = 0; j < s2.length(); j++) { 
            if (s1[i] == s2[j]) { 
                s2[j] = '*';
                foundChar = true;
                break;
            }
        }
        if (!foundChar) {
            return false; 
        }
    }
    return true; 
}

int main() { 
    ifstream inputFile("p12.txt");
    while(!inputFile.eof()) { 
        string str1, str2; 
        inputFile >> str1 >> str2;
        if (isAnagram(str1, str2)) {
            cout << str1 << " and " << str2 << " are anagram!\n";
        } else { 
            cout << str1 << " and " << str2 << " are NOT anagram!\n";
        }
    }
}