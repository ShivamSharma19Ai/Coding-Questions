class Solution {
public:
    bool isPossible(vector<int>& nums) {
        // m represents all the nums on array m1 represents last value of the subsequences
        map<int,int> m,m1;
        // adding all th nums to the map
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        // traversing through the array
        for(auto i:nums){
            // If node already used continue
            if(m[i]==0){
                continue;
            }
            m[i]--;
            // if there is already a subseq with it add this one to it
            if(m1[i-1]>0){
                m1[i-1]--;
                m1[i]++;
            }
            // if the next two are present add ot into the seq
            else if(m[i+1]!=0 && m[i+2]!=0){
                m[i+1]--;
                m[i+2]--;
                m1[i+2]++;
            }
            // if none of these condition hold true give false
            else{
                return false;
            }
        }
        return true;
    }
};