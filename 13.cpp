
// 13. Merge Two Sorted Arrays
// Description: Merge two sorted arrays into one sorted array.

// Input: arr1 = [1, 3, 5], arr2 = [2, 4, 6]
// Output: [1, 2, 3, 4, 5, 6]




#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeArray(int arr1[], int arr2[],  int n, int m) {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        } else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;  
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n  = sizeof(arr1) / sizeof(int);
    int m  = sizeof(arr2) / sizeof(int);
    vector<int>  merge =   mergeArray(arr1, arr2, n, m);
    for(int i=0; i<n+m; i++){
        cout << merge[i] << " ";
    }

    return 0;
}
