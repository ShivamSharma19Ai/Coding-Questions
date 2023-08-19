#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int bitval(int n){
    int a=n;
    int m=512;
    int count=0;
    while(n>0){
        if(n>=m){
            n=n-m;
            m=m/2;
            count++;
        }
        else{
            m=m/2;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        int val=bitval(i);
        arr[i-1]=val;
    }
    sort(arr,arr+n,greater<int>());
    int ans[n];
    for(int i=1;i<=n;i++){
        int val=bitval(i);
        for(int j=0;j<n;j++){
            if(val==arr[j] && arr[j]!=arr[j+1]){
                ans[j]=i;
                arr[j]=-1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}