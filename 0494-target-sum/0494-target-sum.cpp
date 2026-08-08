class Solution {
public:
long long helper(int idx,long long sum,int target,int offset,vector<int>&nums,
vector<vector<long long>>&dp){
    if(idx==nums.size()){
        if(sum==target){
            return 1;
        }
        return 0;
    }
    if(dp[idx][sum+offset]!=-1) return dp[idx][sum+offset];
    long long op1=helper(idx+1,sum+nums[idx],target,offset,nums,dp);
    long long op2=helper(idx+1,sum-nums[idx],target,offset,nums,dp);

    return dp[idx][sum+offset]=op1+op2;

}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int total=0;
        for(int x:nums){
            total+=x;
        }
        int offset=total;
        vector<vector<long long>>dp(n,vector<long long>(2*total+1,-1));


        long long  ways=helper(0,0,target,offset,nums,dp);
        return (int)ways;
    }
};