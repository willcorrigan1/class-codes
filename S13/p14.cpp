#include<iostream> 
using namespace std; 

// her history book is here
// here
// ASDF ASDFJASAD ;SADFA ASDF ASFDASSFD
// SADF
int findWord(string s, string w) { 
    for(int startPos = 0; startPos <= s.length() - w.length(); startPos++) { 
        int i = startPos; 
        int j = 0; 
        while(j < w.length() and s[i] == w[j]) { 
            i++; 
            j++; 
        }
        if (j == w.length()) { 
            return startPos; 
        }
    }
    return -1; 
}

int main() { 
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    string word;
    cout << "Enter a word to search: ";
    cin >> word; 
    int pos = findWord(str, word);
    if (pos >= 0) { 
        cout << "Word found at position " << pos << endl; 
    } else { 
        cout << "Word not found in the sentence!\n";
    }
}