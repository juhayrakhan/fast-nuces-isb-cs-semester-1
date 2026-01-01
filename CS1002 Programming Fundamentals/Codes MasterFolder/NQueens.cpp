#include <iostream>
using namespace std;

int countSolutions = 0;

bool isSafe(int row, int col, int n, int* cols, int* diag1, int* diag2) {
    return cols[col] == 0 && diag1[row + col] == 0 && diag2[row - col + n - 1] == 0;
}

void solveNQueens(int row, int n, int* cols, int* diag1, int* diag2) {
    if (row == n) {
        countSolutions++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, n, cols, diag1, diag2)) {
            
            cols[col] = diag1[row + col] = diag2[row - col + n - 1] = 1;

            solveNQueens(row + 1, n, cols, diag1, diag2);

            cols[col] = diag1[row + col] = diag2[row - col + n - 1] = 0;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int cols[20] = {0};    // Track columns
    int diag1[40] = {0};   // Track "/" diagonals
    int diag2[40] = {0};   // Track "\" diagonals

    solveNQueens(0, n, cols, diag1, diag2);

    cout << countSolutions;

    return 0;
}
