#include <iostream>
#include <vector>

bool isSafe(std::vector<std::vector<int>>& board, int row, int col) {
    // Check if there is a queen in the same column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }

    // Check if there is a queen in the upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check if there is a queen in the upper right diagonal
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool solveNQueens(std::vector<std::vector<int>>& board, int row) {
    if (row == board.size()) {
        // All queens have been placed successfully
        return true;
    }

    for (int col = 0; col < board.size(); col++) {
        if (isSafe(board, row, col)) {
            // Place the queen at (row, col)
            board[row][col] = 1;

            // Recursively solve for the next row
            if (solveNQueens(board, row + 1)) {
                return true;
            }

            // Backtrack and remove the queen from (row, col)
            board[row][col] = 0;
        }
    }

    return false;
}

void printBoard(const std::vector<std::vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row) {
            std::cout << (cell == 1 ? "Q " : ". ");
        }
        std::cout << std::endl;
    }
}

int main() {
    int n = 8; // Size of the chessboard
    std::vector<std::vector<int>> board(n, std::vector<int>(n, 0));

    if (solveNQueens(board, 0)) {
        printBoard(board);
    } else {
        std::cout << "No solution exists." << std::endl;
    }

    return 0;
}

