#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int replace(int n){
    int temp=n;
    int count=-1;
    while(temp>0){
        count++;
        if(temp%10==0){
           n=n+pow(10,count)*5;            
        }
        temp=temp/10;
    }
    return n;
}

int main(){
    int n;
    cin>>n;
    cout<<replace(n);
}