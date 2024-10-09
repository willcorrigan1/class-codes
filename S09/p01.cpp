#include <iostream> 
using namespace std; 

int main() {
    string str; 
    cout << "Enter a string: ";
    getline(cin, str);
    char ch; 
    cout << "Enter a char: "; 
    cin >> ch; 
    int counter = 0; 
    for(int i = 0; i < str.length(); i++) { 
        if (str[i] == ch) {
            counter++; 
        }
    }
    cout << "The character showed up " << counter << " times in the string!\n";
}