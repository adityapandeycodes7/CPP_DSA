#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>  
#include <unordered_set>
#include <algorithm>
#include <cstring>
using namespace std;

// ------------------> NOTE :- <-----------------------
//    Press "ctrl" + "/" to remove comments after selecting the topic you want to understand

// Go to int main() {Line No. 254} to Start from the basics 


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


// ---------------------> WAF to print all the unique values of an array:

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


//----------> Pointers (Pass By Reference):

// void changeA(int* ptr){
//     *ptr = 20;
// }


//----------> Pass by reference (Alias):

// void changeB(int &c){
//   c = 40;
// }


// Sorting Algorithms: Custom Sorting:

// bool comparator(pair<int, int>p1 , pair<int, int>p2) {
//  if(p1.second < p2.second) return true;
//  if(p1.second > p2.second) return false;

//  if(p1.first < p2.first) return true;
//  else return false;
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




//_____C++ STL (Standard Template Liabrary):
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
// // cout<<vect.size()<<endl;
// // cout<<vect.capacity()<<endl;

// vector<int>vect1(vect); // Initalizes the vect1 with the values of vect
// for(int val : vect1){
//     cout<< val<< " ";
// }

//----> Vector costly functions: O(n):

// vec.erase(vec.begin() + 2);
// cout<<vec[2]<<endl;

// vec.insert(vec.begin() + 2, 3);
// cout<<vec[2]<<endl;

// vec.clear();
// for(int val : vec){
//     cout<< val<< " ";
// }

// cout<< vec.empty();



//------>Iterators (in vectors):
// vector<int>vec = {1,2,3,4,5,6};

// //---->begin()
// cout<<*(vec.begin())<<endl; //Pointing the value at the "0th" index

// //---->end()
// cout<<*(vec.end())<<endl; //Pointing the value at the "nth" index


//Iterators:

// vector<int>::iterator it;
// for(it = vec.begin(); it != vec.end(); it++){  //Forward
//     cout<< *(it) <<" ";
// }
// cout<<endl;
// for(auto it = vec.rbegin(); it != vec.rend(); it++){  //Forward
//     cout<< *(it) <<" ";
// }


//------> List:

// list<int> l; //Act as a doubly Linked list

// l.push_back(4);
// l.push_back(6);
// l.push_front(2);
// l.push_front(0);

// for(int val : l){
//     cout<<val<<" ";
// }
// cout<<endl;

// l.pop_back();
// l.pop_front();

// for(int val : l){
//     cout<<val<<" ";
// }
// cout<<endl;


//-----> Deque:
// deque<int> d = {1,2,3,4,5,6}; //Internally deques are implemented as the dynamic arrays: random access is possible:

// for(int val : d){
//     cout<<val<<" ";
// }
// cout<<endl;


//---------> Pairs: (parts of the CPP Utility Liabrary):

// pair<int, int> p = {1,6};
// cout<<p.first<<endl;
// cout<<p.second<<endl;

// pair<string, int> sI = {"DSA", 7};
// cout<<sI.first<<endl;
// cout<<sI.second<<endl;

// pair<int, pair<char, int> > pP = {4, {'A', 6}};
// cout<<pP.first<<endl;
// cout<<pP.second.first<<endl;
// cout<<pP.second.second<<endl;

// vector<pair<int, int>> vecPair = {{1,2}, {3,4}, {5,6}, {7,8}};

// vecPair.push_back({9,10});  //Instert
// vecPair.emplace_back(11,12);  //In Place Objects Create 

// for( pair<int, int> val : vecPair){  // or auto val
//    cout<<val.first<<" "<<val.second<< endl;
// } 




//----------> Stacks:
// stack <int>st;
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(4);

// cout<<"size of the stack st is: "<<st.size()<<endl;

// stack<int> st2;
// st2.swap(st);

// cout<<"After swapping, size of the stack st2 is: "<<st2.size()<<endl;
// cout<<"After Swapping, size of the stack st is: "<<st.size()<<endl;

// while(!st2.empty()){
// cout<<st2.top()<<endl;
// st2.pop();
// }




//----------> Queues: 

// queue<int> q;

// q.push(1);
// q.push(2);
// q.push(3);
// q.push(4);
// q.push(5);
// q.push(6);

// while(!q.empty()){
// cout<<q.front()<<" ";
// q.pop();
// }


//--------> Priority Queue:

// priority_queue<int> pQ; // Arranges the elements according the highest priority, like the greater value will be at the front by default
// pQ.push(2);
// pQ.push(4);
// pQ.push(1);
// pQ.push(5);
// pQ.push(3);
// pQ.push(6);

// while(!pQ.empty()){
//     cout<<pQ.top()<<" ";
//     pQ.pop();
// }
// cout<<endl;


// //-----> Reverse order priority Queue:
// priority_queue<int, vector<int>, greater<int>> rPQ; // Arranges the elements according the highest priority, like the greater value will be at the front by default
// rPQ.push(2);
// rPQ.push(4);
// rPQ.push(1);
// rPQ.push(5);
// rPQ.push(3);
// rPQ.push(6);

// while(!rPQ.empty()){
//     cout<<rPQ.top()<<" ";
//     rPQ.pop();
// }
// cout<<endl;



//-------> Map:

// map<string, int> m;
// m["Laptop"] = 20; 
// m["Tv"] = 50;
// m["Ac"] = 40;
// m["Smart Phones"] = 60;

// m.insert({"Camera", 40});
// m.emplace("Washing Machine", 45);

// m.erase("Tv");
// for(pair<string, int> p : m){  //or auto <string, int>

//     cout<<p.first<< " "<<p.second<< endl;
// }

// cout<<"count is : "<<m.count("Laptop")<<endl;
// cout<<"value of Key laptop is : "<<m["Laptop"]<<endl;

// if(m.find("Camera") != m.end()){
//     cout<<"the Camera key is Found"<<endl;
// }
// else{
//     cout<<"the Camera key is Not Found"<<endl;
// }

// cout<<m.size()<<endl;
// cout<<m.empty()<<endl;



//-------> Multimap: values can be duplicate:
// multimap<string, int> mM;

// mM.emplace("laptop", 40);
// mM.emplace("laptop", 40);
// mM.emplace("laptop", 40);
// mM.emplace("laptop", 40);
// mM.emplace("laptop", 40);

// mM.erase(mM.find("laptop"));
// for(auto p:mM){
//     cout<<p.first<<" "<<p.second<<endl;
// }


//-------> UnOrdered Map: Keys are arranged randomly without getting sorted:

// unordered_map<string, int> uOM;  // Time Complexity is usually O(1)

// uOM.emplace("laptop", 70);
// uOM.emplace("Tv", 60);
// uOM.emplace("Watches", 45);
// uOM.emplace("Camera", 40);
// uOM.emplace("Washing Machine", 20);
//  for(auto p: uOM){
//     cout<<p.first<<" "<<p.second<<endl;
// }

//-------> sets:

// set<int> s;

// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// s.insert(6);

// s.insert(2);
// s.insert(7);
// s.insert(4);
// s.insert(8);

// for(auto val: s){
//     cout<<val<<" ";
// }
// cout<<endl;
// cout<<"size of the set is: "<<s.size()<<endl;
// cout<<"Lower bound: "<<*(s.lower_bound(4))<<endl;
// cout<<"Lower bound: "<<*(s.upper_bound(4))<<endl;


//-----> Multiset: Duplicate Values are allowed in the set

// multiset<int> mS;

// mS.insert(1);
// mS.insert(2);
// mS.insert(3);
// mS.insert(4);
// mS.insert(5);
// mS.insert(6);

// mS.insert(2);
// mS.insert(7);
// mS.insert(4);
// mS.insert(8);

// for(auto val: mS){
//     cout<<val<<" ";
// }


//-------> UnOrdered Sets: All Elements are arranged randomly:

// unordered_set<int> uOS;

// uOS.insert(1);
// uOS.insert(2);
// uOS.insert(3);
// uOS.insert(4);
// uOS.insert(5);
// uOS.insert(6);

// uOS.insert(2);
// uOS.insert(7);
// uOS.insert(4);
// uOS.insert(8);

// for(auto val: uOS){
//     cout<<val<<" ";
// }



//-------> Algorithms:

//-----> Sorting:

// int arr[] = {4,6,2,3,1,5};
// int size = sizeof(arr)/sizeof(int);
// sort(arr, arr + size);

// for(int i = 0; i<size; i++){
//     cout<< arr[i]<<" ";
// }
// cout<< endl;

//----> For Vector:

// vector<int> vec = {4,6,2,3,1,5};
// int size = vec.size();

// sort(vec.begin(), vec.end());

//descending Order:
// sort(vec.begin(), vec.end(), greater<int>());

// for(int val : vec){
//     cout<< val <<" ";
// }
// cout<< endl;


//---------> Sorting Pairs: Default sorting:
// vector<pair<int, int>> vP = {{1,2},{3,4},{2,4},{5,6}};
// sort(vP.begin(), vP.end());

// for(auto val : vP){ // By default, the first value of the pair is compared
//     cout<<val.first<<" "<<val.second<<endl;
// }

// cout<<endl;

//--------> Sorting Pairs: Custom sorting:
// vector<pair<int, int>> vec = {{1,2},{3,4},{2,4},{5,6}};
// sort(vec.begin(), vec.end(), comparator);

// for(auto val : vec){ // By default, the first value of the pair is compared
//     cout<<val.first<<" "<<val.second<<endl;
// }
// cout<<endl;




//----------> Reverse Algorithm:

// vector<int> rV = {1,2,3,4,5,6};
// reverse(rV.begin(), rV.end());

// for(auto val : rV){ // By default, the first value of the pair is compared
//     cout<<val<<" ";
// }
// cout<<endl;


// //----> Reverse in a Range:

// vector<int> rRV = {1,2,3,4,5,6};

// reverse(rRV.begin()+1, rRV.begin()+5);

// for(auto val : rRV){ // By default, the first value of the pair is compared
//     cout<<val<<" ";
// }
// cout<<endl;



// //--------> Next and Previous Permutation Algorithm:

// string s = "abc";
// next_permutation(s.begin(), s.end());
// cout<<s<<endl;

// prev_permutation(s.begin(), s.end());
// cout<<s<<endl;



// //------> Min, Max Algorithm:
// cout<<max(2,6)<<endl; 
// cout<<min(2,6)<<endl; 


// //------> Swap Algorithm:
// int a = 2;
// int b = 4;
// cout<<"a is: "<<a<<" and b is: "<<b<<endl;
// swap(a,b);
// cout<<"After Swapping, a is: "<<a<<" and b is: "<<b<<endl;



//-------> Min, Max Element Algorithm:
// vector<int> vec = {4,2,5,6,8,7};
// cout<< *(min_element(vec.begin(), vec.end()))<<endl;
// cout<< *(max_element(vec.begin(), vec.end()))<<endl;




//-------> Binary Search Algorithm: 
// vector<int> bSA = {2,4,5,6,7,8};
// cout<< binary_search(bSA.begin(), bSA.end(), 8)<<endl;




//-------> Builtin pop count: It is used to count the number of 1s in the Number:
// int n = 15;
// long int n1= 15;
// long long int n2= 15;

// cout<< __builtin_popcount(n)<<endl; 
// cout<< __builtin_popcountl(n1)<<endl; 
// cout<< __builtin_popcountll(n2)<<endl; 




//_________Strings:
// //--------> Character Array:

// char str[] = {'a','b','c','d','\0'};
// cout<<str<<endl;
// cout<<"The length of the String is: "<<strlen(str)<<endl;

// char str1[] = "efgh";  //String Literals
// cout<<str1<<endl;
// cout<<str1[1]<<endl;  //Constant Pointers

//----> String Inputs;

char str2[20];
cout<<"Enter a string value: ";
cin.getline(str2,20, '$');  // cin.getline(str. len, delime?)
// cout<<"The String is: "<<str2<<endl;

for(char ch : str2){
    cout<<ch<< "";
}



// Time Complexity And Space Complexity:

//-----------> Time Complexity:

// int arr[] = {1,2,4,5,6,7,10};
// int size = sizeof(arr) / sizeof(int); 
// int target = 7;
// for(int i = 0; i<size; i++){
//     if(arr[i] == target){
//         cout<<"Target is at the "<<i<<"th index";  // Here the time Complexity is O(n) because n times operation is getting performed
//     }
// }


//-------------> Sum of Numbers from 1 to n

// int n;
// cin>>n;
// int sum = n * (n+1)/2;
// cout<<sum;        // Here the Time complexity is Constant O(k) or O(1)


//-------------> Ignore Constants:

// int arr[4] = {1,2,3,4};
// int n = sizeof(arr) / sizeof(int);
// for(int i = 0; i<n; i++){
//     arr[i] *= 2;
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// for(int i = 0; i<n; i++){  // Here Time Complexity = O(n+n) = O(2n) = O(n)
//     arr[i] += 2;
//     cout<<arr[i]<<" ";
// }




//-----------------> Calculate Pow(x,n): (Leetcode 50):

// double x = 4; 
// int n = 2;

// double ans = 1;
// long binForm = n;

//        if(binForm < 0){
//             x = 1/x;
//             binForm = -binForm;
//        }

// while(binForm > 0){
// if(binForm % 2 == 1){
//     ans *= x;
// }
//  x *= x;
//  binForm /= 2;
// }
// cout<<ans;

//------------> Space Complexity:

// int arr[] = {1,2,4,5,6,7,10};
// int size = sizeof(arr) / sizeof(int); 
// int sum = 0;
// for(int i = 0; i<size; i++){
//     sum += arr[i];
// }
// cout<< sum; // Here the Space complexity is O(k) or O(1)


// int arr[] = {1,2,4,5,6,7,10};
// int size = sizeof(arr) / sizeof(int); 

// int sqrArr[size];

// for(int i = 0; i<size; i++){
//     sqrArr[i] = arr[i] * arr[i];
// }
// for(int i = 0; i<size; i++){
//     cout<< sqrArr[i]; // Here the Space Complexity is O(n);
// }




//________________Pointers :
// int a = 10;
// int* ptr = &a;  // Here * refers that we are storing the address of some int variable

// cout<< &a<<endl;
// cout<< ptr<<endl;

// //----------> Pointer to Pointer:
// int** parPtr = &ptr;  // Here ** refers that we are storing the address of a pointer which already holds the address of some int variable

// cout<< &ptr<<endl;
// cout<< parPtr<<endl;

// cout<< *(&a)<<endl;  // Here * acts as a dereferencing variable which extracts the value at the address of variable a
// cout<< *(ptr)<<endl;
// cout<< **(parPtr)<<endl;


//------------> Null Pointer:
// int* p = NULL;
// cout<< *p;




//------------> Pass By reference: (pointer)

// int a = 10;
// cout<<"Initial value of a is: "<<a<<endl;
// changeA(&a);
// cout<<"Changed value of a is: "<< a<<endl;


// int b = 20; 
// cout<<"Initial value of b is: "<<b<<endl;
// changeB(b);
// cout<<"Changed value of b is: "<<b<<endl;




//------------> Array Pointers:

// int arr[] = {1,2,3,4,5,6};

// cout<< &arr<<endl;
// cout<< &arr[0]<<endl;
// cout<< *arr<<endl;
// cout<< arr[0]<<endl;
// cout<< &arr[1]<<endl;


//----------> Pointer Arithematic:
// int a = 20;
// int* ptr = &a;
// cout<< ptr<<endl; //0x61ff08

// ptr++; //increment
// cout<< ptr<<endl; //0x61ff0c

// ptr--; //decrement
// cout<< ptr<<endl; //0x61ff08

// ptr = ptr + 1; //Addition
// cout<< ptr<<endl; //0x61ff0c

// ptr = ptr - 1; //Subtraction
// cout<< ptr<<endl; //0x61ff08

// int* ptr1 = ptr + 2; 
// cout<< ptr1 - ptr<<endl; //Subtract ptr

// cout<< (ptr1 > ptr) <<endl; //Pointer Comparistion




//-------------------> Predict the Output:

// int arr[] = {10,20,30,40};
// int *ptr = arr;

// cout<< *(ptr + 1)<<endl;  //20
// cout<< *(ptr + 3)<<endl;  //40
// ptr++;
// cout<< *ptr<<endl;  //20


return 0;
}