#include<iostream> 
#include<fstream> 
using namespace std; 

int main() { 
    ifstream inFile("source.txt");
    ofstream outFile("destination.txt", ios::app); // to append to the file
    while(!inFile.eof()) { 
        string s; 
        getline(inFile, s); 
        outFile << s << endl; 
    }
    inFile.close(); 
    outFile.close(); 
}