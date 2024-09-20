#include<iostream> 
using namespace std; 

int main() {
    int expYear; 
    cout << "Enter the expiration year of the DL: "; 
    cin >> expYear; 
    // not using shorthand if/else
    string s; 
    if (expYear > 2024) { 
        s = "Not expired!\n";
    } else { 
        s = "expired!\n"; 
    }
    cout << s; 

    //using shorthad if/else
    s = (expYear > 2024) ? "Not expired!\n" : "Expired!\n";
    cout << s; 
}