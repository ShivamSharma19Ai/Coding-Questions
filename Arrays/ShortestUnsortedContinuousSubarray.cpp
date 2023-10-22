class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int max=nums[0];
        int n= nums.size();
        int end=0;
        for(int i=1;i<n;i++){
            if(nums[i]<max){
                end=i;
            }
            else{
                max=nums[i];
            }
        }
        int min=nums[n-1];
        int start=1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>min){
                start=i;
            }
            else{
                min=nums[i];
            }
        }
        return end-start+1;

    }
};