#include<iostream> 
using namespace std; 

int main() { 
    int a1, a2, a3; 
    cout << "Enter 3 angles of the triangle: "; 
    cin >> a1 >> a2 >> a3; 
    if (a1 <= 0 or a2 <= 0 or a3 <= 0 or a1 + a2 + a3 != 180) { 
        cout << "It is not a valid triangle!\n";
    } else { 
        if (a1 == 90 or a2 == 90 or a3 == 90) { 
            cout << "It is a right triangle!\n";
        } else if (a1 >= 90 or a2 >= 90 or a3 >= 90) { 
            cout << "It is an obtuse triangle!\n";
        } else {
            cout << "It is an acute triangle!\n";
        }
    }

}