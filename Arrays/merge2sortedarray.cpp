#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(int n, int m, int arr1[], int arr2[]){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<=n && j<=m){
        if(i==n && j!=m){
            ans.push_back(arr2[j]);
            j++;
        }
        if(j==m && i!=n){
            ans.push_back(arr1[i]);
            i++;
        }
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        if(arr1[i]>=arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
    }
    return ans;
}

int main(){
    int n;
    int m;
    
    
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> ans=merge(n , m, arr1, arr2);
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }
}