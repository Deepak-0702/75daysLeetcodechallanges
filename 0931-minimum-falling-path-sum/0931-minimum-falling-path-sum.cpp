class Solution {
public:
int helper(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>&dp){
    int m=matrix.size();
    int n=matrix[0].size();
    if(j<0 || j>=n) return 1e9;
    if(i==m-1) return matrix[i][j];
    if(dp[i][j]!=-101) return dp[i][j];
    int down=matrix[i][j]+helper(i+1,j,matrix,dp);
    int right=matrix[i][j]+helper(i+1,j+1,matrix,dp);
    int left=matrix[i][j]+helper(i+1,j-1,matrix,dp);
    return dp[i][j]=min({down,right,left});
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-101));
        int mini=INT_MAX;
        for(int j=0;j<n;j++){
            mini=min(mini,helper(0,j,matrix,dp));
        }
        return mini;
    }
};