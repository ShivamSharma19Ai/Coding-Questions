
class Solution 

{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        vector<vector<int>> ans=grid;
        int n=ans.size();
        int m=ans[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==2)
                    q.push({{i,j},0});
            }
        }
        int cnt,mxcnt=0;
        int row,col,nrow,ncol;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        while(!q.empty()){
            row=q.front().first.first;
            col=q.front().first.second;
            cnt=q.front().second;
            mxcnt=max(mxcnt,cnt);
            q.pop();
            for(int i=0;i<4;i++){
                nrow=row+delRow[i];
                ncol=col+delCol[i];
                if((nrow>=0 && nrow<n) && (ncol>=0 && ncol<m) && ans[nrow][ncol]==1){
                ans[nrow][ncol]=2;
                q.push({{nrow,ncol},cnt+1});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==1)
                   return -1;
            }
        }
        return mxcnt;
    }
};

/*
class Solution 
{
    public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        // initialize {{row,col}, time}
        queue<pair<pair<int,int>,int>> q;
        // Visited Vector grid
        vector<vector<int>> vis;
        // Countfresh variable to check if all the fresh fruits were rotten at last
        int cntfresh=0;
        // Loop the grid
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // If we have any rotten orange put them in queue so we can perform the operations on them
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                // If we have fresh orange increase cntfresh
                if(grid[i][j]==1){
                   cntfresh++;
                }
                //else just initialize visited with 0 else it will give error
                else{
                    vis[i][j]=0;
                }
            }
        }
        // time 
        int tm=0;
        // count of oranges turned rotten
        int cnt=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        // All rotten oranges effect complete
        while(!q.empty()){
            //Row
            int r=q.front().first.first;
            //Col
            int c=q.front().first.second;
            //Time
            int t=q.front().second;
            //Get maximum time;
            tm=max(tm,t);
            //Pop the top so we can get new pos next time
            q.pop();
            //Traverse the effect ie left down right up
            for(int i=0;i<4;i++){
                int nrow= r+ drow[i];
                int ncol= c+ dcol[i];
                //3 condition 1. not Out of Bounds 2. Not Visited 3. Fresh Orange
                if((nrow>=0 && nrow<n) && (ncol>=0 && ncol<m) && vis[nrow][ncol]==1){{
                    //Push the new rotten orange but also increase time
                    q.push({{nrow,ncol},t+1});
                    //Make it visited
                    vis[nrow][ncol]=2;
                    cnt++;
                }
            }
        }
        if(cnt!=cntfresh){
            return -1;
        }
        return tm;
    }
};
*/
//994