#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    map<int,int>::iterator it;
    it=mpp.begin();
    while(it!=mpp.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}