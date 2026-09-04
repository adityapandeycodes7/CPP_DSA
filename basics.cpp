#include <iostream>
#include <vector>
using namespace std;

// ------------------> NOTE :- <-----------------------
//    Press "ctrl" + "/" to remove comments after selecting the topic you want to understand




//___________________Functions definition

//---------------> Calculate the are of the Rectangle: 

// int calArea(int a, int b){// Parameters
//     cout<<"Area of Rectangle with length "<<a<<" and breadth "<<b<<" is : "<<a*b<<endl; 
// }

//---------------> Print Name:

// int printName(){
//     cout<<"Aditya Pandey";
// }

//----------------> Calculate the Sum of Two Numbers:

// int sumOfTwo( double a, double b){
//      cout<<"Sum is : "<< a+b; 
// }

//-----------------> Minimum of Two Numbers:

//   int minOfTwo( int a, int b){
//     if(a<b){
//         cout<<a<<" is the Minimum number";
//     }
//     else{
//         cout<<b<<" is the Minimum number";
//     }
//   }


//------------------> Sum of 1 to N numbers;

// void sumOfN(int n){
//     int sum = 0;
//  for(int i=1; i<=n; i++){
//     sum = sum + i;
//  }
//  cout<<"Sum of Number from 1 to "<<n<<" is: "<<sum;
// }

//-------------------> Factorial of N:

// void factN(int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//       fact = fact * i; 
//     } 
//     cout<<"The Factorial of the Number "<<n<<" is: "<<fact;
// }

//---------------> Pass by Value Example:

// int change(int x){
//     x = x*2;
//     return x;
// }

//----------------> Calulate the sum of the digits of

// int sumOfDigits(int n){
//     int digit;
//     int sum = 0;
    
    
//     for(int i = 1; i = n>0; i++){
//             digit = n%10;
//             n = n/10;
//             sum = sum + digit;
//     }
//     return(sum);
// }

//----------------> Calculate the nCr binomial binomial coefficient for n and r:
// formula  = n!/[r!*(n-r)!]

// int binCoeff(int n, int r){
// int factN = 1;
// int factR = 1;
// int factNMR = 1;
//     for(int i = 1; i<=n; i++){
//     factN = factN*i;  //n!
// }
//    for(int i = 1; i<=r; i++){
//     factR = factR*i;  //r!
// }
//    for(int i = 1; i<=n-r; i++){
//     factNMR = factNMR*i;  //n-r!
// }

// int binCoef = (factN)/(factR * factNMR);
// return binCoef;
// }


//--------------> Convert the Decimal Number to the Binary:

// int decToBin(int n){
//  int bits;
//  int sum = 0;
//  int pow = 1;
//     while(n>0){
//         bits = n%2;
//         n = n/2;
//         sum = sum + (bits*pow);
//         pow = pow * 10;
//     }
//     return sum;
// }


//----------------> Binary to decimal Conversion:

// int binToDec(int n){
//     int sum = 0;
//     int pow = 1;
//     int lBit;
//     while(n>0){
//         lBit = n%10;
//         n = n/10;
//         sum = sum + (lBit * pow);
//         pow = pow*2;
//     }
//     return sum;
// }


//----------------> Pass by reference:

// void changeArray(int arr[], int size){
//   cout<<"in the changeArray function: ";
// for(int i = 0; i<size; i++){
//   arr[i] = arr[i]*2;
//   cout<<arr[i]<<" ";
// }
// cout<<endl;
// }

//-----------------> Linear Search Algorithm:
// int linearSearch(int arr[], int size, int target){
//   for(int i = 0; i<size; i++){
//   if(arr[i] == target){
//   return i;
//   }
// }
// return -1;
// }

//-----------------> Reverse the Array:

// void revArray(int arr[], int size){
//   int start = 0;
//   int end = size-1;
//   while(start<end){
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
 
// }

//------------------> WAF to calculate the sum and product of all numbers in an array:

// void sumProductOfArray(int arr[], int size){
// int sum = 0;
// int product = 1;
// for(int i = 0; i<size; i++){
//   sum = sum + arr[i];
//   product = product * arr[i];
// }
// cout<<"The Sum of all values in the Array is: "<<sum<<endl;
// cout<<"The prroduct of all values in the Array is: "<<product<<endl;
// }

//-------------------> WAF to swap the maximum and minimum number of an array:

// void maxMinSwap(int arr[], int size){
// int smallest = INT8_MAX;
// int indexS;
// for(int i = 0; i<size; i++){
//   if(arr[i]<smallest){
//     smallest = arr[i];
//     indexS = i;
//   }
// }
// int greatest = INT8_MIN;
// int indexG;
// for(int i = 0; i<size; i++){
//   if(arr[i]>greatest){
//     greatest = arr[i];
//     indexG = i;
//   }
// }

// swap(arr[indexG], arr[indexS]);

// }


//---------------------> WAF to print all the unique values of an array:

// void uniqueValues(int arr[], int size){
//   bool checkUnique = false;
// for(int i = 0; i<size; i++){
//   bool isUnique = true;
//   for(int j = 0; j<size; j++){
//     if(arr[i] == arr[j] && (i != j)){
//      isUnique = false;
//      break;
//     }
//   }
//   if(isUnique){
//     cout<<arr[i]<<" is the Unique Number"<<endl;
//     checkUnique = true;
//   }
// }

// if(checkUnique == false){
//   cout<<"There is not any Unique Numbers present in the array";
// }
// }



//---------------> Write a function to print the intersection of two arrays:

// int interTwoArr(int arr1[], int arr2[], int size1, int size2){
//   bool null = true;
//   for(int i = 0; i<size1; i++){
//     for(int j = 0; j<size2; j++){
//       if(arr1[i] == arr2[j]){
//         cout<<arr1[i]<<" ";
//         null = false;
//       }
//     }
//   }
//   if(null){
//     cout<<"Interesection is Null";
//   }
// }

int main () {


    //_______________Arithematic operations on a and b___________________

    // int a,b;
    // cout<< "enter the value of a: ";
    // cin>> a;
    // cout<< "enter the value of b: ";
    // cin>> b;
    // int sum = a+b;
    // int difference = a-b;
    // int mult = a*b;
    // float divide = (float)a/b;
    // int modulo = a%b;
    // cout<<"The sum of the values a and b is: " << sum <<endl;
    // cout<<"The difference of the values a and b is: " << difference <<endl;
    // cout<<"The mult of the values a and b is: " << mult <<endl;
    // cout<<"The divide of the values a and b is: " << divide <<endl;
    // cout<<"The modulo (remainder) of the values a and b is: " << modulo <<endl;
 
 


    //___________Conditional statements______________

    //-------------> Find whether the number is positive or negative

    // int n;
    // cout << "Enter the Number: ";
    // cin >> n;

    // if(n>0){
    //     cout<< n <<" is a postive value" <<endl;
    // }
    // else{
    //     cout<< n <<" is a negative value" <<endl;
    // }
    

    //--------------> Find whether the number is Odd or Even
  
    // int n;
    // cout << "Enter the Number: ";
    // cin >> n;

    // if((n%2)==0){
    //     cout<< n << " is a Even number" <<endl;
    // }
    // else{
    //     cout<< n << " is a Odd number" <<endl;
    // }


    //---------------> else if

//     int age;
//    cout << "Enter the age: ";
//     cin >> age;
 
//     if(age < 10){
//         cout<<"Its a child";
//     }
//     else if(age>10 && age<18){
//         cout<<"Its a young boy";
//     }
//     else{
//         cout<<"Its a adult";
//     }

//---------------------> Practice question
   
// char ch;
// cout<<"enter the character \n";
// cin >> ch;

// if(ch>='a' && ch<='z'){
//     cout<< "Its a lowercase character";
// }
// else{
//     cout<<"its a uppercase value";
// }




//_______ loops

//--------------> while loop

// int n;
// cout<< "enter the value of n: ";
// cin>> n;
// int i=1;
// while( i<=n){
// cout<<i<<" hello world!\n";
// i++;
// }


//----------------> for loop
// sum of numbers from 1 to n;

//  int n;
// cout<< "enter the value of n: ";
// cin>> n;

// int sum = 0;
// for(int i = 1; i<=n; i++){
//     if((i%2)!=0){
//         sum = sum + i;
//     }
// }

// cout<<"The sum of numbers from 1 to "<<n<<" is "<<sum;
    


//-------------------> do while loop

//   int n = 10, i = 1;
//   do{
//     cout<<"hello world!\n";
//     i++;
//   } while(n>=i);




//-----------------------> Check whether a number is Prime or not


// int n;
// cout<<"Enter the value of n: \n";
// cin>> n;

//     if (n <= 1) {
//         cout << n << " is not a Prime number.";
//         return 0;
//     }

// bool isPrime = true;
// for(int i = 2; i*i<=n; i++){
//     if ((n%i)==0){
//      isPrime = false;
//      break;
//     }
// }

// if(isPrime == true){
//     cout<<"Its a Prime Number";
// }
// else{
//     cout<<"Its Not a Prime Number";
// }




//-----------------> Sum of all numbers from 1 to n which are divisible by 3

// int n;
// cout<<"Enter the value of n: \n";
// cin>> n;
// int sum = 0;
// for(int i=1; i<=n; i++){
//     if(i%3==0){
//         sum = sum + i;
//         cout<<i<<endl;
//     }
// }

// cout<<"The sum of the numbers from 1 to "<<n <<" which are divisible by 3 is: "<<sum;




//-----------------------> Print Factorial of a number n

//  int n;
// cout<<"Enter the value of n: \n";
// cin>> n;
// int mult = 1;
// for(int i=1; i<=n; i++){
//     mult = mult * i;
// }

// cout<<"Factorial of a number n is: " << mult;




//-----------> nested Loops

//----------> example 1
//    int n;
// cout<<"Enter the value of n: \n";
// cin>> n;
// for(int i=1; i<=n; i++){
//     for(int m=1; m<=10; m++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//----------> example 2 (Traingle Pattern)

// int n;
// cout<<"Enter the value of n: \n";
// cin>> n;

// for(int i=0; i<n; i++){
//     for(int m=1; m<=i+1; m++){
//         cout<<"*";
//     }
//     cout<<endl;
// }




//----------------> Print the Square Patterns

//------> Pattern 1:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// int square = 1;
// for(int i=1; i<=n; i++){
//  for(int m=1; m<=n; m++){
//      cout<<"* ";
//  }

//  cout<<endl;
// }




//--------> Pattern 2:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// int square = 1;
// for(int i=1; i<=n; i++){
//  for(int m=1; m<=n; m++){
//      cout<<m<<" ";
//  }

//  cout<<endl;
// }




//---------> Pattern 3:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// int square = 1;
// for(int i=1; i<=n; i++){
//     char ch = 'A';
//  for(int m=1; m<=n; m++){
//      cout<< ch <<" ";
//      ch++;
//  }

//  cout<<endl;
// }




//---------> Pattern 4:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// int count = 1;
// for(int i=1; i<=n; i++){
//  for(int m=1; m<=n; m++){
//      cout<<count<<" ";
//      count++;
//  }

//  cout<<endl;
// }





//----------------> Triange Pattern

//---------> Pattern 1:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// for(int i=0; i<n; i++){
//     for(int m=1; m<=i+1; m++){
//         cout<<(i+1)<<" ";
//     }
//     cout<<endl;
// }





//----------> Pattern 2:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// char ch = 'A';
// for(int i=0; i<n; i++){
//     for(int m=1; m<=i+1; m++){
//         cout<<ch<<" ";
//     }
//     ch++;
//     cout<<endl;
// }




//---------> Pattern 3:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// for(int i=0; i<n; i++){
//     for(int m=1; m<=i+1; m++){
//         cout<<m<< " ";
//     }
//     cout<<endl;
// }




// Reverse Triangle Patter

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// for(int i=0; i<n; i++){
//     for(int m=i+1; m>=1; m--){
//         cout<<(m) <<" ";
//     }
//     cout<<endl;
// }




//-----------------> Floyd,s Triangle Pattern:

// int n;
// cout<<"Enter the value of n: ";
// cin>> n;
// int count = 1;
// for(int i=0; i<n; i++){
//     for(int m=1; m<=i+1; m++){
//         cout<<(count)<<" ";
//         count++;
//     }
//     cout<<endl;
// }




//----------> Inverted Triangle Pattern:
// int n;
// cout<<"Enter the value of n: ";
// cin>> n;

// for(int i=0; i<n; i++){
//     int count = 1;
//     for(int m=0; m<i; m++){
//         cout<<" ";
//     }
//     for(int j=0; j<n-i; j++){
//         cout<< i+1;
//     }
//     cout<<endl;
// }





//------------> Pyramid Pattern:




// int n;
// cout<<"enter the value of n";
// cin>>n;
// for(int i = 1; i<=n; i++){
//     for(int j = n-i; j>=1; j--){
//         cout<<" ";
//     }
//     for(int k = 1; k<=i; k++){
//         cout<<k;
//     }
//     for(int l = i-1; l>=1; l--){
//         cout<<l;
//     }
//     cout<<endl;
// }




//---------------> Hollow Diamond Pattern:



// int n = 4;
//  for(int i = 0; i<n; i++){
//     for(int j = 0; j < n-i-1; j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     if(i!=0){
//         for(int k = 0; k<= 2*i-1-1; k++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
//  }

//  for(int i = 0; i< n-1; i++){
//     for(int j = 0; j < i+1; j++){
//         cout<<" ";
//     }
//     cout<<"*";
//     if(i!=n-2){
//         for(int k=0; k < 2*(n-2-i)-1; k++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
//  }




//------------------> Butterfly Pattern:

// int n = 4;

// for(int i = 0; i<n; i++){
//     for(int j=0; j<=i; j++){
//         cout<<"*";
//     }
//     for(int j = 0; j < (2*n)-2-(2*i); j++){
//         cout<<" ";
//     }
//     for(int j=0; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i = 0; i<n; i++){
//     for(int j = 0; j<n-i; j++){
//         cout<<"*";
//     }

//     for(int j = 0; j<2*i; j++){
//         cout<<" ";
//     }
//     for(int j = 0; j<n-i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// calArea(4,6);                //Function calling / invoking

// printName();

// sumOfTwo(4,6);

// minOfTwo(2,4);

// sumOfN(4);

// factN(4);

//----------> Pass by Value:
// int x = 5;
// cout<<change(x)<<endl;
// cout<<x;

// cout<< sumOfDigits(44444)<<endl;

// cout<<binCoeff(6,4);

// for(int i = 0 ; i<100; i++){
//     cout<<decToBin(i)<<endl;
// }

// cout<<binToDec(1000);





// //_________Bitwise Operators:

// //---------> Bitwise AND (&):

// int a = 4;
// int b = 6;

// cout<<(a & b)<<endl;

// //----------> Bitwise OR (|):
// cout<<(a | b)<<endl;

// //----------> Bitwise XOR (^):
// cout<<(a ^ b)<<endl;

// //----------> Bitwise Leftshift (<<):
// cout<<(a << 1)<<endl;

// //----------> Bitwise Rightshift (>>):
// cout<<(a >> 1)<<endl;



//-------------> Figure out how to find if a number is the power if 2 without using any loop:
// int n;
// cout<<"Enter the Number to Check if it is power of two or Not : ";
// cin>>n;

// if(n>0 && (n & (n-1)) == 0){
//     cout<<n<<" is the Power of two";
// }
// else{
//     cout<<n<<" is not the power of 2";
// }



//--------------> Write a Function to reverse the Number:

// int n;
// cout<<"Enter the Number: ";
// cin>>n;
// int sum = 0;
// int bit;
// int pow = 1;
// while(n>0){
//   bit = n % 10;
//   sum = (sum*10) + bit;
//   n = n/10;
// }
// cout<<sum;




//__________Array:

// int marks[5];
// int size = sizeof(marks) / sizeof(int);

// for(int i = 0; i<size; i++){
//   cout<<"Enter the value of "<<i<<"th Index: ";
//   cin>>marks[i];
// }
// for(int i = 0; i<size; i++){
// cout<<marks[i]<<endl;
// }

//------------->Find the Smallest element of the array:
// int marks[5];
// int size = sizeof(marks) / sizeof(int);
// int smallest;
// for(int i = 0; i<size; i++){
//   cout<<"Enter the value of "<<i<<"th Index: ";
//   cin>>marks[i];
// }

// for(int i = 0; i<size; i++){
//   for(int j = 0; j<size; j++){
//     if(marks[j] < marks[i]){
//       smallest =  marks[j];
//     }
//   }

// }
// cout<<smallest<<endl;

// Another better way:

// int marks[5] = {100, 87, 97, 98, 95};
// int size = sizeof(marks) / sizeof(int);
// int smallest = INT8_MAX;
// for(int i = 0; i<size; i++){
//   if(marks[i]<smallest){
//     smallest = marks[i];
//   }
// }
// cout<<smallest;


//----------->TO find the maximum of Array:

// int marks[5] = {100, 87, 97, 98, 95};
// int size = sizeof(marks) / sizeof(int);
// int greatest = INT8_MIN;
// int index;
// for(int i = 0; i<size; i++){
//   if(marks[i]>greatest){
//     greatest = marks[i];
//     index = i;
//   }
// }
// cout<<"At the "<<index<<"th index: ";
// cout<<greatest;


//---------------->Pass by referance: Changes occurs at the original address(main):

// int arr[] = {4,6,7,8};
// int size = 4;
// changeArray(arr, 4);
// cout<<"in the main function: ";
// for(int i = 0; i<size; i++){
//   cout<<arr[i]<<" ";
// }

//-----------------> Linear Search Algorithm:

// int arr[] = {4,6,7,8,10,45,22,66};
// int size = sizeof(arr) / sizeof(int);
// int target = 66;
// cout<< linearSearch(arr, size, target);


//------------------> Reverse the Array:
// int arr[] = {4,6,7,8,10,45,22,66};
// int size = sizeof(arr) / sizeof(int);

// cout<<"Original Array: ";
// for(int i = 0; i<size; i++){
//   cout<<arr[i]<<" ";
// }
// cout<<endl;
// revArray(arr, size);
 
//   cout<<"Reversed Array: ";
//   for(int i = 0; i<size; i++){
//   cout<<arr[i]<<" ";
// }



//------------------> WAF to calculate the sum and product of all numbers in an array:
 
// int arr[] = {4,6};
// int size = sizeof(arr) / sizeof(int);
// sumProductOfArray(arr, size);



//----------------------> WAF to swap the maximum and minimum number of an array:

// int arr[] = {4,6,7,8,10,45,22,66};
// int size = sizeof(arr) / sizeof(int);

// cout<<"Original Array: ";
// for(int i = 0; i<size; i++){
//   cout<<arr[i]<<" ";
// }
// cout<<endl;
// maxMinSwap(arr, size);

// cout<<"Swapped Array: ";
// for(int i = 0; i<size; i++){
//   cout<<arr[i]<<" ";
// }




//---------------------> WAF to print all the unique values of an array:

// int arr[] = {4,7,10,10};
// int size = sizeof(arr) / sizeof(int);

// uniqueValues(arr, size);




//---------------> Write a function to print the intersection of two arrays:
// int arr1[] = {4,7,10,16};
// int arr2[] = {2,7,8,16};
// int size1 = sizeof(arr1) / sizeof(int);
// int size2 = sizeof(arr2) / sizeof(int);

// interTwoArr(arr1, arr2, size1, size2);





//________________Vectors:

//---------->Syntax:
//vector<int>vec;
//vector<int>vec(5,0);
// vector<int>vec = {1,2,3,4,5,6};

//--------->For each loop:

// for(int val : vec){
//   cout<<val<<" ";     // Here i stores the value at that index not the index number
// }


//---------> vector functions:
// cout<<vec.size()<<endl;
// vec.push_back(7);
// cout<<vec.at(6)<<endl;
// vec.pop_back();
// cout<<vec.size()<<endl;
// cout<<vec.front()<<endl;
// cout<<vec.back()<<endl;
// cout<<vec.at(6)<<endl;

//----------> Vector dynamic allocation:

// vector<int>vect;

// vect.push_back(0);
// vect.push_back(1);
// vect.push_back(2);
// vect.push_back(3);
// vect.push_back(4);

// cout<<vect.size()<<endl;
// cout<<vect.capacity()<<endl;

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

int arr[6] = {1,2,3,4,5,6};
 int size = sizeof(arr) / sizeof(int);
 int maxSum = 0;
for(int st = 0; st<size; st++){
    int currSum = 0;
for(int end = st; end<size; end++){
   currSum = currSum + arr[end];
   maxSum = max(currSum, maxSum);
}
}
cout<<maxSum;

return 0;
}
