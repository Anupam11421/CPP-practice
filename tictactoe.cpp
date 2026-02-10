#include <iostream>
#include <vector>

using namespace std;

// The game board
vector<vector<char>> board = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// Function to draw the game board
void drawBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

// Function to handle player move
void playerMove(char player) {
    int move;
    cout << "Player " << player << ", enter your move (1-9): ";
    cin >> move;

    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
    } else {
        cout << "Invalid move, try again.\n";
        playerMove(player);
    }
}

// Function to check for a win
bool checkWin(char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check for a draw
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char currentPlayer = 'X';

    while (true) {
        drawBoard();
        playerMove(currentPlayer);

        if (checkWin(currentPlayer)) {
            drawBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (checkDraw()) {
            drawBoard();
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}