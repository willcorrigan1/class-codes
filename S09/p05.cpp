#include <iostream> 
using namespace std; 

int main() {
    string s; 
    getline(cin, s); 
    int wordcount = 0; 
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ') { 
            wordcount++;
        }
    }
    wordcount++; // for last word!
    cout << wordcount << endl; 
}