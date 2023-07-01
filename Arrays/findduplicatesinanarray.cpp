#include <iostream>
#include <vector>
using namespace std;

vector<int> duplicates(int n, int arr[]){
    vector<int> ans;
    for(int i=0;i<n;i++){
        int index=arr[i]%n;
        arr[index]+=n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]/n>=2){
            ans.push_back(i);
        }
    }
    if(ans.empty()){
        return {-1};
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=duplicates(n, arr);
    for(int i=0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }
}