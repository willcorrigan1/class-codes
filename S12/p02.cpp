#include<iostream> 
#include<fstream> 
using namespace std; 

int main() { 
    ofstream outFile("output.txt");
    for(int i = 0; i < 5; i++) { 
        string s; 
        cout << "Enter a line to add to the file: "; 
        getline(cin, s);
        outFile << s << endl; 
    }
    outFile.close();
}