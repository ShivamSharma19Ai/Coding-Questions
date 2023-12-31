//Leetcode 216

class Solution {
public:
    vector<vector<int>> result;
    void try_combinations(vector<int> & combination, int k,int n,int start){
        if(k==combination.size()){
            if(n==0){
                result.push_back(combination);
            }
            return;
        }
        for(int i = start;i <= 9; ++i){
            combination.push_back(i);
            try_combinations(combination,k,n-i,i+1);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        try_combinations(combination, k, n, 1);
        return result;
    }
};