class Solution {
public:
long long helper(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<bool>>&vis){
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || vis[i][j]==true){
        return 0;
    }
    vis[i][j]=true;
    long long sum=grid[i][j];
    sum+=helper(i+1,j,m,n,grid,vis);
    sum+=helper(i-1,j,m,n,grid,vis);
    sum+=helper(i,j+1,m,n,grid,vis);
    sum+=helper(i,j-1,m,n,grid,vis);
    return sum;
}
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>0 && vis[i][j]==false){
                    long long totalSum=helper(i,j,m,n,grid,vis);
                    if(k!=0 && totalSum % k==0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};