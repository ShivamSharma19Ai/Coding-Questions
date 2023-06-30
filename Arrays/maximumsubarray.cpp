#include <iostream>
#include <algorithm>
using namespace std;

int maxsum(int n, int arr[]){
    int sum=0;
    int maximum=arr[0];
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maximum=max(sum,maximum);
        if(sum<0){
            sum=0;
        }
    }
    return maximum;
}

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<maxsum(n, arr);
}