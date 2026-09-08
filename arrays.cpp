#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// ------------------> NOTE :- <-----------------------
// This File Consists of the solutions of the Arrays Practice Questions

// Press "ctrl" + "/" to remove comments after selecting the topic you want to understand





//-------------> Pair Sum (Brute Force Method):

// vector<int> pairSum(vector<int>nums, int size, int target){
//  vector<int> ans;
//     for(int i = 0; i<size; i++){
//     for(int j = i+1; j<size; j++){
    
//     if(nums[i] + nums[j] == target){
//     ans.push_back(i);
//     ans.push_back(j);
//     return ans;
//     }
//     }
//  }
//  return ans;   
// }




//--------------> Pair Sum (by Optimized Method): [O(n)]:

// vector<int> pairSum(vector<int>nums, int size, int target){
//     int st = 0;
//     int end = size-1;
//  vector<int> ans;
 
//     while(st < end){
//         int pairSum = nums[st] + nums[end];
//         if(pairSum < target){
//         st++;
//         }
//        else if(pairSum > target){
//         end--;
//     }
//     else{
//      ans.push_back(st);
//      ans.push_back(end);
//      return ans;
//     }
// }
// return ans;
// }

int main () {

// Single Number Problem: (leetcode 136):

// int arr[5] = {4,1,2,1,2};
// int unique = 0;
// for(int i = 0; i<5; i++){
//   unique = (unique ^ i);
// }
// cout<<unique;



//--------------> Two sum Problem: (leetcode 1) :

// vector<int>nums = {2,7,11,15};
// int target = 17;
// int size = nums.size();
//         for(int i = 0; i < size; i++){
//             for(int j = i+1; j < size; j++){
//                 if((nums[i]+nums[j]) == target){
//                    cout<<i<<","<<j;
//                 }
//             }
//         }



// Maximum subarray sum:

// int arr[6] = {1,2,3,4,5,6};
//  int size = sizeof(arr) / sizeof(int);
//  int maxSum = 0;
// for(int st = 0; st<size; st++){
//     int currSum = 0;
// for(int end = st; end<size; end++){
//    currSum = currSum + arr[end];
//    maxSum = max(currSum, maxSum);
// }
// }
// cout<<maxSum;



//----------------> By Kadane's Algorithm: (Leetcode 53):

// int arr[7] = {3,-4,5,5,-1,7,8};
// int size = sizeof(arr) / sizeof(int);
// int currSum = 0;
// int maxSum = INT8_MIN;
// for(int i = 0; i<size; i++){
//     currSum += arr[i];
//     maxSum = max(currSum, maxSum);
//     if(currSum < 0){
//         currSum = 0;
//     }
// }
// cout<<maxSum;




//------------------> Max pair Sum of an Array:

// int arr[6] = {1,4,6,2,3,5};
// int size = sizeof(arr) / sizeof(int);
// int maxSum = INT8_MIN;
// int currSum = 0;
// int p1,p2;
// for(int i = 0; i<size; i++){
// for(int j = i+1; j<size; j++){
//       currSum = arr[i] + arr[j];
//         if(currSum > maxSum){
//             maxSum = currSum;
//             p1 = i;
//             p2 = j;
// }
// }
// }
// cout<<"Max Sum Pair is: "<<maxSum<<" at Index: "<<p1<<" "<<p2<<endl;


//--------------> Another Brute Force Method: (Pair Sum):

// vector<int>nums = {1,4,6,7,8,10};
// int size = nums.size();
// int target = 7;
// pairSum(nums, size, target);
// vector<int> ans = pairSum(nums, size, target);
// cout<<ans[0]<<", "<<ans[1];
    



//---------------> Majority Element: (Leetcode 169)- By Brute force method:

// vector<int>nums = {1,2,1,2,2,2};

// int size = nums.size();
//         int moreThan = floor(size/2);
//         int ans;
//         for(int i = 0; i<size; i++){
//             int count = 0;
//             for(int j = i; j<size; j++){
//                 if (nums[i] == nums[j]){
//                     count++;
//                 }
//             }
//             if(count > moreThan){
//              ans = nums[i];
//             }
//         }
//         cout<<"The Majority Element is: "<<ans; 



//---------------> Majority Element: (Optimized Solution)

// vector<int>nums = {1,2,2,1,2,2};
// int size = nums.size();
// int moreThan = floor(size/2);
// int ans;

// sort(nums.begin(), nums.end());

// int freq = 1;
// for(int i = 0; i<size; i++){
//     if(nums[i] == nums[i-1]){
//         freq++;
//     }
//     else{
//         freq = 1;
//     }
//     if(freq > moreThan){
//         ans = nums[i];
//     }
// }
// cout<<ans;




//---------------> Majority Element: (Moore's Voting Algorithm):

// vector<int>nums = {1,1,1,1,2,2};
// int freq = 0;
// int ans = 0;

// for(int i = 0; i<nums.size(); i++){
//     if(freq == 0){
//         ans = nums[i];
//     }
//     if(ans == nums[i]){
//         freq++;
//     }
//     else{
//         freq--;
//     }
// }

// cout<<ans;



 

//---------------> (Leetcode 1929):

vector<int>nums = {1,2,3,4};
vector<int>ans;
int size = 2 * nums.size();
for(int i = 0; i<size; i++){
ans.push_back(nums[i % (size/2)]);
}
for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}

return 0;
}