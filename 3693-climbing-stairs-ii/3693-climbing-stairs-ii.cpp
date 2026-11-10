class Solution {
public:
int helper(int idx,int n,vector<int>&costs,vector<int>&dp){
    if(idx==n){
        return 0;
    }
    if(dp[idx]!=-1) return dp[idx];
    int ans=INT_MAX;
    for(int j=idx+1;j<=min(n,idx+3);j++){
        int jumpcost=costs[j-1]+(j-idx)*(j-idx);

        ans=min(ans,jumpcost+helper(j,n,costs,dp));
    }
    return dp[idx]= ans;
}
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return helper(0,n,costs,dp);
    }
};