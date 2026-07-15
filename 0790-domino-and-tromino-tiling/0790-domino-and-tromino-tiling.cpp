class Solution {
public:
long long mod=1e9+7;
long long helper(int n,vector<int>&dp){
    if(n==0) return 1;
    if(n==1) return 1;
    if(n==2) return 2;
    if(dp[n]!=-1) return dp[n];
    long long vert=helper(n-1,dp)%mod;
    long long horz=helper(n-3,dp)%mod;
    return dp[n]=(2LL*vert+horz)%mod;
}
    int numTilings(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};