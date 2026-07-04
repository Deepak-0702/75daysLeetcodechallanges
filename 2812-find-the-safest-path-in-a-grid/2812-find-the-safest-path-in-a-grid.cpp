class Solution {
public:
bool check(int mid,vector<vector<int>>&dist){
    int n=dist.size();
    if(dist[0][0]<mid) return false;
    
    queue<pair<int,int>>q;
    vector<vector<int>>vis(n,vector<int>(n,0));
    q.push({0,0});
    vis[0][0]=1;
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if(r==n-1 && c==n-1) return true;

        for(int d=0;d<4;d++){
            int a=r+dr[d];
            int b=c+dc[d];
            if(a>=0 && a<n && b>=0 && b<n && !vis[a][b] && dist[a][b]>=mid){
                vis[a][b]=1;
                q.push({a,b});
            }
        }
    }
    return false;

}
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int  n=grid.size();
        vector<vector<int>>dist(n,vector<int>(n,-1));
        queue<pair<int,int>>q;
        //multi source bfs
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            for(int d=0;d<4;d++){
                int a=r+dr[d];
                int b=c+dc[d];
                if(a>=0 && a<n && b>=0 && b<n && dist[a][b]==-1){
                    dist[a][b]=dist[r][c]+1;
                    q.push({a,b});
                }
            }
        }
        int low=0;
        int high=2*n;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(mid,dist)){
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