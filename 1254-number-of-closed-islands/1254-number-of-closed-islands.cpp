class Solution {
public:
bool helper(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<bool>>&vis){
    if(i<0 || j<0 || i>=m || j>=n){
        return false;
    }
    if(grid[i][j]==1 || vis[i][j]){
        return true;
    }
    vis[i][j]=true;
    bool up=helper(i+1,j,m,n,grid,vis);
    bool down=helper(i-1,j,m,n,grid,vis);
    bool right=helper(i,j-1,m,n,grid,vis);
    bool left=helper(i,j+1,m,n,grid,vis);
    return up && down && right && left;

}
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0 && vis[i][j]==false){
                    if(helper(i,j,m,n,grid,vis)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};