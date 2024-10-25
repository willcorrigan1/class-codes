#include<iostream> 
#include<fstream> 
using namespace std; 

string reverseWord(string w) { 
    string rw = ""; 
    int i = 0; 
    while(i < w.length()) { 
        rw = w[i++] + rw; 
    }
    return rw; 
}

int main() { 
    ifstream infile("p02-in.txt");
    ofstream outfile("p02-out.txt");
    while(!infile.eof()) { 
        string word; 
        infile >> word; 
        string rev = reverseWord(word); 
        outfile << rev << " "; 
    }
    infile.close();
    outfile.close(); 
}