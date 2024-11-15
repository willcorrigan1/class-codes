#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[10], string fileName) { 
    ifstream f(fileName);
    for(int i = 0; i < 10; i++) { 
        f >> a[i];
    }
    f.close();
}

int main() { 
    int a[10];
    readArray(a, "p03.txt");
    int b[5];
    for(int i = 2; i <= 6; i++) { 
        b[i-2] = a[i];
    }
    for(int i = 0; i < 5; i++) { 
        cout << b[i] << " ";
    }
    cout << endl; 
}