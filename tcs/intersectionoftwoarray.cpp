class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       for(int i=0;i<nums1.size();i++){
           bool flag=false;
           for(int j=0;j<nums2.size();j++){
               if(nums1[i]==nums2[j]){
                   if(flag){
                      nums2[j]=-999;
                   }
                   else{
                      ans.push_back(nums2[j]);
                      nums2[j]=-999;
                      flag=true;
                   }
               }
           }
       }
       return ans; 
    
};