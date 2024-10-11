#include <iostream> 
using namespace std; 

int main() {
    string s; 
    cout << "Enter a sentence: ";
    getline(cin, s);
    string word = "";
    string revStr= "";
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] != ' ') { 
            word =  s[i] + word;
        } else { 
            //cout << word << endl; 
            revStr = revStr + " " + word; 
            word = "";
        }
    }
    //cout << word << endl; 
    revStr = revStr + " " + word; 
    cout << "Output is: " << revStr << endl;
}