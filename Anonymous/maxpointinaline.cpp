class Solution {
public:
    // To calculate slope the formula is m = y2-y1/x2-x2 
    //We want to calculate slope because y=mx+c
    // Here the line is defined by m and c since we have fixed the point therefore no need for c
    int maxPoints(vector<vector<int>>& points) {
        //n stores the no of points
        int n=points.size();
        int ans=0;
        // We loop through all points
        for(int i=0;i<n;i++){
            // we have to add the samepoints at the end as we dont take into consideration at first the point that we are taking as the main point
            int samepoints=1;
            // mpa containing slope and no of occcurences of that slope
            unordered_map<double,int> m;
            // now we loop through all points
            for(int j=0;j<n;j++){
                // if we are on the smape place then we shall continue
                if(i==j){
                    continue;
                }
                // if points are same
                if(points[j][0] == points[i][0] and points[j][1] == points[i][1])
                {
                    samepoints++;
                }
                // calculate y2- y1/ x2-x1
                else{
                    double slope = double(points[i][1]-points[j][1])/double (points[i][0]-points[j][0]);
                    m[slope]++; 
                }
            }
            int maxi = 0;
            // loop through map and get the max value in maxi
            for(auto &it:m)
            {
                if(it.second>maxi) maxi = it.second;
            }
            //add the samepoints
            maxi += samepoints;
            // put max of ans and maxi in ans
            ans = max(ans, maxi);
        }
        return ans;
    }
    
};