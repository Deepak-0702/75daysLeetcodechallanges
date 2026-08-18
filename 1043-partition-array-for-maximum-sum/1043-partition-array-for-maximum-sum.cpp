class Solution {
public:
int helper(int idx,vector<int>&nums,int k,vector<int>&dp){
    int n=nums.size();
    if(idx==n) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int len=0;
    int maxi=INT_MIN;
    int maxSum=INT_MIN;
    for(int j=idx;j<min(idx+k,n);j++){
        len++;
        maxi=max(maxi,nums[j]);
        int curSum=(len*maxi)+helper(j+1,nums,k,dp);
        maxSum=max(maxSum,curSum);
    }
    return dp[idx]=maxSum;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size(),-1);
        return helper(0,arr,k,dp);
    }
};