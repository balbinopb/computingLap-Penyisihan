#include <iostream>
#include <cmath>

using namespace std;

int columnToIdx(char col) {
    return col - 'a' + 1;
}

int rookMoves(int row, int col) {
    return 14;
}

int bishopMoves(int row, int col) {
    return min(row - 1, col - 1) + min(row - 1, 8 - col) +
           min(8 - row, col - 1) + min(8 - row, 8 - col);
}

int queenMoves(int row, int col) {
    return rookMoves(row, col) + bishopMoves(row, col);
}

int knightMoves(int row, int col) {
    int moves = 0;
    int knightRow[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int knightCol[] = {1, 2, 2, 1, -1, -2, -2, -1};
    for (int i = 0; i < 8; i++) {
        int newRow = row + knightRow[i];
        int newCol = col + knightCol[i];
        if (newRow >= 1 && newRow <= 8 && newCol >= 1 && newCol <= 8) {
            moves++;
        }
    }
    return moves;
}

int main() {
    string piece, posisiCatur;
    cin >> piece;
    cin >> posisiCatur;

    int col = columnToIdx(posisiCatur[0]);
    int row = posisiCatur[1] - '0';

    int possibleMoves = 0;
    if (piece == "rook") {
        possibleMoves = rookMoves(row, col);
    } else if (piece == "bishop") {
        possibleMoves = bishopMoves(row, col);
    } else if (piece == "queen") {
        possibleMoves = queenMoves(row, col);
    } else if (piece == "knight") {
        possibleMoves = knightMoves(row, col);
    } else {
        return 1;
    }

    cout << possibleMoves << endl;
    return 0;
}
