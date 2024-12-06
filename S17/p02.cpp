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

void printMinMax(int a[10]) { 
    int min = a[0], max = a[0];
    for(int i = 1; i < 10; i++) { 
        if (a[i] < min) { 
            min = a[i];
        }
        if (a[i] > max) { 
            max = a[i];
        }
    }
    cout << min << " " << max << endl; 
}

int main() { 
    int a[10];
    readArray("input_max_min.txt", a);
    printArray(a);
    printMinMax(a);
}
