class Solution {
public:
bool bfs(int V,vector<vector<int>>&adj,vector<int>&arr,vector<int>&ans){
    queue<int>q;
    for(int i=0;i<V;i++){
        if(arr[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        auto p=q.front();
        ans.push_back(p);
        q.pop();

        for(int x:adj[p]){
            arr[x]--;
            if(arr[x]==0){
                q.push(x);
            }
        }
    }
    if(ans.size()==V) return true;
    return false;
}
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(V);
        vector<int>arr(V);
        vector<int>ans;
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
            arr[u]++;
        }
        return bfs(V,adj,arr,ans);
    }
};