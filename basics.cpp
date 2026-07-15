#include <iostream>
using namespace std;

// ------------------> NOTE :- <-----------------------
//    Press "ctrl" + "/" to remove comments after selecting the topic you want to understand

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

int n;
cout<<"Enter the value of n: ";
cin>> n;
for(int i=0; i<n; i++){

for(int j=0; j<n-i-1; j++){
    cout<<" ";
}
    for(int j=1; j<=i+1; j++){
        cout<< j;
    }
    for(int j=0; j>0; j--){
    cout<< j;
    }
    cout<< endl;
}
return 0;
}