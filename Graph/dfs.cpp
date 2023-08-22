 public:
    void dfs(int node,vetor<int> adj[],int vis[],vector<int> &ls){
        vis[node]=1;
        ls.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it, adj,  vis, ls);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[n]={0};
        int start=0;
        vector<int> ls;
        dfs(start, adj,  vis, ls);
    }