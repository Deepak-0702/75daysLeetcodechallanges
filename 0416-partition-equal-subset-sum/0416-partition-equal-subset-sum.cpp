class Solution {
public:
bool helper(int idx,vector<int>&nums,int target,vector<vector<int>>&dp){
    if(idx>=nums.size()) return false;
    if(target<0) return false;
    if(target==0){
        return true;
    }
    if(dp[idx][target]!=-1) return dp[idx][target];
    
    bool inc=helper(idx+1,nums,target-nums[idx],dp);
    
    bool excl=helper(idx+1,nums,target,dp);
    return dp[idx][target]=inc || excl;
    
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return helper(0,nums,target,dp);
    }
};