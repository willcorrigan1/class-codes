#include<iostream> 
#include<fstream> 
using namespace std; 

int main() { 
    ifstream inputFile("input.txt");
    while (!inputFile.eof()) { 
        string s; 
        getline(inputFile, s); 
        cout << s << endl; 
    }
    inputFile.close(); 
}