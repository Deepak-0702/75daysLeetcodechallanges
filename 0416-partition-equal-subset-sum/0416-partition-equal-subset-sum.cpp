class Solution {
public:
bool helper(int idx,vector<int>&nums,int target,vector<vector<int>>&dp){
    if(target<0) return false;
    if(target==0 && idx==nums.size()){
        return true;
    }
    if(target!=0 && idx==nums.size() ){
        return false;
    }
    if(dp[idx][target]!=-1) return dp[idx][target];
    int incl=helper(idx+1,nums,target-nums[idx],dp);
    int excl=helper(idx+1,nums,target,dp);

    return dp[idx][target]=incl||excl;
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(target+1,-1));
        return helper(0,nums,target,dp);
    }
};