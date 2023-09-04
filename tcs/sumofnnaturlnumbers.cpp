#include<iostream>
using namespace std;

int first(int n){
    if(n%2==0){
        return (n/2)*1LL*(n+1);
    }
    else{
        return ((n+1)/2)*1LL*n;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<first(n);
}