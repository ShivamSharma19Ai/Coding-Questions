#include<iostream>
using namespace std;

void rotatek(int* arr,int n,int k){
     for(int i=n-k;i<n;i++){
        cout<<arr[i];
     }
     for(int i=0;i<n-k;i++){
        cout<<arr[i];
     }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotatek(arr,n,k);
}