// 4. Calculate the Average of Elements

#include<iostream>
using namespace std;

int countAverage(int nums[], int n) {
    int count = 0;
    int avg;
    for(int i=0; i<n; i++){
        count+=nums[i];
       avg = count / n;
    }
    return avg;
}

int main() {
    int nums[] = {2, 4, 6, 8, 10};
    int n = sizeof(nums) / sizeof(int); 
    cout << countAverage(nums, n);
}