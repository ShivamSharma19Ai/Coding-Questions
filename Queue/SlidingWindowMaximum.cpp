//239

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //Creating a deque where we can add in front front as well as back the same is true for deleting
        deque<int> dq;
        // Used for storing ans
        vector<int> ans;
        //Iteration through the nums array
        for(int i=0;i<nums.size();i++){
            // If dequeue is not empty and the top most element is no longer part of the sliding subwindow as denoted by i-k then you need to pop that element
           if(!dq.empty() && dq.front()==i-k){
               dq.pop_front();
           }
           //Remove smaller elements from deque we use pop back because we want to remove from lowest to highest
           while(!dq.empty() && nums[dq.back()]<nums[i]){
               dq.pop_back();
           }
           //add the index
           dq.push_back(i);
           //Do not add to and untill we reach k no of elements
           if(i>=k-1){
               ans.push_back(nums[dq.front()]);
           }
        }
        return ans;
    }
};