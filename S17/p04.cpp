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

int findNum(int a[10], int n) { 
    for(int i = 0; i < 10; i++) { 
        if (a[i] == n) { 
            return i; 
        }
    }
    return -1;
}

int main() { 
    int a[10];
    readArray("input_max_min.txt", a);
    printArray(a);
    int num = 0; 
    while(num != -1) { 
        cin >> num; 
        int index = findNum(a, num);
        if (index == -1) { 
            cout << "Not found!\n";
        } else {
            cout << "The number found at pos: " << index << endl; 
        }
    }
    
}
