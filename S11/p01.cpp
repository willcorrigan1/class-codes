#include<iostream> 
using namespace std; 

bool isPalindrome(string s) { 
    int i = 0; 
    int j = s.length() - 1; 
    while (i < j) { 
        if (s[i] != s[j]) { 
            return false; 
        }
        i++; 
        j--; 
    }
    return true; 
}

int main() { 
    for(int i = 0; i < 3; i++) { 
        cout << "Enter a string: ";
        string str; 
        getline(cin, str);
        bool isPal = isPalindrome(str);
        if (isPal) { 
            cout << "The string is a Palindrome!\n";
        } else { 
            cout << "The string is NOT a Palindrome!\n";
        }
    }
}