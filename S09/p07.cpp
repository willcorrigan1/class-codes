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
            word += s[i];
        } else { 
            //cout << word << endl; 
            revStr = word + " " + revStr; 
            word = "";
        }
    }
    //cout << word << endl; 
    revStr = word + " " + revStr;
    cout << "Output is: " << revStr << endl;
}