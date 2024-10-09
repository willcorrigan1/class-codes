#include <iostream> 
using namespace std; 

int main() {
    string str;
    getline(cin, str);
    char ch1, ch2; 
    cin >> ch1 >> ch2; 
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] == ch1) { 
            str[i] = ch2; 
        }
    }
    cout << str << endl; 
}