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


int n;
cout<<"Enter the value of n: \n";
cin>> n;

bool isPrime = true;
for(int i = 2; i<n; i++){
    if ((n%i)==0){
     isPrime = false;
     break;
    }
}

if(isPrime == true){
    cout<<"Its a Prime Number";
}
else{
    cout<<"Its Not a Prime Number";
}
return 0;
}