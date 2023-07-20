//Leetocode 403
class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n= stones.size();
        unordered_map<int, unordered_set<int>> jumps;
        int i;

        for(int i=0;i<n;i++){
            jumps[stones[i]]={};
        }
        jumps[0].insert(1);
        for(i=0;i<n;i++)
        {
            int currstone=stones[i];
            for(auto jump: jumps[currstone]){
                int pos= currstone + jump;
                if(pos==stones[n-1]){
                    return true;
                }
                if(jumps.find(pos)!=jumps.end()){
                if(jump-1 > 0){
                    jumps[pos].insert(jump-1);
                }
                jumps[pos].insert(jump);
                jumps[pos].insert(jump+1);
                }

            }
        }
        return false;
    }
};