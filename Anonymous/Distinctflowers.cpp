#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    unordered_set<int> a;
    for(int i=0;i<k;i++){
        a.insert(arr[i]);
    }
    cout<<a.size();
}