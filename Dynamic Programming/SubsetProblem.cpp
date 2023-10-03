#include<iostream>
using namespace std;

int subset(int arr[], int n, int sum){
    if(sum==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(arr[n-1]>sum){
        return subset(arr,n-1,sum);
    }
    else{
        return subset(arr,n-1,sum)||subset(arr,n-1,sum-arr[n-1]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<subset(arr, n, sum);
}