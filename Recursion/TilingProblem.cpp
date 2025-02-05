// Function to calculate the number of ways to tile a 2xn floor using 2x1 tiles
// Time Complexity: O(2^n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int tp(int n) {
    if(n == 0 || n == 1) return 1;

    return tp(n - 1) + tp(n - 2);
}

int main() {
    int n = 3; //2xn matrix
    cout << tp(n) << endl;
    return 0;
}