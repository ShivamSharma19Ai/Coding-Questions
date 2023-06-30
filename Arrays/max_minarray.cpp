#include <iostream>
#include <utility>
using namespace std;

pair<int ,int> maxmin(int n, int arr[]){
    pair<int ,int> maxminval;
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    maxminval.first=min;
    maxminval.second=max;
    return maxminval;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int ,int> ans=maxmin(n,arr);
    cout<<ans.first<<" "<<ans.second;
}