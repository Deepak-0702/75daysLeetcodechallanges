class Solution {
public:
int helper(int n,vector<int>&prfsq,vector<int>&dp){
    if(n==0) return 0;
    if(n<0) return INT_MAX;
    if(dp[n]!=-1) return dp[n];
    int mini=INT_MAX;
    for(int i=0;i<prfsq.size();i++){
        if(prfsq[i]>n) break;
        int ans=helper(n-prfsq[i],prfsq,dp);
        if(ans!=INT_MAX){
            mini=min(mini,1+ans);
        }
    }
    return dp[n]=mini;
}
    int numSquares(int n) {
        vector<int>prfsq;
        for(int i=1;i*i<=n;i++){
            prfsq.push_back(i*i);
        }
        vector<int>dp(n+1,-1);
        int ans=helper(n,prfsq,dp);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;

    }
};