// Leetcode 540

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        //We have taken high as n-2 in case last element is the answer
        int high=nums.size()-2;
        int mid;
        while(low<=high){
            //It is basically equivalent to low+high/2
            mid=(low+high) >> 1;
            // check if it is part of left side what this does is if mid is odd it compares with mid-1 while if it is even it compares with mid+1;
            if(nums[mid] == nums[mid^1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return nums[low];
    }
};