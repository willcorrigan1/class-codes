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

bool find(int a[10], int num) { 
    for(int i = 0; i < 10; i++) { 
        if (num == a[i]) { 
            return true; 
        }
    }
    return false; 
}

int main() { 
    int arr[10];
    readArray(arr, "p03.txt");
    while(true) { 
        int num; 
        cout << "Enter a num to find: ";
        cin >> num; 
        if (num == 0) { 
            break; 
        }
        if (find(arr, num)) { 
            cout << "Found!\n";
        } else { 
            cout << "Not Found!\n";
        }
    }
}