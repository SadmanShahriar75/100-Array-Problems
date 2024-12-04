// 14. Find Common Elements in Two Arrays
// Description: Find the common elements between two arrays.

// Input: arr1 = [1, 2, 3], arr2 = [2, 3, 4]
// Output: [2, 3]



// #include<iostream>
// #include<vector>
// #include<unordered_set> // For checking duplicates
// using namespace std;

// vector<int> commonElement(int arr1[], int arr2[], int n, int m){
//     vector<int> ans;
//     unordered_set<int> seen;  // To store the elements we have already added
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr1[i] == arr2[j]){   // If element matches
//                 // If the element is not already added, add it
//                 if(seen.find(arr1[i]) == seen.end()){
//                     ans.push_back(arr1[i]);
//                     seen.insert(arr1[i]);  // Mark this element as added
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr1[] = {1, 2, 3};
//     int arr2[] = {2, 3, 4};

//     int n  = sizeof(arr1) / sizeof(int);
//     int m = sizeof(arr2) / sizeof(int);
  
//     vector<int> common = commonElement(arr1, arr2, n, m);

//     // Print the common elements
//     for(int i=0; i<common.size(); i++){
//         cout << common[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

