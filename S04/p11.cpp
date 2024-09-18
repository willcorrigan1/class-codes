#include<iostream> 
using namespace std; 

int main() { 
    int sideCount; 
    cout << "Enter num of sides: "; 
    cin >> sideCount; 
    if (sideCount == 3) { 
        cout << "The shape is Triangle!\n"; 
    } else if (sideCount == 4) { 
        cout << "The shape is Rectangle!\n"; 
    } else if (sideCount == 5) { 
        cout << "The shape is Pentagon!\n"; 
    } else if (sideCount == 6) { 
        cout << "The shape is Hexagon!\n"; 
    } else { 
        cout << "Number is out of range!\n";
    }
}