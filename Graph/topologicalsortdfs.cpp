public:
	void dfs(int node, int vis[], stack < int > & st, vector < int > adj[]) {
    vis[node] = 1;

    for (auto it: adj[node]) {
      if (!vis[it]) {
        dfs(it, vis, st, adj);
      }
    }
    st.push(node);
  }
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    int vis[V]={0};
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,s,adj);
	        }
	    }
	    vector<int> ans;
	    while(!s.empty()){
	        int a=s.top();
	        s.pop();
	        ans.push_back(a);
	    }
	    return ans;
	}