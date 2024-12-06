#include<iostream> 
#include<fstream>
using namespace std; 

void readArray(string fn, int a[10], int b[10]) { 
    ifstream f(fn); 
    for(int i = 0; i < 10; i++) { 
        f >> a[i];
    }
    for(int i = 0; i < 10; i++) { 
        f >> b[i];
    }
    f.close(); 
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void mergeArrays(int a[10], int b[10], int c[20]) { 
    int i = 0, j = 0, k = 0; 
    while(i < 10 and j < 10) { 
        if (a[i] < b[j]) { 
            c[k++] = a[i++];
        } else { 
            c[k++] = b[j++];
        }
    }
    while(i < 10) { 
        c[k++] = a[i++];
    }
    while (j < 10) { 
        c[k++] = b[j++];
    }
}

int main() { 
    int a[10], b[10];
    readArray("input_merge.txt", a, b);
    printArray(a, 10);    
    printArray(b, 10);    
    int c[20];
    mergeArrays(a, b, c); 
    printArray(c, 20);
}
