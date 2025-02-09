// Time complexity -> O(2^(n+m))
#include<bits/stdc++.h>
using namespace std;

int gridWays(int row, int col, int n, int m, string path) {
    if(row == n-1 && col == m-1) {
        cout << path << endl;
        return 1;
    };
    if(row >= n || col >= m) return 0;
    return gridWays(row, col+1, n, m, path+"R") + gridWays(row+1, col, n, m, path+"D");
}

int main() {
    int n = 3;
    int m = 3;
    string path = "";
    cout << gridWays(0, 0, n, m, path);
    return 0;
}
