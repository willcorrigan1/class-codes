#include<iostream> 
#include<fstream> 
using namespace std; 

void playTheGame(int num) { 
    int guess; 
    do { 
        cout << "What is your guess? "; 
        cin >> guess; 
        if (guess > num) { 
            cout << "too high!\n"; 
        } else if (guess < num) { 
            cout << "too low!\n"; 
        } else { 
            cout << "you found it!\n";
            break; 
        }

    } while(guess != num); 
}

int main() { 
    ifstream infile("p01.txt");
    while(!infile.eof()) { 
        int numToGuess; 
        infile >> numToGuess; 
        playTheGame(numToGuess); 
        cout << "Do you wnat to continue? (enter n to end) "; 
        char ch; 
        cin >> ch; 
        if (ch == 'n') { 
            break; 
        }
    }
    infile.close(); 
}