#include<iostream> 
#include<fstream> 
using namespace std; 

string generateARow(int c, char ch) { 
    string row = ""; 
    for(int i = 0; i < c; i++) { 
        row += ch; 
        ch = (ch == 'X') ? 'O' : 'X';
    }
    return row + "\n";
}

int main(){ 
    ofstream outfile("p05.txt");
    int r, c; 
    cout << "Enter two numbers: ";
    cin >> r >> c; 
    char ch = 'X';
    for(int i = 0; i < r; i++) { 
        string s = generateARow(c, ch);
        ch = (ch == 'X') ? 'O' : 'X';
        outfile << s; 
    }
    outfile.close();
}