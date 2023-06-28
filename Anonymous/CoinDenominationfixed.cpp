/*
Given an integer value find the number of 5 2 1 coins such that you can make all denominations till N
example for N=13  5-1 2-3 1-2
*/



#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int five;
    int one;
    int two;
    five=(n-4)/5;
    n=n-(five*5);
    if(n%2==0){
       one=2;
    }
    else{
        one=1;
    }
    n=n-(one*1);
    two=n/2;
    cout<< five <<" "<< two<< " "<< one;
}