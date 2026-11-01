#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

//---------> Reverse a String:

string strRev = "Hello";
int strRevLen = strRev.length();
int st = 0;
int end = strRevLen - 1; 

while(st < end){
    swap(strRev[st], strRev[end]);
    st++;
    end--;
}
cout<<strRev<<endl;

//or
reverse(strRev.begin(), strRev.end());
cout<<strRev<<endl;

    return 0;
}