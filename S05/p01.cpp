#include<iostream> 
using namespace std; 

int main() { 
    float grade; 
    char letterGrade = '-';
    cout << "Enter the numerical grade (0-100): ";
    cin >> grade; 
    if (grade >= 90 and grade <= 100) { 
        letterGrade = 'A';
    } else if (grade >= 80 and grade < 90) { 
        letterGrade = 'B';
    } else if (grade >= 70 and grade < 80) { 
        letterGrade = 'C';
    } else if (grade >= 60 and grade < 70) { 
        letterGrade = 'D';
    } else if (grade >= 0 and grade < 60) { 
        letterGrade = 'F';
    } else { 
        cout << "Numerical grade is invalid!\n";
    }
    if (letterGrade != '-') { 
        cout << "Letter grade is " << letterGrade << endl;
    }
}