// 7. Find the Second Largest Element
// Description: Find the second largest element in an array.

// Input: [10, 20, 4, 45, 99]
// Output: 45

#include<iostream>
using namespace std;
#include<algorithm>

int secondLargest(int nums[], int n) {
    int large = nums[0], secondlarge = 0;
    for(int i=1; i<n; i++){
        if(nums[i] > large){
            secondlarge = large;
            large = nums[i];
        }
        else if (nums[i] > secondlarge && nums[i] != large) {
            secondlarge = nums[i];    
        }
    
    }
    return secondlarge;
}

int main() {
    int nums[] = {10, 20, 4, 45, 99}; 
    int n = sizeof(nums) / sizeof(int); 
    cout << secondLargest(nums, n);
}