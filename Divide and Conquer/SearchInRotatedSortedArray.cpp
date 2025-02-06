#include<bits/stdc++.h>
using namespace std;

int modifiedBS(int arr[], int low, int high, int target) {
    if(low > high) return -1;

    int mid = low + (high - low) / 2;
    if(arr[mid] == target) return mid;

    if(arr[low] <= arr[mid]) { // line 1
        if(arr[low] <= target && target < arr[mid]) {
            return modifiedBS(arr, low, mid-1, target);
        } else {
            return modifiedBS(arr, mid+1, high, target);
        }
    } else { // line 2
        if(arr[mid] < target && target <= arr[high]) {
            return modifiedBS(arr, mid + 1, high, target);
        } else {
            return modifiedBS(arr, low, mid-1, target);
        }
    }
}

int main() {
    int n = 7;
    int arr[n] = {4, 5, 6, 7, 0, 1, 2};
    cout << modifiedBS(arr, 0, n-1, 0) << endl;

    return 0;
}