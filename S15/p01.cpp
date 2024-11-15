#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[10], string fileName) { 
    ifstream f(fileName);
    for(int i = 0; i < 5; i++) { 
        f >> a[i];
    }
    f.close();
}

int calculateSum(int a[5]) { 
    int s = 0; 
    for(int i = 0; i < 5; i++) { 
        s+=a[i];
    }
    return s; 
}

float calculateAverage(int a[5]) { 
    float s = calculateSum(a);
    return s/5;
}


int main() { 
    int a[5];
    readArray(a, "in.txt");
    int s = calculateSum (a);
    cout << s << endl; 
    float av = calculateAverage(a);
    cout << av << endl; 
}