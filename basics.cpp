#include <iostream>
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





//_________Bitwise Operators:

//---------> Bitwise AND (&):

int a = 4;
int b = 6;

cout<<(a & b)<<endl;

//----------> Bitwise OR (|):
cout<<(a | b)<<endl;

//----------> Bitwise XOR (^):
cout<<(a ^ b)<<endl;

//----------> Bitwise Leftshift (<<):
cout<<(a << 1)<<endl;

//----------> Bitwise Rightshift (>>):
cout<<(a >> 1)<<endl;


return 0;
}
