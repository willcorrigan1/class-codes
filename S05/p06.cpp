#include<iostream> 
using namespace std; 

int main() {
    int sideCount; 
    cout << "Enter number of sides: ";
    cin >> sideCount; 
    string shapeName = ""; 
    if (sideCount != 3 and sideCount != 4) { 
        cout << "Invalid input!\n";
    } else { 
        shapeName = (sideCount == 3) ? "Triangle" : "Quadrilateral";
        cout << shapeName << endl; 
    }
}