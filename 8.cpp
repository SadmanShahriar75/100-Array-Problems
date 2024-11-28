// 8. Find the Second Smallest Element
// Description: Find the second smallest element in an array.

// Input: [12, 3, 5, 7, 19]
// Output: 5


#include<iostream>
using namespace std;
#include<algorithm>
#include <climits>

int secondSmallest(int nums[], int n) {
 
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (nums[i] < smallest) {
            secondSmallest = smallest;  // Update second smallest
            smallest = nums[i];          // Update smallest
        } else if (nums[i] < secondSmallest && nums[i] != smallest) {
            secondSmallest = nums[i];    // Update second smallest
        }
    }
    return secondSmallest;
}

int main() {
    int nums[] = {12, 3, 5, 7, 19}; 
    int n = sizeof(nums) / sizeof(int); 
    cout << secondSmallest(nums, n);
}