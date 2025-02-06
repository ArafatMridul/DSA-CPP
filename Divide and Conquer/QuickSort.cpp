// Time complexity(avg) -> O(nlogn)
// Worst case T.C -> O(n2) -> when array is already sorted (when the smallest/highest element
// is constantly selected as pivot : smallest when sorted in decending order & highest when 
// sorted in ascending order)
// Space complexity -> O(1) -> constant space
// If the question states limited space, we use quickSort otherwise mergeSort
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int i = low - 1;
    int pivot = arr[high];
    for(int j=low; j<high; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[high]);
    return i;
}

void quickSort(int arr[], int low, int high) {
    if(low >= high) return;

    int pivotIdx = partition(arr, low, high);
    quickSort(arr, low, pivotIdx-1);
    quickSort(arr, pivotIdx+1, high);
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
    quickSort(arr, 0, n-1);
    printArr(arr, n);

    return 0;
}