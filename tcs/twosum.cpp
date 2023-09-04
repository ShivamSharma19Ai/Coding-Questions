 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.find(target-nums[i])!=map.end()){
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
            }
            else{
                map[nums[i]]=i;
            }
        }
        return ans;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=1;j<nums.size();j++){
        //         if(i==j){
        //             continue;
        //         }
        //         if(target==nums[i]+nums[j]){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }
        // return ans;
    }