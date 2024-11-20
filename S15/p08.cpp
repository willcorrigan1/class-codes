#include<iostream> 
#include<fstream> 
using namespace std; 

void printBoard(char b[3][3]) { 
    for(int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << b[i][j] << " ";
        }
        cout << endl; 
    }
}

void makeAMoveForPlayer(char curPlayer, char board[3][3]) { 
    int r, c; 
    while(true) { 
        cout << endl << curPlayer << "'s turn!\n";
        cout << "Enter row and col # (0-2):";
        cin >> r >> c; 
        if (r < 3 and r >= 0 and c < 3 and c >= 0 and board[r][c] == '_') { 
            board[r][c] = curPlayer;
            break;
        }
        cout << "Wrong choice! Try again!\n";
    }
}

bool checkIfWeHaveWinner(char b[3][3]) { 
    bool someoneWon = false;
    // check rows 
    for(int r = 0; r < 3; r++) { 
        if (b[r][0] == b[r][1] and b[r][1] == b[r][2] and b[r][0] != '_') { 
            someoneWon = true; 
            cout << "Player " << b[r][0] << " won!\n";
        }
    }
    // check cols
    for(int c = 0; c < 3; c++) { 
        if (b[0][c] == b[1][c] and b[1][c] == b[2][c] and b[0][c] != '_') { 
            someoneWon = true; 
            cout << "Player " << b[0][c] << " won!\n";
        }
    }

    if (b[0][0] == b[1][1] and b[1][1] == b[2][2] and b[0][0] != '_') { 
        someoneWon = true; 
        cout << "Player " << b[0][0] << " won!\n";
    }

    if (b[0][2] == b[1][1] and b[1][1] == b[2][0] and b[0][2] != '_') { 
        someoneWon = true; 
        cout << "Player " << b[0][2] << " won!\n";
    }

    return someoneWon; 
}

int main() { 
    char board[3][3] = { {'_','_','_'},
                         {'_','_','_'},
                         {'_','_','_'}};
    printBoard(board);
    char curPlayer = 'O';
    int remainingSpots = 9; 
    while(true) { 
        makeAMoveForPlayer(curPlayer, board);
        printBoard(board);
        bool gameEnded = checkIfWeHaveWinner(board);
        if(gameEnded) { 
            break; 
        }
        curPlayer = (curPlayer == 'O') ? 'X' : 'O';
        remainingSpots--; 
        if (remainingSpots == 0) { 
            cout << "It is a draw!\n";
            break; 
        }
    }
}