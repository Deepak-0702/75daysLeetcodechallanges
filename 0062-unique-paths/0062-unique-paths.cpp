class Solution {
public:
int helper(int i,int j,int m,int n,vector<vector<int>>&dp){
    if(i==m-1 || j==n-1){
        return 1;
    }
    if(i>=m || j>=n) return 0;
    if(dp[i][j]!=-101) return dp[i][j];
    int c1=helper(i+1,j,m,n,dp);
    int c2=helper(i,j+1,m,n,dp);
    return dp[i][j]=c1+c2;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-101));
        return helper(0,0,m,n,dp);

    }
};