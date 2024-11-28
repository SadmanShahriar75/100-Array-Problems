// 6. Count Odd Numbers

#include<iostream>
using namespace std;

int oddNum (int nums[], int n) {
    int count = 0;
    for(int i=0; i<n; i++){
        if(nums[i] % 2 != 0){
            count+=1;
        }
    }
    return count;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(nums) / sizeof(int); 
    cout << oddNum(nums, n);
}