#include <iostream> 
using namespace std; 

int main() {
    // string s; 
    // getline(cin, s); 
    // int wordcount = 0; 
    // for(int i = 0; i < s.length(); i++) { 
    //     if (s[i] == ' ') { 
    //         wordcount++;
    //     }
    // }
    // wordcount++; // for last word!
    // cout << wordcount << endl; 

    // bonus version
    string str1; 
    cout << "Enter a string for the bonus version: ";
    getline(cin, str1);
    bool spaceSeen = true; 
    int wordcount = 0; 
    // str1 = " hi  saddle back a  "
    for(int i=0; i< str1.length();i++) { 
        if (str1[i] == ' ') { 
            spaceSeen = true; 
        } else { // a non space char
            if (spaceSeen == true) { 
                spaceSeen = false; 
                wordcount++; 
            }
        }
    }
    cout << "word count: " << wordcount << endl; 
}