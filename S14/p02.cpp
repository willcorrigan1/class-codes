#include<iostream> 
using namespace std; 

int main() { 
    int arr[7]; 
    
    for(int i = 0; i < 7; i++) { 
        cin >> arr[i];
    }

    int oddsSum = 0, evensSum = 0;
    for(int i = 0; i < 7; i+=2) { 
        evensSum += arr[i];
        cout << arr[i]; 
        if (i != 6) { 
            cout << " + ";
        }
    }
    cout << " = " << evensSum << endl;

    for(int i = 1; i < 7; i+=2) { 
        oddsSum += arr[i];
        cout << arr[i]; 
        if (i != 5) { 
            cout << " + ";
        }
    }
    cout << " = " << oddsSum << endl; 
}