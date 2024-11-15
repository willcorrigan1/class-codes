#include<iostream> 
#include<fstream> 
using namespace std; 

void readArrays(int a[5], int b[5], string fileName) { 
    ifstream f(fileName);
    for(int i = 0; i < 5; i++) { 
        f >> a[i];
    }
    for(int i = 0; i < 5; i++) { 
        f >> b[i];
    }
    f.close();
}

int main() { 
    int a[5], b[5];
    int c[10];
    readArrays(a, b, "p11.txt");
    for(int i = 0; i < 5; i++) { 
        c[i] = a[i];
    }
    for(int i = 0; i < 5; i++) { 
        c[i+5] = b[i];
    }
    for(int i = 0; i < 10; i++) { 
        cout << c[i] << " ";
    }
    cout << endl; 
}