#include <iostream> 
using namespace std; 

int main() {
    srand(time(0));
    int randomNum = rand() % 101;
    //cout << randomNum << endl; 
    cout << "Let's play a game. I am choosing a number between 1 and 100. And you guess the number. Let's go!\n";
    while(true) { 
        cout << "What is your guess? ";
        int num; 
        cin >> num; 
        if (num == randomNum) { 
            cout << "Good job! You found it!\n";
            break; 
        } else if (num > randomNum) { 
            cout << "Too high! Try again!\n";
        } else if (num < randomNum) { 
            cout << "Too low! Try again!\n";
        }
    }
}