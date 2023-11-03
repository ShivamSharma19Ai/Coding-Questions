class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n= points.size();
        int total=0;
        //Loop through the points
        for(int i=0;i<n;i++){
            //Create a map to keep the distances
            map<int,int>mp;
            // we loop again to find the distances
            for(int j=0;j<n;j++){
                // this is(x1-y1)^2-(x2-y2)^2 we are not square root as it will have the smae value never the less we just want the same values
                int dist=((points[i][0]-points[j][0])*(points[i][0]-points[j][0]))+((points[i][1]-points[j][1])*(points[i][1]-points[j][1]));
                mp[dist]++;
            }
            //Looping through the points
            for(auto i:mp){
                // if there are two values having the same dist or more than the no of boomerangs that can be fored is n* n-1
                if(i.second){
                    total+=(i.second*(i.second-1));
                }
            }
        }
        return total;
    }
};