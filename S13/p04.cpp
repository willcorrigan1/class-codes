#include<iostream> 
#include<fstream> 
using namespace std; 

string generateLine(int num) { 
    string s = "";
    for(int i = 1; i <= 10; i++) { 
        s += (to_string(num)  + "*" + to_string(i) + "=" + to_string(num * i) + ", ");
    }
    return s + "\n";
}

int main() { 
    ofstream outFile("p04-out.txt");
    for(int i = 1; i <= 10; i++) { // for each row of table
        string line = generateLine(i);
        outFile << line;
    }
    outFile.close(); 
}