#include<iostream> 
using namespace std; 

int main() { 
    int x, y , z; 
    cout << "Enter 3 nums: "; 
    cin >> x >> y >> z; 
    // solution 1
    if (x > y and x > z) { 
        cout << "Largest num is: " << x << endl; 
    } else if (y > x and y > z) { 
        cout << "Largest num is: " << y << endl; 
    } else { 
        cout << "Largest num is: " << z << endl; 
    }
    
    // solution 2
    int max = x; 
    if (y > max) { 
        max = y; 
    }
    if (z > max) { 
        max = z; 
    }
    cout << "Sol2 - Largest num is: " << max << endl; 

    // solution 3
    if (x > y) { 
        if (x > z) { 
            cout << "Sol3 - Largest num is: " << x << endl;             
        } else { 
            cout << "Sol3 - Largest num is: " << z << endl;             
        }
    } else if (y > x) {
        if (y > z) { 
            cout << "Sol3 - Largest num is: " << y << endl;             
        } else { 
            cout << "Sol3 - Largest num is: " << z << endl;             
        }
    } 
}