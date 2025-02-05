#include<bits/stdc++.h>
using namespace std;

void binString(int n, string ans, int lastPlace) {
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1) {
        binString(n-1, ans + '0', 0);
        binString(n-1, ans + '1', 1);
    } else {
        binString(n-1, ans + '0', 0);
    }
}

int main() {
    string ans = "";
    binString(3, ans, 0);
    return 0;
}