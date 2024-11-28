// 10. Check if Array is Sorted (Ascending)
// Description: Determine if the array is sorted in ascending order.

// Input: [1, 2, 3, 4, 5]
// Output: True



#include<iostream>
using namespace std;

bool ascendingArray(int nums[], int n) {
    for(int i=0; i<n-1; i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
    
}

int main() {
    int nums[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(nums) / sizeof(int); 
    if( ascendingArray(nums, n)){
        cout << "True";
    }else{
        cout << "False";
    }
    
}