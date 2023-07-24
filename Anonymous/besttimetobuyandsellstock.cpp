//Leetcode 121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minsofar=prices[0];
       int profit=0;
       int n=prices.size();
       for(int i=0;i<n;i++){
           if(prices[i]<minsofar){
               minsofar=prices[i];
           }
           profit=max(profit,prices[i]-minsofar);
       }
       return profit;
    }
};