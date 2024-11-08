#include<iostream> 
#include<fstream> 
using namespace std; 

int main() { 
    ifstream f("p03.txt");
    int arr[10]; 
    
    for(int i = 0; i < 10; i++) { 
        f >> arr[i];
    }

    for(int i = 0; i < 10; i+=2) { 
        if (arr[i] > arr[i+1]) { 
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp; 
        }
    }

    for(int i = 0; i < 10; i++) { 
        cout << arr[i] << " "; 
    }
    cout << endl; 
}