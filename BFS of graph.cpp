 vector<int> bfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        vector<int>ans;
    int vis[n]={0};
    vis[0]=1;
    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto i:adj[node]){
            if(vis[i]==false){
                vis[i]=true;
                q.push(i);
            }
        }
        
    }
        return ans;
    }
