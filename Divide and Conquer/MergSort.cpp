// Time complexity -> O(nlogn)
// Space complexity -> O(n)
#include <bits/stdc++.h>
using namespace std;

void mergeArr(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= high) {
        temp.push_back(arr[j++]);
    }

    for (int idx = low, x = 0; idx <= high; idx++, x++) {
        arr[idx] = temp[x];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeArr(arr, low, mid, high);
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int arr[n] = {1, 3, 5, 2, 4, 6};
    mergeSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}