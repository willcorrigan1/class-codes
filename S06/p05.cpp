#include<iostream> 
using namespace std; 

int main() { 
    int numGrade; 
    cout << "Enter the numerical grade: ";
    cin >> numGrade; 
    int gr = numGrade / 10; 
    gr = (numGrade > 100 or numGrade < 0) ? -1 : gr; 
    // if (numGrade > 100 or numGrade < 0) { 
    //  gr = -1;
    //}
    switch (gr)
    {
        case 10: 
        case 9: cout << "A\n"; break; 
        case 8: cout << "B\n"; break; 
        case 7: cout << "C\n"; break; 
        case 6: cout << "D\n"; break; 
        case 5: 
        case 4: 
        case 3: 
        case 2:
        case 1: 
        case 0: cout << "F\n"; break; 
        default: cout << "Invalid input!\n"; 
    }
}