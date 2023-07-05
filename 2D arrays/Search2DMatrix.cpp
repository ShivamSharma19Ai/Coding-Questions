/*
GFG Optimized Solution


#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>> arr, int target){
    int n=arr.size();
    int m=arr[0].size();
    int i=0;
    int j=m-1;
    bool ans=false;
    while( i<n && j>=0){
        if(arr[i][j] == target){
            return true;
        }
        if(arr[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    cout<<searchmatrix(arr, target);
}
*/
#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>> arr, int target){
    if(!arr.size()){
        return false;
    }
    int n=arr.size();
    int m=arr[0].size();

    int low=0;
    int high=m-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid/m][mid%m] == target){
            return true;
        }
        if(arr[mid/m][mid%m] <target){
           low=mid+1;
        }
        else{
           high=mid-1;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    cout<<searchmatrix(arr, target);
}