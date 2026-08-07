class Solution {
public:
int dfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&vis){
    int m=grid.size();
    int n=grid[0].size();
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || vis[i][j]){
        return 0;
    }
    vis[i][j]=true;
    int area=1;
    area+=dfs(i+1,j,grid,vis);
    area+=dfs(i-1,j,grid,vis);
    area+=dfs(i,j+1,grid,vis);
    area+=dfs(i,j-1,grid,vis);

    return area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int maxi=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]==false){
                    int a=dfs(i,j,grid,vis);
                    maxi=max(maxi,a);
                }
            }
        }
        return maxi;
    }
};