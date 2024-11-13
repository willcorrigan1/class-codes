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

void doubleArray(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        a[i] *= 2; 
    }
}

void printArray(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

int main() { 
    int arr[10];
    readArray(arr, "p03.txt");
    doubleArray(arr);
    printArray(arr);
}