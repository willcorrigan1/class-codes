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

int main() { 
    int arr[10];
    readArray(arr, "p03.txt");
    int max , secondLargest;
    if (arr[0] > arr[1]) { 
        max = arr[0];
        secondLargest = arr[1];
    } else { 
        max = arr[1]; 
        secondLargest = arr[0]; 
    }

    for(int i = 2; i < 10; i++) { 
        if (arr[i] > max) { 
            secondLargest = max; 
            max = arr[i];
        } else if (arr[i] > secondLargest) { 
            secondLargest = arr[i];
        }
    }

    cout << secondLargest << endl; 
}