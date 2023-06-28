/*
Find whether n is power of 2 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b= n & n-1;
    if(b == 0 ){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}