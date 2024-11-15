#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[3][4], string fileName) { 
    ifstream f(fileName);
    for(int r = 0; r < 3; r++) { 
        for(int c = 0; c < 4; c++) { 
            f >> a[r][c];
        }
    }
    f.close();
}

int sumOfRow(int a[4]) { 
    int sum = 0; 
    for(int i = 0; i < 4; i++) { 
        sum += a[i];
    }
    return sum; 
}

int main() { 
    int a[3][4];
    readArray(a, "p05.txt");
    int max, rowIndex; 
    for(int i = 0; i < 3; i++) { 
        int sum = sumOfRow(a[i]);
        if (i == 0) { 
            max = sum; 
            rowIndex = 0;
        } else if (sum > max) { 
            max = sum; 
            rowIndex = i; 
        }
    }

    for(int i = 0; i < 4; i++) { 
        cout << a[rowIndex][i] << " ";
    }
    cout << endl; 
}