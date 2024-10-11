#include <iostream> 
using namespace std; 

int main() {
    // John Lauren Samuel Nicholas Eva
    string s;
    cout << "Enter the names in one line: ";
    getline(cin, s); 
    string smallestName = "";
    string currentName = "";
    for(int i = 0; i < s.length(); i++) { 
        if (s[i] != ' ') { 
            currentName += s[i];
        } else { // if s[i] is ' ' 
            //cout << currentName << endl; 
            if (smallestName == "" or  currentName[0] < smallestName[0]) { 
                smallestName = currentName;
            }
            currentName = "";
        }
    }
    //cout << currentName << endl; 
    if (smallestName == "" or  currentName[0] < smallestName[0]) { 
        smallestName = currentName;
    }
    cout << "The name that is the first one in alphabetical order is: " << smallestName << endl;
}