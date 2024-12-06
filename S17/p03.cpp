#include<iostream> 
#include<fstream>
using namespace std; 

void readArray(string fn, int a[10]) { 
    ifstream f(fn); 
    for(int i = 0; i < 10; i++) { 
        f >> a[i];
    }
}

void printArray(int a[10]) { 
    for(int i = 0; i < 10; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void reverse(int a[10]) { 
    int i = 0, j = 9; 
    while(i < j) { 
        int temp = a[i];
        a[i++] = a[j]; 
        a[j--] = temp; 
    }
}

int main() { 
    int a[10];
    readArray("input_max_min.txt", a);
    printArray(a);
    reverse(a);
    printArray(a);
}
