
// 11. Check if Array is Sorted (Descending)
// Description: Determine if the array is sorted in descending order.

// Input: [5, 4, 3, 2, 1]
// Output: True




#include<iostream>
using namespace std;

bool discendingArray(int nums[], int n) {
    for(int i=0; i<n-1; i++){
        if(nums[i+1]>nums[i]){
            return false;
        }
    }
    return true;
    
}

int main() {
    int nums[] = {5, 4, 3, 2, 1}; 
    int n = sizeof(nums) / sizeof(int); 
    if( discendingArray(nums, n)){
        cout << "True";
    }else{
        cout << "False";
    }
    
}