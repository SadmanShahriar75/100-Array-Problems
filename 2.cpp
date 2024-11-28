// 2. Find the Minimum Element
// Description: Given an array of integers, find the minimum element.

// Input: [4, 2, 9, 1, 5]
// Output: 1

#include<iostream>
using namespace std;

int minElement(int arr[], int n) {
    int minn = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < minn) {
            minn = arr[i];
        }
    }
    return minn;
}

int main() {
    int arr[] = {4, 2, 9, 1, 5};
    int n = sizeof(arr) / sizeof(int); 
    cout << minElement(arr, n); 
}
