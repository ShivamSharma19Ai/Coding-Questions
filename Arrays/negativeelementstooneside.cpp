#include <iostream>
using namespace std;

void negsort(int n, int arr[]){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<0 && arr[j]<0){
            i++;
        }
        else if(arr[i]>0 && arr[j]>0){
            j--;
        }
        else if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    negsort(n, arr);
}