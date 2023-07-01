#include<iostream>
#include <algorithm>
using namespace std;

int minjumps(int n, int arr[]){

    if(n<=1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }

    int maxreach=arr[0];
    int step=arr[0];
    int jump=1;

    for(int i=0;i<n;i++){
        if(i==n-1){
            return jump;
        }
        step--;
        maxreach=max(maxreach, arr[i]+i);
        if(step==0){
            jump++;
            if(i>=maxreach){
                return -1;
            }
            step=maxreach-1;
        }
    }
    return -1;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minjumps(n, arr);
}