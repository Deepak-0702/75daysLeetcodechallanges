class Solution {
public:
int helper(int i,int sum,int target,vector<vector<int>>&mat,vector<vector<int>>&dp){
    if(i==mat.size()){
        return abs(target-sum);
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    int ans=INT_MAX;
    for(int j=0;j<mat[0].size();j++){
        ans=min(ans,helper(i+1,sum+mat[i][j],target,mat,dp));
    }
    return dp[i][sum]=ans;

}
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int m=mat.size();
    
        vector<vector<int>>dp(m,vector<int>(4901,-1));
        return helper(0,0,target,mat,dp);
    }
};