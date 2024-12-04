// 12. Remove Duplicates from Array
// Description: Remove duplicate elements from an array.

// Input: [1, 2, 2, 3, 4, 4, 5]
// Output: [1, 2, 3, 4, 5]



#include<iostream>
#include<vector>
using namespace std;

vector<int> removeDuplicates(int nums[], int n) {
    vector<int> newArr; 

    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for(int j=0; j<newArr.size(); j++){
            if(nums[i] == newArr[j]){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            newArr.push_back(nums[i]);
        }
    }

    return newArr;  
}

int main() {
    int nums[] = {1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(nums) / sizeof(int);
    vector<int> result = removeDuplicates(nums, n);
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
