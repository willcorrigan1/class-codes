#include<iostream> 
#include<fstream> 
using namespace std; 

bool charIsNotFoundInStr(char ch, string str) { 
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] == ch) { 
            return false; 
        }
    }
    return true; 
} 

int main(){ 
    cout << "Enter a string: ";
    string str, outStr = ""; 
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) { 
        if (charIsNotFoundInStr(str[i], outStr)) { 
            outStr += str[i];
        }
    }
    cout << outStr << endl; 
}