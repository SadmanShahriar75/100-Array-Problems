// 9. Reverse an Array
// Description: Reverse the elements of an array.

// Input: [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]

#include<iostream>
using namespace std;
#include<vector>


vector<int> reverseArray(int nums[], int n) {
    vector<int> newArr(n);
    for(int i=n-1; i>=0; i--){
        newArr[n-1-i] = nums[i];
    }
    return newArr;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(nums) / sizeof(int); 
    vector<int> reversed = reverseArray(nums, n);
     for(int i = 0; i < n; i++) {
        cout << reversed[i] << " "; 
    }
}