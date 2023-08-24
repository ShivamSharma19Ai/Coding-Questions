class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        q.push(0);
        const int V=graph.size();
        int color[V];
        for(int i=0;i<V;i++){
            color[i]=-1;
        }
        color[0]=0;
        while(!q.empty()){
            int node=q.front();
            const int u = q.front();
            q.pop();
            for(auto it: graph[u]){
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]== color[node]){
                    return false;
                }
            }
        }
        return true;
    }
};