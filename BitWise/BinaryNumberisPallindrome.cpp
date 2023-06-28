/*
Check whether binary Number is Pallindrome

int n=9

1  2  4  8
1  0  0  1

1001 which is pallindrome
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int rev=0;
    while(n!=0) // The logic is to create another ariable which will keep the reverse but initially will be empty so as our n vlaue becomes 0 the reverse value should become equal to the start value of n if it is pallindrome 
    {
        rev=rev<<1; // Left shift Operator it changes the value of n to n*2
        if( n & 1 == 1){ // check whether n is odd since if n is odd then we need to add 1
         rev=rev^1; //XOR Operator to add 1
        }
        n=n>>1; // Right Shift Operator to reduce value of n to n/2
    }
    if(temp == rev){
       cout<<"true";
    }
    else{
        cout<<"false";
    }
}