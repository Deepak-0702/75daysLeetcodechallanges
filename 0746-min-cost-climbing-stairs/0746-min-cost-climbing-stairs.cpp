class Solution {
public:
int helper(int n ,vector<int>&cost,vector<int>&dp){
    if(n==0 || n==1 ) return cost[n];
    

    if(dp[n]!=-1) return dp[n];

    int one=helper(n-1,cost,dp);
    int two=helper(n-2,cost,dp);

    return dp[n]=min(one ,two)+cost[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(helper(n-1,cost,dp),helper(n-2,cost,dp));
    }
};