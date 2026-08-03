class Solution {
public:
int helper(int i,int j,int m,int n,vector<vector<int>>& grid,int idx,int totalempty,vector<vector<bool>>&vis){
    if(i<0 || j<0 || i>=m || j>=n || vis[i][j] || grid[i][j]==-1) return 0;

    if(grid[i][j]==2){
        if(idx==totalempty+1){
            return 1;
        }
        else{
            return 0;
        }
    }
    int  count=0;
    vis[i][j]=true;
    count+=helper(i+1,j,m,n,grid,idx+1,totalempty,vis);
    count+=helper(i-1,j,m,n,grid,idx+1,totalempty,vis);
    count+=helper(i,j+1,m,n,grid,idx+1,totalempty,vis);
    count+=helper(i,j-1,m,n,grid,idx+1,totalempty,vis);
    vis[i][j]=false;
    return count;
}
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int totalempty=0;
        int p=0;
        int q=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    p=i;
                    q=j;
                }
                if(grid[i][j]==0){
                    totalempty++;
                }
            }
        }
        return helper(p,q,m,n,grid,0,totalempty,vis);
    }
};