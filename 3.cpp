// 3. Calculate the Sum of Elements
// Description: Calculate the sum of all elements in an array.

// Input: [1, 2, 3, 4, 5]
// Output: 15

#include<iostream>
using namespace std;

int sumElement(int nums[], int n) {
    int count = 0;
    for(int i=0; i<n; i++){
        count+=nums[i];
    }
    return count;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(int); 
    cout << sumElement(nums, n);
}