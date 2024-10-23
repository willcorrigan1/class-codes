#include<iostream> 
using namespace std; 

double calculateSum(double x, double y) { 
    return x + y; 
}

int main() { 
    cout << calculateSum(5, 12.9) << endl; 
    double a = 12.3; 
    cout << calculateSum(a, a) << endl; 
    double f = calculateSum(a, 29.3); 
    cout << f << endl; 
}