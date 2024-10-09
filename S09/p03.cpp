#include <iostream> 
using namespace std; 

int main() {
    string str;
    getline(cin, str);
    string newStr = "";
    for(int i = 0 ; i < str.length(); i++) { 
        newStr = str[i] + newStr; 
    }
    cout << newStr << endl; 
}