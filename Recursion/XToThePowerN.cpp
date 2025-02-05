// Here we can solve this problem using normal recursion or 
// loop but that will cost time complexity of O(n).
// But doing this way of dividing the power by 2 will result
// in time complexity of O(logn).

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    if (n == 0)
        return 1;

    int halfPower = power(x, n / 2);
    int halfPowerSquare = halfPower * halfPower;

    if (n % 2 == !0)
        return x * halfPowerSquare;
    return halfPowerSquare;
}

int main()
{
    cout << power(2, 10) << endl;
    return 0;
}