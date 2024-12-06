#include<iostream> 
using namespace std; 

int main() { 
    int a[] = {12, 19, 29, 3, 17, 51, 28, 9, 10, 66}; 
    for(int i = 0; i < 10; i++) { 
        // select
        int minPos = i; 
        for(int j = i; j < 10; j++) { 
            if (a[j] < a[minPos]) { 
                minPos = j; 
            }
        }
        // swap
        int temp = a[minPos]; 
        a[minPos] = a[i]; 
        a[i] = temp; 
    }

    for(int i = 0; i < 10; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}
