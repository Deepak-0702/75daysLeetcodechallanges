class Solution {
public:
int helper(int i,int j,int m,int n,int cost,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp){
    if(i<0 || j<0 || i>=m || j>=n){
        return INT_MAX;
    }
    cost^=grid[i][j];
    if(i==m-1 && j==n-1){
        return cost;
    }
    if(dp[i][j][cost]!=-1) return dp[i][j][cost];
    int down=helper(i+1,j,m,n,cost,grid,dp);
    int right=helper(i,j+1,m,n,cost,grid,dp);
    return dp[i][j][cost]=min(down,right);
}
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>>dp(m,
        vector<vector<int>>(n,vector<int>(1024,-1)));
        return helper(0,0,m,n,0,grid,dp);
    }
};