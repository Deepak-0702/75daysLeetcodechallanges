class Solution {
public:
vector<int>bfs(int V,vector<vector<int>>&adj,vector<int>&ans,vector<int>&arr){
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
    if(ans.size()==V) return ans;
    vector<int>vec;
    return vec; 
}
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(V);
        vector<int>ans;
        vector<int>arr(V);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
            arr[u]++;
        }
        return bfs(V,adj,ans,arr);

    }
};