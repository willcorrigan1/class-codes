#include<iostream> 
using namespace std; 

int main() { 
    int x, y; 
    cout << "Enter the coordinates: "; 
    cin >> x >> y; 
    // we ignore the points when x = 0 or y = 0 and assume they are on right or top half
    if (x >= 0 and y >= 0) { 
        cout << "The point is in the Top-right quadrant!\n";
    } else if (x < 0 and y >= 0) { 
        cout << "The point is in the Top-left quadrant!\n";
    } else if (x < 0 and y < 0) { 
        cout << "The point is in the Bottom-left quadrant!\n";
    } else if (x >= 0 and y < 0) { 
        cout << "The point is in the Bottom-Right quadrant!\n";
    }
}