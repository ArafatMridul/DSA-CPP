#include<bits/stdc++.h>
using namespace std;

// First approach
void removeDuplicate1(string str, int index, string &ans, bool map[26]) {
    if(index == str.size()) return;
    
    if(!map[str[index] - 'a']) {
        map[str[index] - 'a'] = true;
        ans += str[index];
    }
    removeDuplicate1(str, index + 1, ans, map);
}

// Second Approach
// This approach forms the ans string recursively and returns 
// it without creating an extra ans string.
string removeDuplicate2(string str, int index, bool map[26]) {
    if(index == str.size()) return "";
    
    if (!map[str[index] - 'a']) {
        map[str[index] - 'a'] = true;
        return str[index] + removeDuplicate2(str, index + 1, map);
    } else {
        return removeDuplicate2(str, index + 1, map);
    }
}


int main() {
    string str = "appnnacollege";
    bool map[26] = {false};
    string ans = "";
    // removeDuplicate1(str, 0, ans, map);
    ans = removeDuplicate2(str, 0, map);
    cout << ans;

    return 0;
}