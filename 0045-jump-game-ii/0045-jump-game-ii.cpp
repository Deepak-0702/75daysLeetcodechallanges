class Solution {
public:
long long helper(int idx,vector<int>&nums,vector<long long>&dp){
    if(idx>=nums.size()-1) return 0;
    if(dp[idx]!=-1) return dp[idx];
    long long mini=LLONG_MAX;
    for(int i=1;i<=nums[idx];i++){
        long long ans=helper(idx+i,nums,dp);
        if(ans!=LLONG_MAX){
            mini=min(mini,1+ans);
        }
    }
    return dp[idx]=mini;
}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<long long>dp(n,-1);
        int ans=helper(0,nums,dp);
        return ans;
    }
};