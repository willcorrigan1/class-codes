#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[4][5], string fileName) { 
    ifstream f(fileName);
    for(int r = 0; r < 4; r++) { 
        for(int c = 0; c < 5; c++) { 
            f >> a[r][c];
        }
    }
    f.close();
}

int sumOfRow(int a[5]) { 
    int sum = 0; 
    for(int i = 0; i < 5; i++) { 
        sum += a[i];
    }
    return sum; 
}

int main() { 
    int a[4][5];
    readArray(a, "p03.txt");
    for(int i = 0; i < 4; i++) { 
        cout << sumOfRow(a[i]) << endl; 
    }
}