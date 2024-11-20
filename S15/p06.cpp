
#include<iostream> 
#include<fstream> 
using namespace std; 

void readArrays(int a[2][3], int b[2][3], string fileName) { 
    ifstream f(fileName);
    for(int r = 0; r < 2; r++) { 
        for(int c = 0; c < 3; c++) { 
            f >> a[r][c];
        }
    }
    for(int r = 0; r < 2; r++) { 
        for(int c = 0; c < 3; c++) { 
            f >> b[r][c];
        }
    }
    f.close();
}

void addArrays(int a[2][3], int b[2][3], int res[2][3]) { 
    for(int i = 0; i < 2; i++) { 
        for (int j = 0; j < 3; j++) { 
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

void printMatrix(int a[2][3]) { 
    for(int i = 0; i < 2; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
}

int main() { 
    int a[2][3], b[2][3], c[2][3];
    readArrays(a, b, "p06.txt");
    addArrays(a, b, c);
    printMatrix(c);
}