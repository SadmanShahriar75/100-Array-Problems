// 1. Find the Maximum Element
// Description: Given an array of integers, find the maximum element.

// Input: [3, 5, 7, 2, 8]
// Output: 8

#include<iostream>
using namespace std;

int maxElement(int arr[], int n) {
    int maxx = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxx) {
            maxx = arr[i];
        }
    }
    return maxx;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int n = sizeof(arr) / sizeof(int); 
    cout << maxElement(arr, n); 
}