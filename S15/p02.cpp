#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[4][4], string fileName) { 
    ifstream f(fileName);
    for(int r = 0; r < 4; r++) { 
        for(int c = 0; c < 4; c++) { 
            f >> a[r][c];
        }
    }
    f.close();
}

void printMainDiag(int a[4][4]) { 
    for(int i = 0; i < 4; i++) { 
        cout << a[i][i] << " ";
    }
    cout << endl; 
}

int main() { 
    int a[4][4];
    readArray(a, "p02.txt");
    printMainDiag(a);
}