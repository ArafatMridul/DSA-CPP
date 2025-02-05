#include<bits/stdc++.h>
using namespace std;

int func(int n) {
    if(n == 1 || n == 2) return n;

    return func(n-1) + (n-1)*func(n-2);
}

int main() {
    cout << func(4) << endl;
    return 0;
}