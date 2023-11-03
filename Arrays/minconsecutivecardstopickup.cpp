class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        //Creating a map to store the number and the index no
        map<int,int> mp;
        int n=cards.size();
        int ans=INT_MAX;
        //Looping through numbers
        for(int i=0;i<n;i++){
            int value=INT_MAX;
            // Using an iterator you find whether you already have that number
            map<int,int>::iterator it=mp.find(cards[i]);
           if(it!=mp.end()){
               // THe index at which we found the first occurance - the pos now + 1 due to 0 indexing 
              value=i-(it->second)+1;
           }
           // setting the index
           mp[cards[i]]=i;
           if(value<ans){
               ans=value;
           }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};