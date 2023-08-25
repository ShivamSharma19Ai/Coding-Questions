#include <iostream>
#include <map>
using namespace std;
int cost(int arr[],int arr1[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]=arr1[i];
    }
    for(auto i=m.begin();i!=m.end();i++){
        cout<<i->first<<" "<<i->second;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int ans=cost(arr,arr1,n);
}