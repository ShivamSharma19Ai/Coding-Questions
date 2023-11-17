class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxi=0;
        while(l<r){
            int lh=height[l];
            int rh=height[r];
            int minh = min(height[l],height[r]);
            int len=r-l;
            int curr=minh*len;
            maxi=max(maxi,curr);
            if(lh<rh){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
        /*
        int n=height.size();
        int maxi=0;
        int leftmax=0;
        int rightmax=0;
        for(int i=0;i<n/2;i++){
            if(height[i]>height[leftmax]){
                leftmax=i;
            }
        }
        for(int j=n/2;j<n;j++){
            if(height[j]>height[rightmax]){
                rightmax=j;
            }
        }
        for(int i=0;i<=leftmax;i++){
           for(int j=rightmax;j<n;j++){
               int ans=min(height[i],height[j]);
               int diff=j-i;
               int val=ans*diff;
               if(val>maxi){
                   maxi=val;
               }
           }
        }
        return maxi;
        */
    }
};