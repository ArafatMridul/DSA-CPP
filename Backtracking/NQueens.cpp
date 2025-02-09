#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>> &board, int row, int col) {
    int n = board.size();
    // same row
    for(int i=0; i<n; i++) {
        if(board[row][i] == 'Q') {
            return false;
        }
    }
    // Same column
    for(int j=row; j>=0; j--) {
        if(board[j][col] == 'Q') {
            return false;
        }
    }
    // Diagonal Check
    // upper left diagonal
    for(int i=row, j=col; i>=0 && j>=0; i--, j--) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }
    // upper right diagonal
    for(int i=row, j=col; i>=0 && j<n; i--, j++) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void printBoard(vector<vector<char>> &ans) {
    int n = ans.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------" << endl;
}

void nQueens(vector<vector<char>> &board, vector<vector<vector<char>>> &ans, int row) {
    int n = board.size();
    if(row == n) {
        ans.push_back(board);
        printBoard(board);
        return;
    }
    
    for(int i=0; i<n; i++) {
        if(isSafe(board, row, i)) {
            board[row][i] = 'Q';
            nQueens(board, ans, row+1);
            board[row][i] = '.';
        }
    }
}

int main() {
    int n = 5;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    vector<vector<vector<char>>> ans;
    nQueens(board, ans, 0);
    cout << "Total possible combinations : " << ans.size();
    return 0;
}