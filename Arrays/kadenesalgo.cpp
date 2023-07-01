#include<algorithm>
#include <iostream>
using namespace std;

int kadene(int n, int arr[]){
    int sum=0;
    int maximum=INT16_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maximum=max(maximum, sum);
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
    int maximum=kadene(n, arr);
    cout<<maximum;
}