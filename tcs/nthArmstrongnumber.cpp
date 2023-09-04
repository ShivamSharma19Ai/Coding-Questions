#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int NArmstrong(int n){
    int count=0;
    for(int i=1;i<=INT_MAX;i++){
        int num=i,rem,digit=0,sum=0;
        num=i;
        //Total Digits
        digit=(int)log10(num)+1;
        while(num>0){
            rem=num%10;
            sum=sum+=pow(rem,digit);
            num=num/10;
        }
        if(i==sum){
            count++;
        }
        if(count==n){
            return i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    cout<<NArmstrong(n);
}