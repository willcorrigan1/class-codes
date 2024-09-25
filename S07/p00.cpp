#include<iostream> 
using namespace std; 

int main() { 
    char minMax; 
    cin >> minMax; 
    int a, b, c; 
    cin >> a >> b >> c; 
    int min = a; 
    int max = a; 
    if (b > max) { 
        max = b;
    }
    if (c > max) { 
        max = c; 
    }
    if (b < min) { 
        min = b; 
    }
    if (c < min) { 
        min = c; 
    }
    if (minMax == 'm') { 
        cout << min << endl; 
    }
    if (minMax == 'x') { 
        cout << max << endl; 
    }
}