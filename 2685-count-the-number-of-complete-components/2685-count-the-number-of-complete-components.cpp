class Solution {
public:
bool bfs(int i,vector<vector<int>>&adj,vector<bool>&vis){
    queue<int>q;
    q.push(i);
    vis[i]=true;
    int edges=0;
    int nodes=0;
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        nodes++;
        edges+=adj[p].size();
        for(int x:adj[p]){
            if(!vis[x]){
                q.push(x);
                vis[x]=true;
            }
        }
    }
    edges=edges/2;
    return edges==(nodes * (nodes - 1)) / 2;
}
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<bool>vis(n,false);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
               if(bfs(i,adj,vis)) count++;
            }
        }
        return count;
    }
};