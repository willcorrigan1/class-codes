#include<iostream> 
#include<fstream> 
using namespace std; 

string processString(string str) { 
    string outStr = ""; 
    for(int i = 0; i < str.length(); i++) { 
        bool foundSmaller = false; 
        for(int j = i+1; j < str.length(); j++) { 
            if (str[i] > str[j]) { 
                foundSmaller = true; 
                break; 
            }
        }
        if (!foundSmaller) { 
            outStr += str[i];
        }
    }
    return outStr;
}

int main() { 
    ifstream inputFile("p11-in.txt");
    ofstream outputFile("p11-out.txt");
    while(!inputFile.eof()) { 
        string str; 
        inputFile >> str; 
        string outStr = processString(str);
        outputFile << outStr << endl; 
    }
}