#include<iostream>
#include <vector>
using namespace std;

int maxProfit(int n,vector<int>& prices) {
       int minsofar=prices[0];
       int profit=0;
       for(int i=0;i<n;i++){
           if(prices[i]<minsofar){
               minsofar=prices[i];
           }
           profit=max(profit,prices[i]-minsofar);
       }
       return profit;
    }

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr.push_back(j);
    }
    int maximum=maxProfit(n, arr);
    cout<<maximum;
}