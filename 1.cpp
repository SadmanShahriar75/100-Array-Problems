//   1. Find the Maximum Element

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