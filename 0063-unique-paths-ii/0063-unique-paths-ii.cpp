class Solution {
public:
int helper(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
    int m=obstacleGrid.size();
    int n=obstacleGrid[0].size();
    if(i>=m || j>=n) return 0;
    if(obstacleGrid[i][j]==1) return 0;
    if(i==m-1 && j==n-1) return 1;
    if(dp[i][j]!=-101) return dp[i][j];
    int down=helper(i+1,j,obstacleGrid,dp);
    int right=helper(i,j+1,obstacleGrid,dp);
    return dp[i][j]=down+right;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-101));
        return helper(0,0,obstacleGrid,dp);
    }
};