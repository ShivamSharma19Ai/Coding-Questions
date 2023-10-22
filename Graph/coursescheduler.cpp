// Leetcode 207

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {   int n=numCourses;
        vector<int> adj[n];  vector<int> id(n,0);
        queue<int> q;
        for(auto x:prerequisites)
        {
            adj[x[0]].push_back(x[1]);
            id[x[1]]++;
        }
        for(int i = 0 ; i < n ; i++)
        {
            if( !id[i] )
                q.push(i);
        }
     int cnt = 0;
      while(!q.empty())
      {
          int t = q.front(); q.pop();
          cnt++;
          for(auto x:adj[t])
          {
              if( --id[x] == 0 )
              {
                  q.push(x);
              }
          }
      }
     if(cnt == n)
         return true;
     return false;
        
    }
};