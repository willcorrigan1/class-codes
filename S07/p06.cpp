#include <iostream> 
using namespace std; 

int main() {
    string s; 
    getline(cin, s); 
    s[0] = 'S';
    s[s.length() - 1] = 'S'; 
    cout << s << endl; 
}