#include<iostream> 
#include<fstream>
using namespace std; 

void readArray(string fn, int a[20]) { 
    ifstream f(fn); 
    for(int i = 0; i < 20; i++) { 
        f >> a[i];
    }
    f.close(); 
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void printUnique(int a[20]) { 
    for(int i = 0; i < 20; i++) { 
        bool unique = true; 
        for (int j = 0; j < 20; j++) { 
            if (a[i] == a[j] and i != j) { 
                unique = false; 
                break; 
            }
        }
        if (unique) { 
            cout << a[i] << " ";
        }
    }
    cout << endl; 
}

int main() { 
    int a[20];
    readArray("input_unique.txt", a);
    printArray(a, 20);    
    printUnique(a);
}
