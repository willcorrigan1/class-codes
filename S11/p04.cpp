#include<iostream> 
using namespace std; 

double calculateArea (double l, double w) {
    return l * w; 
}

int main() { 
    cout << calculateArea(21, 3.2) << endl; 
    double a = 15.2; 
    double area = calculateArea(a, 2);
    cout << area << endl; 
}