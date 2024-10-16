#include <iostream> 
using namespace std; 

int main() {
    string s; 
    cout << "Enter a sentence: ";
    getline(cin, s);
    string curWord = "", longestWord = "";
    for(int i = 0; i <= s.length(); i++) { 
        if(i == s.length() or s[i] == ' ') { // next word is extracted from the sentence
            if (curWord.length() > longestWord.length()) { 
                longestWord = curWord; 
            }
            curWord = "";
        } else { 
            curWord = curWord + s[i];
        }
    }
    cout << "Longest word is: " << longestWord << ", and its length is: " << longestWord.length() << endl; 
}