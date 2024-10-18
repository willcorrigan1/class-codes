#include <iostream> 
using namespace std; 

int main() {
    string name1, name2; 
    cout << "Enter two names: ";
    cin >> name1 >> name2; 
    string smallerName = ""; // alphabetical smaller
    int i = 0; 
    while(true) {
        if (name1.length() == i) { 
            smallerName = name1; 
            break;
        } else if (name2.length() == i) { 
            smallerName = name2; 
            break; 
        }
        
        if (name1[i] < name2[i]) { 
            smallerName = name1;
            break; 
        } else if (name2[i] < name1[i]) { 
            smallerName = name2; 
            break; 
        }
        i++; 
    }
    cout << smallerName << endl; 
}