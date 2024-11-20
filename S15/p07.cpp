#include<iostream> 
#include<fstream> 
using namespace std; 

void readArrays(int a[2][3], int b[3][4], string fileName) { 
    ifstream f(fileName);
    for(int r = 0; r < 2; r++) { 
        for(int c = 0; c < 3; c++) { 
            f >> a[r][c];
        }
    }
    for(int r = 0; r < 3; r++) { 
        for(int c = 0; c < 4; c++) { 
            f >> b[r][c];
        }
    }
    f.close();
}

void printMatrix(int a[2][4]) { 
    for(int i = 0; i < 2; i++) { 
        for (int j = 0; j < 4; j++) { 
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
}

void multiplyRowNCol(int a[2][3], int b[3][4], 
                     int res[2][4], int r, int c, int size) { 
    int sum = 0; 
    for(int i =0; i < size; i++) { 
        sum += a[r][i] * b[i][c];
    }
    res[r][c] = sum;
}

int main() { 
    int a[2][3], b[3][4], c[2][4];
    readArrays(a, b, "p07.txt");
    // calculate the mul res
    for(int i = 0; i < 2; i++) { 
        for(int j = 0; j < 4; j++) { 
            multiplyRowNCol(a, b, c, i, j, 3);
        }
    }
    printMatrix(c);
}