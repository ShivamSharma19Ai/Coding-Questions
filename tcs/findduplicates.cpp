#include<iostream>
#include<vector>
using namespace std;

vector<int> findduplicate(int& arr,int n){
    int i;
    for(int i=0;i<n;i++){
        if (arr[abs(arr[i])]>=0)
        {
            arr[abs(arr[i])]=-arr[abs(arr[i])];
        }
        
    }
}

int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findduplicate(arr,n);
}