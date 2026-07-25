class Solution {
public:
int helper(int idx,vector<int>&nums,int prev,vector<vector<int>>&dp){
    if(idx==nums.size()){
        return 0;
    }
    if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
    int ans=0;
    if( prev==-1 || nums[idx]>nums[prev])
    {
        ans=1+helper(idx+1,nums,idx,dp);
    }
    int exl=helper(idx+1,nums,prev,dp);

    return dp[idx][prev+1]=max(ans,exl);


}
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return helper(0,nums,-1,dp);
    }
};