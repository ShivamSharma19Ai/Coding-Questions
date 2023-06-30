#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
    set<int> s;
    for (int i = 0;i < n;i++) s.insert(a[i]);
    for (int i = 0;i < m;i++) s.insert(b[i]);
    return s.size();
}


int dointersection(int n, int arr1[], int m, int arr2[]){
    int i=0;
    int j=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int ans=0;
    while(i<n && j<m){
        if (arr1[i] == arr2[j]) {
            ans++;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) i++;
        else j++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<dointersection(n, arr1, m, arr2);
}