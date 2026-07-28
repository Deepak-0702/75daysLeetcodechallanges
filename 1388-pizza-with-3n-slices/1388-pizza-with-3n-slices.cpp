class Solution {
public:
int helper(int idx,int end,vector<int>&slices,int n,vector<vector<int>>&dp){
    if(n==0 || idx>end) return 0;
    if(dp[idx][n]!=-1) return dp[idx][n];
    int pick=slices[idx]+helper(idx+2,end,slices,n-1,dp);
    int notpick=helper(idx+1,end,slices,n,dp);

    return dp[idx][n]=max(pick,notpick);
}
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        vector<vector<int>>dp1(k,vector<int>(k,-1));
        vector<vector<int>>dp2(k,vector<int>(k,-1));
        int case1=helper(0,k-2,slices,k/3,dp1);
        int case2=helper(1,k-1,slices,k/3,dp2);

        return max(case1,case2);
    }
};