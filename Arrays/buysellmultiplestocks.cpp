       

#include <iostream>
using namespace std;

int maxprofit(int n, int prices[]){
    int profit=0;
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            profit+=(prices[i]-prices[i-1]);
        }
    }
    return profit;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum=maxprofit(n, arr);
}