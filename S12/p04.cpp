#include<iostream> 
#include<fstream> 
using namespace std; 

int wordCountOf(string s) { 
    int i = 0; 
    int count = 0; 
    // we assume every word except the last word is followed by a single space character
    while(i < s.length()) { 
        if (s[i] == ' ') { 
            count++; 
        }
        i++; 
    }
    return count + 1; 
}

int main() { 
    ifstream infile("destination.txt");
    int linecount = 0, wordcount = 0, charcount= 0; 
    while(!infile.eof()) { 
        string s; 
        getline(infile, s); 
        linecount++; 
        int wcInLine = wordCountOf(s); 
        wordcount += wcInLine;
        charcount += s.length(); 
    }
    cout << "Number of lines: " << linecount << endl; 
    cout << "Number of word: " << wordcount << endl; 
    cout << "Number of chars: " << charcount << endl; 
}