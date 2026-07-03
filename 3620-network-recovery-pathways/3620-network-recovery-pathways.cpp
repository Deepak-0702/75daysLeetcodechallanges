class Solution {
public:
bool check(int mid,vector<vector<pair<int,int>>>&adj,vector<int>&topo,vector<bool>&online,long long k){
    int n=online.size();
    vector<long long>dp(n,LLONG_MAX);
    dp[0]=0;
    for(int u:topo){
        if(dp[u]==LLONG_MAX) continue;
        if(u!=0 && u!=n-1 && !online[u]) continue;

        for(auto &it:adj[u]){
            int v=it.first;
            int w=it.second;
            if(w<mid){
                continue;
            }
            if(v!=n-1 && !online[v]){
                continue;
            }
            dp[v]=min(dp[v],dp[u]+w);
        }
    }
    return dp[n-1]<=k;

}
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n=online.size();
        vector<vector<pair<int,int>>>adj(n);
        vector<int>indegree(n,0);
        int maxcost=0;
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            adj[u].push_back({v,w});
            indegree[v]++;
            maxcost=max(maxcost,w);
        }
        vector<int>topo;
        vector<int>indeg=indegree;
        queue<int>q;

        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            topo.push_back(p);
            for(auto &it:adj[p]){
                indeg[it.first]--;
                if(indeg[it.first]==0){
                    q.push(it.first);
                }
            }
        }
        int low=0;
        int high=maxcost;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,adj,topo,online,k)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};