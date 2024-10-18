#include <iostream> 
using namespace std; 

int main() {
    string str; 
    getline(cin, str);
    string newStr = "";
    int i = 0; 
    while (i < str.length()) { 
        if (str[i] != ' ') { 
            newStr += str[i];
        }
        i++;
    }
    cout << newStr << endl;
}