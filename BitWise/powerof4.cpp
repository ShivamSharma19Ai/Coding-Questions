/*
Check wheter n is power of 4 
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a= n & n-1;
    int b= n%3;
    if( a == 0  && b == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}