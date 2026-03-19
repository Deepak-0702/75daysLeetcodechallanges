class Solution {
public:
int helper(vector<int>&cost,int n,vector<int>&dp){
    if(n==0) return cost[0];
    if(n==1) return cost[1];
    if(dp[n]!=-1) return dp[n];
    dp[n]=min(helper(cost,n-1,dp),helper(cost,n-2,dp))+cost[n];
    return dp[n];
    
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
    }
};