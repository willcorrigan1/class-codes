#include<iostream> 
using namespace std; 

int main() { 
    int numOfSides; 
    cout << "Enter number of sides: ";
    cin >> numOfSides; 
    switch (numOfSides) { 
      case 4: 
        cout << "Quadrilaterals\n";
        break; 
      case 3: 
        cout << "Triangles\n";
        break; 
      case 5: 
        cout << "Pentagons\n";
        break; 
      case 6: 
        cout << "Hexagons\n";
        break; 
      default: 
        cout << "Invalid input!\n";
    }
}