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

void reverseArray(int a[10]) { 
    int i = 0, j = 9; 
    while (i < j) { 
        int temp = a[i]; 
        a[i] = a[j]; 
        a[j] = temp; 
        i++; 
        j--; 
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
    reverseArray(arr);
    printArray(arr);
}