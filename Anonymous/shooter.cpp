#include <iostream>
using namespace std;

int maxpointshelp(int n, int arr[], int i, int j, int max){
    if(i>j || i==j){
        return max;
    }
    if(arr[i]>arr[j]){
        if(arr[i+1]>arr[j]){
            maxpointshelp(n, arr, i+2, j, max+arr[i]);
        }
        else{
            maxpointshelp(n,arr,i+1,j-1,max+arr[i]);
        }
    }
    else{
        if(arr[j-1]>arr[i]){
            maxpointshelp(n,arr,i,j-2,max+arr[j]);
        }
        else{
            maxpointshelp(n,arr,i+1,j-1,max+arr[j]);
        }
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=0;
    cout<<maxpointshelp(n, arr, a ,n-1, a);
    
}