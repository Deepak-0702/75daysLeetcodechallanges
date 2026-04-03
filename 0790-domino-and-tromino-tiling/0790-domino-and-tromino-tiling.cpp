class Solution {
public:
const int MOD=1e9+7;
int helper(int n,vector<int>&dp){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;
    if(dp[n]!=-1) return dp[n];
    long long left=helper(n-1,dp);
    // ye wala case ki jarurat nhi hai kyu ki vo int right=helper(n-2);
    long long trim=helper(n-3,dp);
    return dp[n]= (2*left%MOD+trim%MOD)%MOD;
}
    int numTilings(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};