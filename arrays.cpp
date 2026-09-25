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

// vector<int>nums = {1,2,3,4};
// vector<int>ans;
// int size = 2 * nums.size();
// for(int i = 0; i<size; i++){
// ans.push_back(nums[i % (size/2)]);
// }
// for(int i = 0; i<ans.size(); i++){
//     cout<<ans[i]<<" ";
// }




//---------------> Best Time to Buy and Sell Stock: (Leetcode 121):

// vector<int>prices = {7,1,5,3,6,4};
// int size = prices.size();

// int sell;
// int maxProfit = 0;
// int bestBuy = prices[0];

// for(int i = 1; i<size; i++){
//     if(prices[i] > bestBuy){
//      maxProfit = max(maxProfit, (prices[i] - bestBuy));
//     }
// bestBuy = min(bestBuy, prices[i]);
// }
// cout<<maxProfit;




//-----------------> Container with most water: (Leetcode 11):

//----> Brute Force: (Time Complexity = O(n^2))
// vector<int>height = {1,8,6,2,5,4,8,3,7};
// int size = height.size();
// int maxArea = 0;

// for(int i = 0; i<size; i++){

//     for(int j = i+1; j<size; j++){
//     int length = min(height[i], height[j]);
//     int breadth = j - i;
//     int area =  (length * breadth);
//     maxArea = max(maxArea, area);
//     }
// }
// cout<<maxArea;


//------> Optimal Approach: (Time Complexity = O(n))

// vector<int>height = {1,8,6,2,5,4,8,3,7};
// int size = height.size();
// int lp = 0;
// int rp = size-1;
// int maxArea = 0;

// while(lp < rp){
//     int length = min(height[lp], height[rp]);
//     int breadth = rp - lp;
//     int area = (length * breadth);
//     maxArea = max(maxArea, area);

//     height[lp]<height[rp] ? lp++ : rp--;
// }

// cout<< maxArea;





//------------------->  Product of Array Except Self: (Leetcode 238):
//------> Brute Force Approach: (Time Complexity = O(n^2)):
// vector<int>nums = {1,2,3,4};
// int size = nums.size();
// vector<int>ans;

// for(int i = 0; i<size; i++){
//     int prod = 1;
// for(int j = 0; j<size; j++){
//    if(i != j){
//     prod *= nums[j];
//    }
// }
//   ans.push_back(prod);
//   cout<<ans[i]<<" ";
// }




//-------> Optimal Approach: (Time Complexity = O(n)):
// vector<int>nums = {1,2,3,4};
// int size = nums.size();
// vector<int>ans(size,1);
// vector<int>prefix(size,1);
// vector<int>suffix(size,1);

// for(int i = 1; i<size; i++){ // prefix Arr

//   prefix[i] = prefix[i-1] * nums[i-1];
// }

// for(int i = size-2; i>=0; i--){ // suffix Arr
// suffix[i] = suffix[i+1] * nums[i+1];
// }

// for(int i = 0; i<size; i++){ // ans Arr
//   ans[i] =  prefix[i] * suffix[i];
//   cout<<ans[i]<<" ";
// }



//-------> Optimizing the space Complexity: O(1):
// vector<int>nums = {1,2,3,4};
// int size = nums.size();
// vector<int>ans(size,1);

//  for(int i = 1; i<size; i++){ // prefix Arr
//   ans[i] = ans[i-1] * nums[i-1];
// }

// int suffix = 1;

//  for(int i = size-2; i>=0; i--){ // suffix Arr
//      suffix *= nums[i+1];
//   ans[i] *= suffix;
// }

// for(int i = 0; i<size; i++){ // ans Arr
//   cout<<ans[i]<<" ";
// }




//---------------> Binary Search Algorithm:

// vector<int>arr = {2,4,6,8,12,14};
// int size = arr.size();
// int start = 0;
// int end = size-1;
// int target = 12;
// while(start <= end){
//   int mid = start + (end - start) / 2;
//   if(target < arr[mid]){
//     end = mid - 1;
//   }
//   else if(target > arr[mid]){
//     start = mid + 1;
//   }
//   else{
//     cout<<"Target is present at the index: "<< mid;
//     break;
//   }

// }




//--------------> Search In Rotated Sorted Array: (leetcode 33):
// vector<int>A = {4,5,6,7,0,1,2};

// int size = A.size();
// int start = 0, end = size - 1;
// int target = 1;
// bool found = false;
// while(start <= end){
//   int mid = start + (end - start)/2;
//   if(A[mid] == target){
//     cout<< mid;
//     found = true;
//     break;
//   }

//   if(A[start] <= A[mid]) {  //Left Sorted
//   if(A[start] <= target && target <= A[mid]){
//     end = mid - 1;
//   }
//   else{
//     start = mid + 1;
//   } 
//   } else{    //Right Sorted
//     if(A[mid] <= target && target <= A[end]){
//       start = mid + 1;
//     }
//     else {
//       end = mid - 1;
//     }
//   }
// }

// if(found == false){ // If the element is not found in the array
//   cout<<"The Element is not in the Array";
// }




//-----------------> Peak Index in Mountain array: (Leetcode 852):
//----->Brute Force Method: Time Complexity O(n):
// vector<int>nums = {0,3,8,9,5,2};
// int size = nums.size();
// int peak = INT8_MIN;  // INT_MIN
// int index;
// for(int i = 0; i<size; i++){
//     if(nums[i] > peak){
//         peak = nums[i];
//         index = i;
//     }
// }
// cout<<"Peak Element is: "<<peak<<" at Index: " <<index<<endl;



//--------->Optimised Solution: Time Complexity O(log n):

vector<int>arr = {0,3,8,9,5,2};
int size = arr.size();
int start = 1;
int end = size-2;

while(start <= end){
    int mid = start + (end - start)/2;
    
    if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]){
        cout<< arr[mid];
        break;
    }

    else if(arr[mid] > arr[mid - 1]){
        start = mid + 1;
    }
    else{
        end = mid - 1;
        }
}


return 0;
}