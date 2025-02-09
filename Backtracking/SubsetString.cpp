// Time complexity -> O(2^n)
// Space complexity -> O(n) -> height of the recursion tree in call space
#include<bits/stdc++.h>
using namespace std;

void subsetString(string str, string subset) {
    if(str.size() == 0) {
        cout << subset << endl;
        return;
    }

    char ch = str[0];
    // yes choice
    subsetString(str.substr(1, str.size()-1), subset+ch);
    // no choice
    subsetString(str.substr(1, str.size()-1), subset);
}

int main() {
    string str = "abc";
    string subset = "";
    subsetString(str, subset);
    return 0;
}