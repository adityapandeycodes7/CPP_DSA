#include <iostream>
#include <vector>
using namespace std;

// ------------------> NOTE :- <-----------------------
// This File Consists of the solutions of the Arrays Practice Questions

// Press "ctrl" + "/" to remove comments after selecting the topic you want to understand





//-------------> Pair Sum (Brute Force Method):


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

vector<int>nums = {1,4,6,2,3,5};
int size = nums.size();
    return 0;
}